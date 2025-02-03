/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaiser <dkaiser@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 16:31:29 by dkaiser           #+#    #+#             */
/*   Updated: 2025/01/31 20:29:03 by dkaiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact(const std::string &first_name,
                 const std::string &last_name,
                 const std::string &nickname,
                 const std::string &phone_number,
                 const std::string &darkest_secret)
{
   this->first_name = first_name;
   this->last_name = last_name;
   this->nickname = nickname;
   this->phone_number = phone_number;
   this->darkest_secret = darkest_secret;
}

void Contact::printInfo() const
{
    std::cout << "First Name:      " << first_name << std::endl;
    std::cout << "Last Name:       " << last_name << std::endl;
    std::cout << "Nickname:        " << nickname << std::endl;
    std::cout << "Phone Number:    " << phone_number << std::endl;
    std::cout << "Darkest Secret:  " << darkest_secret << std::endl;
}

std::string Contact::getFirstName() const
{
    return first_name;
}

std::string Contact::getLastName() const
{
    return last_name;
}

std::string Contact::getNickname() const
{
    return nickname;
}

bool Contact::isValid() const
{
    if (first_name.empty())
        return false;
    if (last_name.empty())
        return false;
    if (nickname.empty())
        return false;
    if (phone_number.empty())
        return false;
    if (darkest_secret.empty())
        return false;
    return true;
}
