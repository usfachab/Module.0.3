/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 01:23:04 by yachaab           #+#    #+#             */
/*   Updated: 2023/09/30 15:35:22 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public  ScavTrap, public  FragTrap
{
private:
	std::string name;

public:
	DiamondTrap();
	DiamondTrap( std::string );
	DiamondTrap( const DiamondTrap& );
	DiamondTrap& operator=( const DiamondTrap& );
	~DiamondTrap();
	
	void attack( std::string& );
	void takeDamage( unsigned int );
	void beRepaired( unsigned int );

	std::string& getName();

	void whoAmI();
};

#endif