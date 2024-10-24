/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsulvac < fsulvac@student.42lyon.fr >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 13:01:48 by fsulvac           #+#    #+#             */
/*   Updated: 2024/10/20 17:27:49 by fsulvac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon), name(name)
{
	std::cout << this->name << " has creat with " << this->weapon.getType() << std::endl;
}

HumanA::~HumanA() { std::cout << this->name << " is dead" << std::endl; }

void HumanA::attack() { std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl; }

void HumanA::setWeapon(Weapon &weapon) { this->weapon = weapon; }