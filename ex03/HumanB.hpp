/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsulvac < fsulvac@student.42lyon.fr >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 17:30:47 by fsulvac           #+#    #+#             */
/*   Updated: 2024/10/20 17:34:08 by fsulvac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	private :
		Weapon *weapon;
		std::string name;
	public :
		HumanB(std::string name);
		~HumanB();
		void attack();
		void setWeapon(Weapon &weapon);
};

#endif