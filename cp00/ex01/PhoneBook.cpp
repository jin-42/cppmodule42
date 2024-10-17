/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsulvac < fsulvac@student.42lyon.fr >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 20:41:18 by fsulvac           #+#    #+#             */
/*   Updated: 2024/10/17 20:41:19 by fsulvac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : index(0), totalContacts(0) {}

/* std::cin.eof() is for Ctrl + D */
void PhoneBook::addContact() 
{
    Contact newContact;
    std::string input;

    /* First Name */
    do 
    {
        std::cout << "Enter first name: ";
        std::getline(std::cin, input);

        if (std::cin.eof()) 
        {
            std::cout << "End of file detected. Abandoning contact addition." << std::endl;
            return;
        }

        if (input.empty()) 
            std::cerr << "First name cannot be empty. Please enter again." << std::endl;
        else 
        {
            newContact.setFirstName(input);
            break;
        }
    } while (true);

    /* Last Name */
    do 
    {
        std::cout << "Enter last name: ";
        std::getline(std::cin, input);

        if (std::cin.eof()) 
        {
            std::cout << "End of file detected. Abandoning contact addition." << std::endl;
            return;
        }

        if (input.empty()) 
            std::cerr << "Last name cannot be empty. Please enter again." << std::endl;
        else 
        {
            newContact.setLastName(input);
            break;
        }
    } while (true);

    /* Nickname */
    do 
    {
        std::cout << "Enter nickname: ";
        std::getline(std::cin, input);

        if (std::cin.eof()) 
        {
            std::cout << "End of file detected. Abandoning contact addition." << std::endl;
            return;
        }

        if (input.empty()) 
            std::cerr << "Nickname cannot be empty. Please enter again." << std::endl;
        else 
        {
            newContact.setNickname(input);
            break;
        }
    } while (true);

    /* Phone Number */
    do 
    {
        std::cout << "Enter phone number: ";
        std::getline(std::cin, input);

        if (std::cin.eof()) 
        {
            std::cout << "End of file detected. Abandoning contact addition." << std::endl;
            return;
        }

        if (input.empty()) 
            std::cerr << "Phone number cannot be empty. Please enter again." << std::endl;
        else 
        {
            newContact.setPhoneNumber(input);
            break;
        }
    } while (true);

    /* Darkest Secret */
    do 
    {
        std::cout << "Enter darkest secret: ";
        std::getline(std::cin, input);

        if (std::cin.eof()) 
        {
            std::cout << "End of file detected. Abandoning contact addition." << std::endl;
            return;
        }

        if (input.empty()) 
            std::cerr << "Darkest secret cannot be empty. Please enter again." << std::endl;
        else 
        {
            newContact.setDarkestSecret(input);
            break;
        }
    } while (true);

    /* Register Contact */
    contacts[index] = newContact;
    index = (index + 1) % 8;
    if (totalContacts < 8) 
        totalContacts++;
}

void PhoneBook::searchContacts() const 
{
    std::istringstream iss;
    std::string input;
    int idx;

    if (totalContacts == 0) 
    {
        std::cout << "No contacts available.\n";
        return;
    }
    std::cout << "| " << std::setw(10) << "Index" << " |";
    std::cout << std::setw(10) << "First Name" << " |";
    std::cout << std::setw(10) << "Last Name" << " |";
    std::cout << std::setw(10) << "Nickname" << " |\n";
    std::cout << std::string(47, '-') << "\n";
    for (int i = 0; i < totalContacts; i++)
        printContactPreview(i);
    do 
    {
        std::cout << "Enter the index of the contact to view: ";
        std::getline(std::cin, input);
        iss.clear();
        iss.str(input);
        iss >> idx;
    } while (!std::cin.eof() && (iss.fail() || !iss.eof()));

    if (!std::cin.eof()) 
        std::cout << idx << std::endl;
    else 
        std::cerr << "Bye!" << std::endl; 

    if (idx >= 1 && idx <= totalContacts) 
        printFullContact(idx - 1);
    else 
        std::cout << "Invalid index.\n";
}

void PhoneBook::printContactPreview(int idx) const 
{
    std::cout << "| " << std::setw(10) << idx + 1 << " |";
    std::cout << std::setw(10) << truncateString(contacts[idx].getFirstName()) << " |";
    std::cout << std::setw(10) << truncateString(contacts[idx].getLastName()) << " |";
    std::cout << std::setw(10) << truncateString(contacts[idx].getNickname()) << " |\n";
}

void PhoneBook::printFullContact(int idx) const 
{
    std::cout << "First name: " << contacts[idx].getFirstName() << "\n";
    std::cout << "Last name: " << contacts[idx].getLastName() << "\n";
    std::cout << "Nickname: " << contacts[idx].getNickname() << "\n";
    std::cout << "Phone number: " << contacts[idx].getPhoneNumber() << "\n";
    std::cout << "Darkest secret: " << contacts[idx].getDarkestSecret() << "\n";
}

std::string PhoneBook::truncateString(const std::string &str) const 
{
    if (str.length() > 9) 
        return str.substr(0, 9) + ".";
    return str;
}
