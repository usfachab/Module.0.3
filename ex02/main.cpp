/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 00:04:35 by yachaab           #+#    #+#             */
/*   Updated: 2023/10/01 19:45:19 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    ClapTrap user1( "Youssef" );
    FragTrap user2( "Hamza" );

    std::cout << std::endl;
    std::cout << "ClapTrap name: " << user1.getName() << std::endl;
    std::cout << "FragTrap name: " << user2.getName() << std::endl;
    std::cout << std::endl;
    user1.setDamagePoints( 10 );
    user2.setDamagePoints( 10 );
    std::cout << std::endl;
    user1.attack( user2.getName() );
    user2.takeDamage( user2.getDamagePoints() );
    std::cout << user2.getHealthPoints() << std::endl;
    std::cout << std::endl;

    // std::cout << std::endl;
    // std::cout << "user2 name: " << user2.getName() << std::endl;
    // std::cout << "FragTrap damage point: " << user2.getDamagePoints() << std::endl;
    // std::cout << "FragTrap energy point: " << user2.getEnergy() << std::endl;
    // std::cout << "FragTrap hit point: " << user2.getHealthPoints() << std::endl;
    // std::cout << std::endl;

    // std::cout << "user2 name: " << user2.getName() << std::endl;
    // std::cout << "user2 energy: " << user2.getEnergy() << std::endl;
    // std::cout << std::endl;
    // user1.setDamagePoints( 10 );
    // user1.attack( user2.getName() );
    // user2.takeDamage( user1.getDamagePoints() );
    // std::cout << std::endl;

    // std::cout << "Attacker health points: " << user1.getHealthPoints() << std::endl;
    // std::cout << "Attacker energy: " << user1.getEnergy() << std::endl;
    // std::cout << "Attacker damage: " << user1.getDamagePoints() << std::endl;
    // std::cout << std::endl;

    // user2.beRepaired( 100 );
    // user2.setDamagePoints( 10 );

    // std::cout << std::endl;
    // user1.attack( user2.getName() );
    // user2.takeDamage( user1.getDamagePoints() );
    // std::cout << std::endl;

    // std::cout << user2.getName() << " health points: " << user2.getHealthPoints() <<
    // std::endl; std::cout << user2.getName() << " energy: " << user2.getEnergy() <<
    // std::endl; std::cout << user2.getName() << " damage: " << user2.getDamagePoints()
    // << std::endl; std::cout << std::endl;

    // std::cout << std::endl;
    // user2.attack( user1.getName() );
    // user1.takeDamage( user2.getDamagePoints() );
    // std::cout << std::endl;

    // std::cout << "Attacker health points: " << user1.getHealthPoints() << std::endl;
    // std::cout << "Attacker energy: " << user1.getEnergy() << std::endl;
    // std::cout << "Attacker damage: " << user1.getDamagePoints() << std::endl;
    // std::cout << std::endl;

    // user2.guardGate();
    // std::cout << std::endl;

    return ( 0 );
}
