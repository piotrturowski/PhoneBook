#include <iostream>
#include <string>
#ifndef CONTACT.HPP
#define CONTACT.HPP

class Contact
{
private:
    std::string name;
    std::string number;
protected:
    void setName(std::string name);
    void setNumber(std::string number);
public:
    Contact();
    Contact(std::string name, std::string number);
    std::string getName();
    std::string getNumber();
    void showData();
};
#endif // CONTACT
