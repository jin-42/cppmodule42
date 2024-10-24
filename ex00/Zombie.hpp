/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsulvac < fsulvac@student.42lyon.fr >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 16:21:27 by fsulvac           #+#    #+#             */
/*   Updated: 2024/10/18 16:23:19 by fsulvac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie 
{
private:
	std::string	name;

public:
	Zombie();
	Zombie(const std::string& name);
	void announce(void);
	~Zombie();
    Zombie* newZombie(std::string name);
    void randomChump(std::string name);
};

#endif
