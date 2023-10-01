/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 00:13:41 by yachaab           #+#    #+#             */
/*   Updated: 2023/10/01 19:43:24 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <iostream>

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
    public:
        FragTrap();
        FragTrap( std::string );
        FragTrap( const FragTrap& );
        FragTrap& operator=( const FragTrap& );
        ~FragTrap();

        void attack( const std::string& );

        void highFiveGuys( void );
};

#endif