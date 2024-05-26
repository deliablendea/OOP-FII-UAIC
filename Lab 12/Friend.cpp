#include "Friend.h"

std::string Friend::GetName() {
    return this->Name;
}

std::string Friend::GetRelationship() {
    return "Friend";
}

std::string Friend::GetBirthday() {
    return this->Birthday;
}

std::string Friend::GetPhoneNumber() {
    return this->PhoneNumber;
}

std::string Friend::GetAddress() {
    return this->Address;
}