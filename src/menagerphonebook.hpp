#include <iostream>
#include <vector>
#include <string>
#include "contact.hpp"
#ifndef MENAGERPHONEBOOK.HPP
#define MENAGERPHONEBOOK.HPP

class MenagerPhoneBook
{
private:
    std::vector <Contact> Contacts;
protected:

public:
    MenagerPhoneBook();
    void addContact(std::string name, std::string number);
    void addContact(Contact contact);
    void delContact(std::string name, std::string number);
    void delContact(Contact contact);
    void showContacts();
};

#endif // MENAGERPHONEBOOK
