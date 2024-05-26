#pragma once

#include <vector>
#include "Contact.h"

class AddressBook {
private:
    std::vector<Contact*> ContactList;
public:
    Contact* SearchByName(std::string name);
    std::vector<Contact*> GetFriendList();
    void DeleteContact(std::string name);
    void AddContact(Contact* contact);
};