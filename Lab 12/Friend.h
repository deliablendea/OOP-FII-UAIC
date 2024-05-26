#pragma once

#include "Contact.h"

class Friend : public Contact {
private:
    std::string Birthday;
    std::string PhoneNumber;
    std::string Address;
public:
    // Constructor
    Friend(std::string name, std::string birthday, std::string phone_number, std::string address) : Contact(name), Birthday(birthday), PhoneNumber(phone_number), Address(address) {};

    std::string GetName() override final;
    std::string GetRelationship() override final;
    std::string GetBirthday();
    std::string GetPhoneNumber();
    std::string GetAddress();
};