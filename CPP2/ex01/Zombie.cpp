/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsulvac < fsulvac@student.42lyon.fr >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 16:25:57 by fsulvac           #+#    #+#             */
/*   Updated: 2024/10/18 16:54:54 by fsulvac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : name("Undefined") {}

Zombie::Zombie(const std::string &name) { this->name = name; }

void Zombie::announce() { std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl; }

Zombie::~Zombie() { std::cout << this->name << " destructor called" << std::endl; }

void Zombie::setName(const std::string str) { this->name = str;}
