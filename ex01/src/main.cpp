/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaiser <dkaiser@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 13:57:28 by dkaiser           #+#    #+#             */
/*   Updated: 2025/01/31 20:51:55 by dkaiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <exception>
#include <iostream>

static void add(PhoneBook &phonebook);
static void search(const PhoneBook &phonebook);

int main() {
    PhoneBook phonebook;

    while (true)
    {
        std::string input;
        std::cout << "PhoneBook > ";
        std::getline(std::cin, input);
        if (input.compare("ADD") == 0)
        {
            add(phonebook);
        }
        else if (input.compare("SEARCH") == 0)
        {
            search(phonebook);
        }
        else if (input.compare("EXIT") == 0)
        {
            break;
        }
        else if (std::cin.eof())
        {
            break;
        }
    }
    return 0;
}

static void add(PhoneBook &phonebook)
{
    std::string first_name, last_name, nickname, phone_number, darkest_secret;
    std::cout << "Enter first name   : ";
    std::getline(std::cin, first_name);
    std::cout << "Enter last name    : ";
    std::getline(std::cin, last_name);
    std::cout << "Enter nickname     : ";
    std::getline(std::cin, nickname);
    std::cout << "Enter phone number : ";
    std::getline(std::cin, phone_number);
    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, darkest_secret);
    Contact contact = Contact(first_name,
                              last_name,
                              nickname,
                              phone_number,
                              darkest_secret);
    if (contact.isValid())
    {
        phonebook.addContact(contact);
    }
    else
    {
        std::cout << "Invalid Contact!" << std::endl;
    }
}

static void search(const PhoneBook &phonebook)
{
    phonebook.displayContacts();
    if (phonebook.empty())
        return;
    std::string input;
    std::cout << "Enter index of contact : ";
    std::getline(std::cin, input);
    try
    {
        int index = std::stoi(input);
        const Contact *contact = phonebook.getContact(index);
        if (contact == nullptr)
        {
            std::cout << "Invalid Index!" << std::endl;
        }
        else
        {
            contact->printInfo();
        }
    } catch (const std::exception &e)
    {
        std::cout << "Invalid Index!" << std::endl;
    }
}
