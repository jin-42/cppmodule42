/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsulvac < fsulvac@student.42lyon.fr >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 16:21:06 by fsulvac           #+#    #+#             */
/*   Updated: 2024/10/18 17:00:37 by fsulvac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie 
{
private:
	std::string	name;

public:
	Zombie();
	Zombie(const std::string& name);
	void announce(void);
    void setName(std::string name);
    static Zombie* zombieHorde( int N, std::string name );
	~Zombie();
};

#endif