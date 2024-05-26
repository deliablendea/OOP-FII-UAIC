#include "Colleague.h"

std::string Colleague::GetName() {
    return this->Name;
}

std::string Colleague::GetRelationship() {
    return "Colleague";
}

std::string Colleague::GetPhoneNumber() {
    return this->PhoneNumber;
}

std::string Colleague::GetCompany() {
    return this->Company;
}

std::string Colleague::GetAddress() {
    return this->Address;
}