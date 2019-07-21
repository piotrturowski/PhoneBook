#include "loadsystem.hpp"

void LoadSystem::loadList(std::vector <Contact>& Contacts)
{
    std::vector <std::string> nameContacts;
    loadContactNameList(nameContacts);
    for( int i = 0; i < nameContacts.size(); i++ )
    {
        Contacts.push_back(loadContact(nameContacts[i]));
    }
}

Contact LoadSystem::loadContact(std::string contactName)
{
    file.setFileName(contactName);
    Contact contact(file.Read.getline(0),file.Read.getline(1));
    return contact;
}

void LoadSystem::loadContactNameList(std::vector <std::string>& nameContacts)
{
    file.setFileName("ListContacts");
    for(int i = 0; i <= file.Read.linesQuantity(); i++)
    {
        nameContacts.push_back(file.Read.getline(i));
    }
}
