/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 00:04:35 by yachaab           #+#    #+#             */
/*   Updated: 2023/10/01 19:43:31 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap user1( "Youssef" );
    DiamondTrap user2( "Hamza" );

    std::cout << std::endl;
    std::cout << "User1 Name: " << user1.getName() << std::endl;
    std::cout << "User2 Name: " << user2.getName() << std::endl;

    std::cout << std::endl;
    user1.setDamagePoints( 20 );
    user1.attack( user2.getName() );
    user2.takeDamage( user1.getDamagePoints() );
    std::cout << user2.getHealthPoints() << std::endl;
    std::cout << std::endl;

    return ( 0 );
}
