#pragma once
#include <string>

class PersonBuilder;

class Person
{
	friend class PersonBuilder;
	friend class PersonBuilderBase;
	friend class PersonAddressBuilder;

public:
	static PersonBuilder Create( const std::string& name );

	void SetName(const std::string& name);

	void SetCity(const std::string& name);
	void SetStreet(const std::string& name);

private:
	Person();

protected:
	//Personal information
	std::string fName;

	//Home information
	std::string fCity;
	std::string fStreet;

	//Job information
	std::string fCompanyName;
	std::string fAddress;
	int			fSalary;
};