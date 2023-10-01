/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:53:38 by yachaab           #+#    #+#             */
/*   Updated: 2023/09/30 02:52:59 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
public:
	ScavTrap();
	ScavTrap( std::string );
	ScavTrap( const ScavTrap& );
	ScavTrap& operator=( const ScavTrap& );
	~ScavTrap();

	void attack( const std::string& );
	void takeDamage( unsigned int );
	void beRepaired( unsigned int );

	// void setDamagePoints( unsigned int );

	void guardGate();
};

#endif