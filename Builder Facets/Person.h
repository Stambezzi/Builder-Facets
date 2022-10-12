#pragma once
#include <string>

class PersonBuilder;

class Person
{
	friend class PersonBuilder;
	friend class PersonBuilderBase;
	friend class PersonAddressBuilder;
	friend class PersonJobBuilder;

public:
	static PersonBuilder Create( const std::string& name );

	void SetName(const std::string& name);

	void SetCity(const std::string& name);
	void SetStreet(const std::string& name);

	void SetCompany(const std::string& name);
	void SetAddress(const std::string& name);
	void SetSalary(int salary);

	void Print();

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