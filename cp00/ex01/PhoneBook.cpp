#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : index(0), totalContacts(0) {}

void PhoneBook::addContact() {
    Contact newContact;
    std::string input;

    std::cout << "Enter first name: ";
    std::getline(std::cin, input);
    newContact.setFirstName(input);

    std::cout << "Enter last name: ";
    std::getline(std::cin, input);
    newContact.setLastName(input);

    std::cout << "Enter nickname: ";
    std::getline(std::cin, input);
    newContact.setNickname(input);

    std::cout << "Enter phone number: ";
    std::getline(std::cin, input);
    newContact.setPhoneNumber(input);

    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, input);
    newContact.setDarkestSecret(input);

    contacts[index] = newContact;
    index = (index + 1) % 8;
    if (totalContacts < 8) 
        totalContacts++;
}

void PhoneBook::searchContacts() const {
    if (totalContacts == 0) {
        std::cout << "No contacts available.\n";
        return;
    }

    std::cout << "| " << std::setw(10) << "Index" << " |";
    std::cout << std::setw(10) << "First Name" << " |";
    std::cout << std::setw(10) << "Last Name" << " |";
    std::cout << std::setw(10) << "Nickname" << " |\n";
    std::cout << std::string(47, '-') << "\n";  // Ligne séparatrice

    for (int i = 0; i < totalContacts; i++) {
        printContactPreview(i);
    }

    int idx;
    std::cout << "Enter the index of the contact to view: ";
    std::cin >> idx;
    std::cin.ignore();
    if (idx >= 1 && idx <= totalContacts) {
        printFullContact(idx - 1);
    } else {
        std::cout << "Invalid index.\n";
    }
}


void PhoneBook::printContactPreview(int idx) const {
    std::cout << "| " << std::setw(10) << idx + 1 << " |";
    std::cout << std::setw(10) << truncateString(contacts[idx].getFirstName()) << " |";
    std::cout << std::setw(10) << truncateString(contacts[idx].getLastName()) << " |";
    std::cout << std::setw(10) << truncateString(contacts[idx].getNickname()) << " |\n";
}

void PhoneBook::printFullContact(int idx) const {
    std::cout << "First name: " << contacts[idx].getFirstName() << "\n";
    std::cout << "Last name: " << contacts[idx].getLastName() << "\n";
    std::cout << "Nickname: " << contacts[idx].getNickname() << "\n";
    std::cout << "Phone number: " << contacts[idx].getPhoneNumber() << "\n";
    std::cout << "Darkest secret: " << contacts[idx].getDarkestSecret() << "\n";
}

std::string PhoneBook::truncateString(const std::string &str) const {
    if (str.length() > 9) {
        return str.substr(0, 9) + ".";
    }
    return str;
}
