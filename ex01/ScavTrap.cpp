/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:53:40 by yachaab           #+#    #+#             */
/*   Updated: 2023/10/01 19:45:41 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
    hit    = 100;
    energy = 50;
    damage = 20;
}

ScavTrap::ScavTrap( std::string scavName ) : ClapTrap( scavName )
{
    std::cout << "ScavTrap parametrize constructor called" << std::endl;
    hit    = 100;
    energy = 50;
    damage = 20;
}

ScavTrap::ScavTrap( const ScavTrap& obj ) : ClapTrap( obj )
{
    std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=( const ScavTrap& rhs )
{
    std::cout << "ScavTrap Copy assignment operator called" << std::endl;
    name   = rhs.name;
    hit    = rhs.hit;
    energy = rhs.energy;
    damage = rhs.damage;

    return ( *this );
}

ScavTrap::~ScavTrap() { std::cout << "ScavTrap destructor called" << std::endl; }

void ScavTrap::attack( const std::string& target )
{
    if ( hit <= 0 )
    {
        std::cout << "Health point are 0 please recharge" << std::endl;
        return;
    }
    if ( energy <= 0 )
    {
        std::cout << "Sorry Your energy is 0 you can't attack any more" << std::endl;
        return;
    }
    std::cout << "ScavTrap " << name << " attacks " << target;
    std::cout << " causing " << damage << " points of damage!" << std::endl;
    energy -= 1;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}