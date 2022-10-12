#include <iostream>

#include "Person.h"
#include "PersonBuilder.h"
#include "PersonAdressBuilder.h"
#include "PersonJobBuilder.h"

int main()
{
    Person p = Person::Create("Nikola")
                        .Lives()
                            .InCity("Burgas")
                            .InStreet("Patriarh Evtimii")
                        .Works()
                            .InCompany("Nemetschek Bulgaria")
                            .AtAddress("Industrialna 11")
                            .ForSalary(5);
        
    p.Print();
}
