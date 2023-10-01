/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 00:05:44 by yachaab           #+#    #+#             */
/*   Updated: 2023/09/29 00:05:45 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
	ClapTrap user1 ("Youssef");
	ClapTrap user2 ("Hamza");

	std::cout << std::endl;
	user1.setDamagePoints(10);
	user1.attack(user2.getName());
	user2.takeDamage(user1.getDamagePoints());
	std::cout << std::endl;

	std::cout << "Attacker health points: " << user1.getHealthPoints()  << std::endl;
	std::cout << "Attacker energy: " << user1.getEnergy() << std::endl;
	std::cout << "Attacker damage: " << user1.getDamagePoints() << std::endl;
	std::cout << std::endl;

	user2.beRepaired(100);
	user2.setDamagePoints(10);

	std::cout << std::endl;
	user1.attack(user2.getName());
	user2.takeDamage(user1.getDamagePoints());
	std::cout << std::endl;

	std::cout << user2.getName() << " health points: " << user2.getHealthPoints()  << std::endl;
	std::cout << user2.getName() << " energy: " << user2.getEnergy() << std::endl;
	std::cout << user2.getName() << " damage: " << user2.getDamagePoints() << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	user2.attack(user1.getName());
	user1.takeDamage(user2.getDamagePoints());
	std::cout << std::endl;

	std::cout << "Attacker health points: " << user1.getHealthPoints()  << std::endl;
	std::cout << "Attacker energy: " << user1.getEnergy() << std::endl;
	std::cout << "Attacker damage: " << user1.getDamagePoints() << std::endl;
	std::cout << std::endl;
	
	return (0);
}
