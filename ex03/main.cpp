/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 00:04:35 by yachaab           #+#    #+#             */
/*   Updated: 2023/09/30 21:25:54 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
	DiamondTrap diamond( "Youssef" );
	// ClapTrap c( "Hamza" );

	// std::cout << std::endl;
	// diamond.attack(c.getName());
	// c.takeDamage(diamond.getDamagePoints());
	// std::cout << std::endl;
	
	std::cout << std::endl;
	// std::cout << c.getHealthPoints() << std::endl;
	std::cout << diamond.getEnergy() << std::endl;
	
	std::cout << std::endl;
	
	// std::cout << std::endl;
	// std::cout << "Name: " << diamond.getName() << std::endl;
	// diamond.setDamagePoints(0);
	// std::cout << "Damage: " << diamond.getDamagePoints() << std::endl;
	// std::cout << std::endl;

	// std::cout << std::endl;
	// diamond.whoAmI();
	// diamond.guardGate();
	// diamond.highFiveGuys();
	// std::cout << std::endl;
	
	return (0);
}
