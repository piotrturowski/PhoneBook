#include <iostream>
#include <vector>
#include <string>
#include "contact.hpp"
#include "savesystem.hpp"
#include "loadsystem.hpp"

#ifndef MENAGERPHONEBOOK.HPP
#define MENAGERPHONEBOOK.HPP
#include "contacteditor.hpp"

class MenagerPhoneBook : public ContactEditor
{
private:
    std::vector <Contact> Contacts;
    LoadSystem loadSystem;
    SaveSystem saveSystem;
protected:

public:
    MenagerPhoneBook();
    void addContact(std::string name, std::string number);
    void addContact(Contact& contact);
    void delContact(std::string name, std::string number);
    void delContact(Contact& contact);
    void showContacts();
    int findContact(Contact contact);
    int findContact(std::string name,std::string number);
    Contact getContact(std::string name,std::string number);

};

#endif // MENAGERPHONEBOOK
