/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsulvac < fsulvac@student.42lyon.fr >      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 19:25:32 by fsulvac           #+#    #+#             */
/*   Updated: 2024/10/20 19:39:45 by fsulvac          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HP
#define HARL_HPP

# include <iostream>

class Harl
{
private :
    void debug();
    void info();
    void warning();
    void error();

public :
    void complain( std::string level );
};

#endif