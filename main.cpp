#include <iostream>
#include <string>
#include "src/contact.hpp"
#include "src/menagerphonebook.hpp"
int main()
{
    Contact c("turtle ","999888777");
    MenagerPhoneBook m;
    m.addContact("lion","123456789");
    m.addContact("cat","222111333");
    m.addContact(c);
    m.showContacts();
    std::cout << std::endl;
    m.delContact(c);
    m.showContacts();
    return 0;
}
