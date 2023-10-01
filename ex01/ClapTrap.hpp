/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 00:05:41 by yachaab           #+#    #+#             */
/*   Updated: 2023/10/01 19:48:42 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
    protected:
        std::string name;
        size_t      hit;
        size_t      energy;
        size_t      damage;

    public:
        ClapTrap();
        ClapTrap( std::string );
        ClapTrap( const ClapTrap& );
        ClapTrap& operator=( const ClapTrap& );
        ~ClapTrap();

        void         attack( const std::string& );
        void         takeDamage( unsigned int );
        void         beRepaired( unsigned int );

        std::string& getName();
        unsigned int getHealthPoints();
        unsigned int getDamagePoints();
        unsigned int getEnergy();

        void         setDamagePoints( unsigned int );
};

#endif