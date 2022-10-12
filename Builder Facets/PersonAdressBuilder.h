#pragma once
#include <string>

#include "PersonBuilder.h"

class Person;
class PersonBuilderBase;

class PersonAdressBuilder : public PersonBuilderBase
{
public:
	PersonAdressBuilder(Person& person);

	PersonAdressBuilder& InCity(const std::string cityName);
	PersonAdressBuilder& InStreet(const std::string streetName);
};

