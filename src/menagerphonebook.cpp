#include "menagerphonebook.hpp"

MenagerPhoneBook::MenagerPhoneBook()
{

}

void MenagerPhoneBook::addContact(std::string name,std::string number)
{
    Contacts.push_back(Contact(name,number));
}

void MenagerPhoneBook::addContact(Contact contact)
{
    Contacts.push_back(contact);
}

void MenagerPhoneBook::delContact(std::string name, std::string number)
{
    for( size_t i = 0; i < Contacts.size(); i++ )
    {
        if(Contacts[i].getName() == name && Contacts[i].getNumber() == number)
            Contacts.erase(Contacts.begin() + i);
    }
}

void MenagerPhoneBook::delContact(Contact contact)
{
    for( size_t i = 0; i < Contacts.size(); i++ )
    {
        if(Contacts[i].getName() == contact.getName() && Contacts[i].getNumber() == contact.getNumber())
            Contacts.erase(Contacts.begin() + i);
    }
}

void MenagerPhoneBook::showContacts()
{
    for( size_t i = 0; i < Contacts.size(); i++ )
    {
        Contacts[i].showData();
    }
}
