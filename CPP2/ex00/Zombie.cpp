/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsulvac < fsulvac@student.42lyon.fr >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:53:48 by fsulvac           #+#    #+#             */
/*   Updated: 2024/10/18 16:25:07 by fsulvac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : name("Undefined") {}

Zombie::Zombie(const std::string &name) { this->name = name; }

void Zombie::announce() { std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl; }

Zombie::~Zombie() { std::cout << this->name << " destructor called" << std::endl; }
