/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atashiro <atashiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 16:19:06 by atashiro          #+#    #+#             */
/*   Updated: 2026/03/13 16:31:31 by atashiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main() 
{ 
    { 
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club); 
        bob.attack(); 
        club.setType("some other type of club"); 
        bob.attack(); 
    } 
    {
        Weapon club = Weapon("crude spiked club"); 
        HumanB jim("Jim"); 
        jim.setWeapon(club); 
        jim.attack(); 
        club.setType("some other type of club"); 
        jim.attack(); 
    } 
    return 0; 
} 