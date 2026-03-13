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

int main() // [cite: 200]
{ // [cite: 201]
    { // [cite: 202]
        Weapon club = Weapon("crude spiked club"); // [cite: 205]
        HumanA bob("Bob", club); // [cite: 206]
        bob.attack(); // [cite: 207]
        club.setType("some other type of club"); // [cite: 208]
        bob.attack(); // [cite: 208]
    } // [cite: 203]
    { // [cite: 204]
        Weapon club = Weapon("crude spiked club"); // [cite: 209]
        HumanB jim("Jim"); // [cite: 210]
        jim.setWeapon(club); // [cite: 211]
        jim.attack(); // [cite: 212]
        club.setType("some other type of club"); // [cite: 213]
        jim.attack(); // [cite: 213]
    } // [cite: 214]
    return 0; // [cite: 216]
} // [cite: 215]