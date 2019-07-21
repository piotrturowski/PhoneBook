#include <iostream>
#include <vector>
#include <string>
#include "contact.hpp"
#include "../Tools/iofile/iofile.hpp"
#ifndef LOADSYSTEM.HPP
#define LOADSYSTEM.HPP

class LoadSystem
{
private:
    IOFile file;
public:
    void loadList(std::vector <Contact>& Contacts);
    Contact loadContact(std::string contactName);
    void loadContactNameList(std::vector <std::string>& nameContacts);
};

#endif // LOADSYSTEM
