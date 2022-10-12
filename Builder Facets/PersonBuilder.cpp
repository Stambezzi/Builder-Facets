#include "PersonBuilder.h"
#include "PersonAdressBuilder.h"

PersonBuilderBase::PersonBuilderBase(Person& current) : fThis(current) {}

PersonAdressBuilder PersonBuilderBase::Lives() const
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