/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaiser <dkaiser@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 14:06:31 by dkaiser           #+#    #+#             */
/*   Updated: 2025/01/31 20:51:15 by dkaiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H_
#define PHONEBOOK_H_

#include "Contact.hpp"

class PhoneBook
{
    public:
        PhoneBook();
        ~PhoneBook() = default;
        PhoneBook(const PhoneBook &other) = default;
        PhoneBook &operator=(const PhoneBook &other) = default;
        PhoneBook(PhoneBook &&other) = default;
        PhoneBook &operator=(PhoneBook &&other) = default;

        void addContact(const Contact &contact);
        const Contact *getContact(int index) const;
        void displayContacts() const;
        bool empty() const;
    private:
        Contact contacts[8];
        int nbr_of_contacts = 0;
};

#endif // PHONEBOOK_H_
