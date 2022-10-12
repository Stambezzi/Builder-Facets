#include "PersonJobBuilder.h"

PersonJobBuilder::PersonJobBuilder(Person& person) : PersonBuilderBase(person) {};

PersonJobBuilder& PersonJobBuilder::InCompany(const std::string& companyName)
{
	fThis.SetCompany(companyName);
	return *this;
}

PersonJobBuilder& PersonJobBuilder::AtAddress(const std::string& address)
{
	fThis.SetAddress(address);
	return *this;
}

PersonJobBuilder& PersonJobBuilder::ForSalary(int salary)
{
	fThis.SetSalary(salary);
	return *this;
}