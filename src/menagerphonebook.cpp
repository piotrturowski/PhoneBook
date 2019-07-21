#include "menagerphonebook.hpp"

MenagerPhoneBook::MenagerPhoneBook()
    {
        loadSystem.loadList(Contacts);
    }

void MenagerPhoneBook::addContact(std::string name,std::string number)
{
    Contacts.push_back(Contact(name,number));
    saveSystem.AddToList(Contact(name,number));
    saveSystem.saveContact(Contact(name,number));
}

void MenagerPhoneBook::addContact(Contact& contact)
{
    Contacts.push_back(contact);
    saveSystem.AddToList(contact);
    saveSystem.saveContact(contact);
}

void MenagerPhoneBook::delContact(std::string name, std::string number)
{
    Contacts.erase(Contacts.begin()+findContact(Contact(name,number)));
}

void MenagerPhoneBook::delContact(Contact& contact)
{
    Contacts.erase(Contacts.begin()+findContact(contact));
}


void MenagerPhoneBook::showContacts()
{
    for( size_t i = 0; i < Contacts.size(); i++ )
    {
        Contacts[i].showData();
    }
}

int MenagerPhoneBook::findContact(Contact contact)
{
    for( size_t i = 0; i < Contacts.size(); i++ )
    {
        if(Contacts[i].getName() == contact.getName() && Contacts[i].getNumber() == contact.getNumber())
            return i;
    }
    return 0;
}

Contact MenagerPhoneBook::getContact(std::string name, std::string number)
{
    return Contacts.at(findContact(Contact(name,number)));
}
