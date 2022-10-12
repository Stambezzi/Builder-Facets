#pragma once
#include <string>

#include "Person.h"

class PersonAdressBuilder;

class PersonBuilderBase
{
public:
	PersonBuilderBase(Person& current);

	PersonAdressBuilder Lives() const;

	operator Person();

protected:
	Person& fThis;
};

class PersonBuilder : public PersonBuilderBase
{
public:
	PersonBuilder( const std::string& name );

private:
	Person fThis;
};

