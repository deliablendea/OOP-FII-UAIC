#include <iostream>
#include "Acquaintance.h"
#include "AddressBook.h"
#include "Colleague.cpp"
#include "Friend.h"

int main() {
    AddressBook address_book;

    Friend* Squidward = new Friend("Squidward Tentacles", "09.10.1977", "365-475-234", "Bikini Bottom");
    Acquaintance* Gary = new Acquaintance("Gary the Snail", "411-480-512");
    Colleague* SpongeBob = new Colleague("SpongeBob SquarePants", "411-480-512", "Krusty Krab", "Bikini Bottom");
}