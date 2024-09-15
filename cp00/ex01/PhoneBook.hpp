#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

class PhoneBook {
public:
    PhoneBook();
    void addContact();
    void searchContacts() const;
    
private:
    Contact contacts[8];
    int index;
    int totalContacts;

    void printContactPreview(int idx) const;
    void printFullContact(int idx) const;
    std::string truncateString(const std::string &str) const;
};

#endif
