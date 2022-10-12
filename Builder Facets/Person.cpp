#include "Person.h"
#include "PersonBuilder.h"

PersonBuilder Person::Create( const std::string& name ) /*static*/
{
	return PersonBuilder(name);
}

Person::Person() : fSalary(0) {}

void Person::SetName(const std::string& name)
{
	fName = name;
}

void Person::SetCity(const std::string& city)
{
	fCity = city;
}

void Person::SetStreet(const std::string& street)
{
	fStreet = street;
}