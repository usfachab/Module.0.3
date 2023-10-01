/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 00:13:41 by yachaab           #+#    #+#             */
/*   Updated: 2023/09/29 01:19:52 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap( std::string );
	FragTrap( const FragTrap& );
	FragTrap& operator=( const FragTrap& );
	~FragTrap();

	void attack( const std::string& );
	void takeDamage( unsigned int );
	void beRepaired( unsigned int );

	void setDamagePoints( unsigned int );

	void highFiveGuys( void );
};

#endif