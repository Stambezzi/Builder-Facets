#pragma once
#include <string>

#include "PersonBuilder.h"

class Person;
class PersonBuilderBase;

class PersonJobBuilder : public PersonBuilderBase
{
public:
	PersonJobBuilder(Person& person);

	PersonJobBuilder& InCompany(const std::string& cityName);
	PersonJobBuilder& AtAddress(const std::string& streetName);
	PersonJobBuilder& ForSalary(int salary);
};

