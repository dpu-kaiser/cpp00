/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaiser <dkaiser@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 16:04:09 by dkaiser           #+#    #+#             */
/*   Updated: 2025/01/31 20:51:01 by dkaiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "pb_utils.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() {}

void PhoneBook::addContact(const Contact &contact)
{
    if (nbr_of_contacts < 8)
    {
        contacts[nbr_of_contacts] = contact;
        nbr_of_contacts++;
    }
    else
    {
        for (int i = 0; i < 7; i++)
        {
            contacts[i] = contacts[i + 1];
        }
        contacts[7] = contact;
    }
}

const Contact *PhoneBook::getContact(int index) const
{
    if (index >= nbr_of_contacts)
    {
        return nullptr;
    }
    return &contacts[index];
}

void PhoneBook::displayContacts() const
{
    if (nbr_of_contacts == 0)
    {
        std::cout << "No contacts in phonebook" << std::endl;
        return;
    }
    for (int i = 0; i < nbr_of_contacts; i++)
    {
        const auto first_name = format_string(contacts[i].getFirstName());
        const auto last_name = format_string(contacts[i].getLastName());
        const auto nickname = format_string(contacts[i].getNickname());
        std::cout << std::setw(10) << std::right << i << "|";
        std::cout << std::setw(10) << std::right << first_name << "|";
        std::cout << std::setw(10) << std::right << last_name << "|";
        std::cout << std::setw(10) << std::right << nickname << std::endl;
    }
}

bool PhoneBook::empty() const
{
    return (nbr_of_contacts == 0);
}
