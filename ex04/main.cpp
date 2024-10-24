/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsulvac < fsulvac@student.42lyon.fr >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 18:16:53 by fsulvac           #+#    #+#             */
/*   Updated: 2024/10/20 19:10:54 by fsulvac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>

int	replace(char **av, std::string str)
{
	std::ofstream	output_file;
	int				pos;

	output_file.open((std::string(av[1]) + ".replace").c_str());
	if (output_file.fail())
		return (1);
	for (int i = 0; i < static_cast<int>(str.size()); i++)
	{
		pos = str.find(av[2], i);
		if (pos != -1 && pos == i)
		{
			output_file << av[3];
			i += std::string(av[2]).size() - 1;
		}
		else
			output_file << str[i];
	}
	output_file.close();
	return (0);
}

int	main(int argc, char **av)
{
	char			c;
	std::ifstream	file;
	std::string		str;

	if (argc != 4)
		 return (std::cout << "Usage: ./replace filename string_to_replace string_to_replace_with" 
        << std::endl, 1);
	file.open(av[1]);
	if (file.fail())
		return (std::cout << "Error: " << av[1] << ":" << " no such file" 
		<< std::endl, 1);
	while(!file.eof() && file >> std::noskipws >> c)
		str += c;
	file.close();
	return (replace(av, str));
}