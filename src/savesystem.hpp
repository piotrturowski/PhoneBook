#ifndef SAVECONTACTTOTXT.HPP
#define SAVECONTACTTOTXT.HPP
#include "contact.hpp"
#include "../Tools/iofile/iofile.hpp"

class SaveSystem
{
private:
    IOFile file;
protected:

public:
    SaveSystem();
    void saveContact(Contact contact);
    void AddToList(Contact contact);
};
#endif // SAVECONTACTTOTXT
