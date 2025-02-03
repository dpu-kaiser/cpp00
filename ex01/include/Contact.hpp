/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaiser <dkaiser@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 14:06:55 by dkaiser           #+#    #+#             */
/*   Updated: 2025/01/31 20:18:45 by dkaiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H_
#define CONTACT_H_

#include <string>

class Contact
{
    public:
        Contact(const std::string &first_name = "",
                const std::string &last_name = "",
                const std::string &nickname = "",
                const std::string &phone_number = "",
                const std::string &darkest_secret = "");
        ~Contact() = default;
        Contact(const Contact &other) = default;
        Contact &operator=(const Contact &other) = default;
        Contact(Contact &&other) = default;
        Contact &operator=(Contact &&other) = default;

        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickname() const;

        void printInfo() const;
        bool isValid() const;
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
};

#endif // CONTACT_H_
