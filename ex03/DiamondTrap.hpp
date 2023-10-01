/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 01:23:04 by yachaab           #+#    #+#             */
/*   Updated: 2023/10/01 19:43:19 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include <iostream>

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        std::string name;

    public:
        DiamondTrap();
        DiamondTrap( std::string );
        DiamondTrap( const DiamondTrap& );
        DiamondTrap& operator=( const DiamondTrap& );
        ~DiamondTrap();

        void         attack( std::string& );
        std::string& getName();
        void         whoAmI();
};

#endif