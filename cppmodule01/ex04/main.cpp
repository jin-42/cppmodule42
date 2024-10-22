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

std::string replace_string(const std::string& str, const std::string& src, const std::string& dest)
{
	std::string result = str;
	std::string::size_type pos = 0;
	while ((pos = result.find(src, pos)) != std::string::npos)
	{
		result.replace(pos, src.length(), dest);
		pos += dest.length();
	}
	return result;
}

int main(int ac, char **av)
{
    if (ac != 4)
        return (std::cout << "Usage: ./replace filename string_to_replace string_to_replace_with" 
        << std::endl, 1);
    std::string filename = av[1];
    std::string src = av[2];
    std::string dest = av[3];

    std::ifstream file(filename.c_str());
    if (!file.is_open())
	{
		std::cout << "Error: could not open file" << std::endl;
		return 1;
	}

    std::ofstream output_file((filename + ".replace").c_str());
	if (!output_file.is_open())
	{
		std::cout << "Error: could not create output file" << std::endl;
		return 1;
	}
    std::string line;
    while (std::getline(file, line))
	{
		output_file << replace_string(line, dest, src) << std::endl;
	}
	file.close();
	output_file.close();
	return 0;
}