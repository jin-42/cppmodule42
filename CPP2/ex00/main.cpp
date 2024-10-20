/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsulvac < fsulvac@student.42lyon.fr >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:25:22 by fsulvac           #+#    #+#             */
/*   Updated: 2024/10/18 16:17:47 by fsulvac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int	main()
{
	Zombie	zombie;
	Zombie	*zombieptr;

	zombieptr = zombie.newZombie("Zombie 1");
	zombie.announce();
	zombieptr->announce();
	zombie.randomChump("Zombie 2");
	delete zombieptr;
}