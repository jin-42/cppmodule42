/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsulvac < fsulvac@student.42lyon.fr >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:09:00 by fsulvac           #+#    #+#             */
/*   Updated: 2024/10/18 16:17:08 by fsulvac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

void Zombie::randomChump( std::string name )
{
    Zombie zomb(name);
    zomb.announce();
}
