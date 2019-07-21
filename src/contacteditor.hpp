#include "contact.hpp"
#ifndef CONTACTEDITOR.HPP
#define CONTACTEDITOR.HPP

class ContactEditor
{
private:

protected:

public:
    virtual void editName(Contact& contact, std::string name);
    virtual void editNumber(Contact& contact,std::string number);

};
#endif // CONTACTEDITOR
