/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 23:50:43 by yachaab           #+#    #+#             */
/*   Updated: 2023/10/01 19:45:34 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name( "Default" ), hit( 10 ), energy( 10 ), damage( 0 )
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string Name ) :
    name( Name ),
    hit( 10 ),
    energy( 10 ),
    damage( 0 )
{
    std::cout << "ClapTrap parametrize constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& obj ) :
    name( obj.name ),
    hit( obj.hit ),
    energy( obj.energy ),
    damage( obj.damage )
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = obj;
}

ClapTrap& ClapTrap::operator=( const ClapTrap& rhs )
{
    name   = rhs.name;
    hit    = rhs.hit;
    energy = rhs.energy;
    damage = rhs.damage;

    return ( *this );
}

ClapTrap::~ClapTrap() { std::cout << "ClapTrap Destructor called" << std::endl; }

void ClapTrap::attack( const std::string& target )
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
    std::cout << "ClapTrap " << name << " attacks " << target;
    std::cout << " causing " << damage << " points of damage!" << std::endl;
    energy -= 1;
}

void ClapTrap::takeDamage( unsigned int amount )
{
    std::cout << name << " take damage of " << amount << std::endl;
    if ( amount >= hit )
        hit = 0;
    else
        hit -= amount;
}

void ClapTrap::beRepaired( unsigned int amount )
{
    std::cout << name << " hit points regain: " << amount << std::endl;
    hit     = amount;
    energy -= 1;
}

// * custom member functions

std::string& ClapTrap::getName() { return ( name ); }

unsigned int ClapTrap::getHealthPoints() { return ( hit ); }

unsigned int ClapTrap::getDamagePoints() { return ( damage ); }

unsigned int ClapTrap::getEnergy() { return ( energy ); }

void         ClapTrap::setDamagePoints( unsigned int amount )
{
    std::cout << name << " set damage to " << amount << std::endl;
    damage = amount;
}