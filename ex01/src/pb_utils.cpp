/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb_utils.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkaiser <dkaiser@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 19:21:13 by dkaiser           #+#    #+#             */
/*   Updated: 2025/01/31 19:35:53 by dkaiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pb_utils.hpp"

std::string format_string(const std::string &str)
{
    if (str.length() > 10)
    {
        return str.substr(0, 9) + '.';
    }
    return str;
}
