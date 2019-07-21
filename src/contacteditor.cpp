#include "contacteditor.hpp"

void ContactEditor::editName(Contact& contact,std::string name)
{
    contact.setName(name);
}

void ContactEditor::editNumber(Contact& contact,std::string number)
{
    contact.setNumber(number);
}
