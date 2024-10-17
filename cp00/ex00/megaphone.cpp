/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsulvac < fsulvac@student.42lyon.fr >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 20:38:26 by fsulvac           #+#    #+#             */
/*   Updated: 2024/10/17 20:38:27 by fsulvac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		for (int i = 1; i < ac; i++)
		{
			std::string arg(av[i]);  // Conversion du tableau de caractères en std::string
			for (size_t j = 0; j < arg.length(); j++)  // Utilisation de std::string::length()
			{
				std::cout << static_cast<char>(std::toupper(arg[j]));  // Utilisation de std::toupper() de la bibliothèque C++
			}
		}
		std::cout << std::endl;
	}

	return 0;
}
