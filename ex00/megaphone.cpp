/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaiser <dkaiser@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 13:33:35 by dkaiser           #+#    #+#             */
/*   Updated: 2025/01/31 13:44:17 by dkaiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

static std::string trim(const std::string &str);
static std::string toupper(const std::string &str);

int main(int argc, char *argv[]) {
    if (argc > 1)
    {
        for (int i = 1; i < argc; i++) {
           std::cout << toupper(trim(argv[i]));
           if (i < argc - 1)
               std::cout << " ";
        }
        std::cout << std::endl;
    }
    else
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    return 0;
}

static std::string trim(const std::string &str)
{
    int start = 0;
    while (std::isspace(str[start]))
    {
        start++;
    }
    int end = str.length();
    while(std::isspace(str[end - 1]))
    {
        end--;
    }
    return str.substr(start, end - start);
}

static std::string toupper(const std::string &str)
{
    std::string result = str;
    for (char &c : result)
    {
        c = std::toupper(c);
    }
    return result;
}
