#include <iostream>

#include "Person.h"
#include "PersonBuilder.h"
#include "PersonAdressBuilder.h"

int main()
{
    Person p = Person::Create("Nikola")
                        .Lives()
                            .InCity("Burgas")
                            .InStreet("Patriarh Evtimii");

    std::cout << "Hello World!\n";

}
