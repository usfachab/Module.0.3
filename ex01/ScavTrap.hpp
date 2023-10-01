/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:53:38 by yachaab           #+#    #+#             */
/*   Updated: 2023/10/01 19:45:43 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap( std::string );
        ScavTrap( const ScavTrap& );
        ScavTrap& operator=( const ScavTrap& );
        ~ScavTrap();

        void attack( const std::string& );

        void guardGate();
};

#endif