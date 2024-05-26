#pragma once

#include <string>

class Contact {
protected:
    std::string Name;
public:
    // Constructor
    Contact(std::string name) : Name(name) {};

    virtual std::string GetName() = 0;
    virtual std::string GetRelationship() = 0;
};