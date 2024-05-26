#pragma once

#include "Contact.h"

class Colleague : public Contact {
private:
    std::string PhoneNumber;
    std::string Company;
    std::string Address;
public:
    // Constructor
    Colleague(std::string name, std::string phone_number, std::string company, std::string address) : Contact(name), PhoneNumber(phone_number), Company(company), Address(address) {};

    std::string GetName() override final;
    std::string GetRelationship() override final;
    std::string GetPhoneNumber();
    std::string GetCompany();
    std::string GetAddress();
};