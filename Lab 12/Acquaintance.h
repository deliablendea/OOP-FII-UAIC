#pragma once

#include "Contact.h"

class Acquaintance : public Contact {
private:
    std::string PhoneNumber;
public:
    // Constructor
    Acquaintance(std::string name, std::string phone_number) : Contact(name), PhoneNumber(phone_number) {};

    std::string GetName() override final;
    std::string GetRelationship() override final;
    std::string GetPhoneNumber();
};