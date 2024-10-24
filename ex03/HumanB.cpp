/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsulvac < fsulvac@student.42lyon.fr >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:31:28 by fsulvac           #+#    #+#             */
/*   Updated: 2024/10/22 13:22:19 by fsulvac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name) {}

HumanB::~HumanB() { std::cout << this->name << " is dead" << std::endl; }

void HumanB::attack()
{
	if (this->weapon == NULL)
		std::cout << name << " attacks with his hand" << std::endl;
	else
		std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) { this->weapon = &weapon; }