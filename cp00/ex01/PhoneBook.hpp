/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsulvac < fsulvac@student.42lyon.fr >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 20:41:14 by fsulvac           #+#    #+#             */
/*   Updated: 2024/10/17 20:41:15 by fsulvac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>


class PhoneBook 
{
public:
    PhoneBook();
    void addContact();
    void searchContacts() const;
    
private:
    Contact     contacts[8];
    int         index;
    int         totalContacts;

    void printContactPreview(int idx) const;
    void printFullContact(int idx) const;
    std::string truncateString(const std::string &str) const;
};

#endif
