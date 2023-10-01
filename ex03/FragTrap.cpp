/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 00:15:46 by yachaab           #+#    #+#             */
/*   Updated: 2023/09/30 02:52:51 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	hit = 100;
	energy = 100;
	damage = 30;
}

FragTrap::FragTrap(std::string fragName) : ClapTrap( fragName )
{
	std::cout << "FragTrap parametrize constructor called" << std::endl;
	hit = 100;
	energy = 100;
	damage = 30;
}

FragTrap::FragTrap( const FragTrap& obj ) : ClapTrap(obj)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs)
{
	std::cout << "FragTrap assignment operator called" << std::endl;
	name	= rhs.name;
	hit		= rhs.hit;
	energy	= rhs.energy;
	damage	= rhs.damage;

	return (*this); 
}

FragTrap::~FragTrap() { std::cout << "FragTrap destructor called" << std::endl; }

void FragTrap::attack( const std::string& target )
{
	if ( hit <= 0 )
	{
		std::cout << "FragTrap Health point are 0 please recharge" << std::endl;
		return ;
	}
	if ( energy <= 0 )
	{
		std::cout << "FragTrap Sorry Your energy is 0 you can't attack any more" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << name << " attacks " << target;
	std::cout << " causing " << damage << " points of damage!" << std::endl;
	energy -= 1;
}

void FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "FragTrap " << name << " take damage of " << amount << std::endl;
	if ( amount >= hit )
		hit = 0;
	else
		hit -= amount;
}

void FragTrap::beRepaired( unsigned int amount)
{
	std::cout << "FragTrap " << name << " hit points regain: " << amount << std::endl;
	hit		= amount;
	energy -= 1;
}

// void FragTrap::setDamagePoints(unsigned int amount)
// {
// 	std::cout << "FragTrap " << name << " set damage to " << amount << std::endl;
// 	damage = amount;
// }

void FragTrap::highFiveGuys()
{
	std::cout << "FragTrap positive high fives request" << std::endl;
}