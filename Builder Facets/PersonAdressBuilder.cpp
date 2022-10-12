#include "PersonAdressBuilder.h"

PersonAdressBuilder::PersonAdressBuilder(Person& person) : PersonBuilderBase(person) {};

PersonAdressBuilder& PersonAdressBuilder::InCity(const std::string& cityName)
{
	fThis.SetCity(cityName);
	return *this;
}

PersonAdressBuilder& PersonAdressBuilder::InStreet(const std::string& streetName)
{
	fThis.SetStreet(streetName);
	return *this;
}