#include "savesystem.hpp"

SaveSystem::SaveSystem()
{

}

void SaveSystem::saveContact(Contact contact)
{
    file.setFileName(contact.getName());
    file.Write.clean();
    file.Write.setline(contact.getName() + "\n" + contact.getNumber());
}

void SaveSystem::AddToList(Contact contact)
{
    file.setFileName("ListContacts");
    file.Write.setline(contact.getName());
}
