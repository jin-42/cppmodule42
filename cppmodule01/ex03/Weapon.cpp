/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsulvac < fsulvac@student.42lyon.fr >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 13:09:50 by fsulvac           #+#    #+#             */
/*   Updated: 2024/10/19 13:15:36 by fsulvac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

std::string const &Weapon::getType() { return this->type; }

void Weapon::setType(std::string type) { this->type = type; }

Weapon::Weapon(std::string type) : type(type) {}

Weapon::~Weapon() {}