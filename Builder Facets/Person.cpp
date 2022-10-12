#include <sstream>
#include <iostream>

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

void Person::SetCompany(const std::string& companyName)
{
	fCompanyName = companyName;
}

void Person::SetAddress(const std::string& address)
{
	fAddress = address;
}

void Person::SetSalary(int salary)
{
	fSalary = salary;
}

void Person::Print()
{
	std::stringstream str;
	str << "Person is: " << fName << "\n";
	str << "    Lives at: " << fCity << " " << fStreet << "\n";
	str << "    Works for: " << fCompanyName << " at " << fAddress << " for " << fSalary << " leva \n";

	std::string forPrint;
	while (std::getline(str, forPrint)) {
		std::cout << forPrint << "\n";
	}
}