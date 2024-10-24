/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsulvac < fsulvac@student.42lyon.fr >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 16:26:53 by fsulvac           #+#    #+#             */
/*   Updated: 2024/10/18 17:00:58 by fsulvac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"


Zombie* Zombie::zombieHorde( int N, std::string name)
{
    Zombie *zombies = new Zombie[N];
    
    for (int i = 0; i < N; i++)
    {
        zombies[i].setName(name);
        zombies[i].announce();
    }
    
    return zombies;
}