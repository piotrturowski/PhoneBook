#include "contact.hpp"

Contact::Contact()
{}

Contact::Contact(std::string name, std::string number)
{
    setName(name);
    setNumber(number);
}

void Contact::setName(std::string name)
{
    this->name=name;
}

void Contact::setNumber(std::string number)
{
    this->number=number;
}

std::string Contact::getName()
{
    return name;
}
std::string Contact::getNumber()
{
    return number;
}

void Contact::showData()
{
    std::cout << getName() << " " << getNumber() << std::endl;
}
