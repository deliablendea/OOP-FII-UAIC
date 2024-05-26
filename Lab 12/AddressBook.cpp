#include "AddressBook.h"

Contact* AddressBook::SearchByName(std::string name) {
    for (int i = 0; i < this->ContactList.size(); i++)
        if(this->ContactList[i]->GetName() == name)
            return this->ContactList[i];
    return nullptr;
}

std::vector<Contact*> AddressBook::GetFriendList() {
    std::vector<Contact*> TempFriendList;
    for (int i = 0; i < this->ContactList.size(); i++)
        if (this->ContactList[i]->GetRelationship() == "Friend")
            TempFriendList.push_back(this->ContactList[i]);
    return TempFriendList;
}

void AddressBook::DeleteContact(std::string name) {
    for (int i = 0; i < this->ContactList.size(); i++)
        if (this->ContactList[i]->GetName() == name)
            this->ContactList.erase(this->ContactList.begin() + i);
}

void AddressBook::AddContact(Contact* contact) {
    this->ContactList.push_back(contact);
}