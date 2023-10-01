/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 01:25:20 by yachaab           #+#    #+#             */
/*   Updated: 2023/10/01 19:43:17 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
    name   = "Default";
    hit    = FragTrap::getHealthPoints();
    energy = ScavTrap::getEnergy();
    damage = FragTrap::getDamagePoints();
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( std::string dName ) :
    ClapTrap( dName + "_clap_name" ),
    ScavTrap( dName ),
    FragTrap( dName )
{
    name   = dName;
    hit    = FragTrap::getHealthPoints();
    energy = ScavTrap::getEnergy();
    damage = FragTrap::getDamagePoints();
    std::cout << "DiamondTrap parametrize constructor called" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap& obj ) :
    ClapTrap( obj ),
    ScavTrap( obj ),
    FragTrap( obj )
{
    this->name = obj.name;
    std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=( const DiamondTrap& rhs )
{
    name   = rhs.name;
    hit    = rhs.hit;
    energy = rhs.energy;
    damage = rhs.damage;

    return ( *this );
}

DiamondTrap::~DiamondTrap() { std::cout << "DiamondTrap destructor called" << std::endl; }

void DiamondTrap::whoAmI() { std::cout << name << ", " << ClapTrap::name << std::endl; }

std::string& DiamondTrap::getName() { return ( name ); }

void         DiamondTrap::attack( std::string& target ) { ScavTrap::attack( target ); }
