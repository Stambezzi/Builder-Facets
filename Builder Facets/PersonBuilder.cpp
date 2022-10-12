#include "PersonBuilder.h"
#include "PersonAdressBuilder.h"
#include "PersonJobBuilder.h"

PersonBuilderBase::PersonBuilderBase(Person& current) : fThis(current) {}

PersonAdressBuilder PersonBuilderBase::Lives() const
{
	return {fThis};
}

PersonJobBuilder PersonBuilderBase::Works() const
{
	return {fThis};
}

PersonBuilderBase::operator Person()
{
	return fThis;
}

PersonBuilder::PersonBuilder(const std::string& name) : PersonBuilderBase(fThis)
{
	fThis.SetName(name);
}