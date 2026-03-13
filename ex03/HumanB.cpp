/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atashiro <atashiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 16:18:59 by atashiro          #+#    #+#             */
/*   Updated: 2026/03/13 16:31:22 by atashiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

// 最初は武器を持っていない可能性があるため、NULLで初期化します
HumanB::HumanB(std::string name) : name(name), weapon(NULL) {} //

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon& weapon) { // [cite: 211]
    this->weapon = &weapon;
}

void HumanB::attack() const {
    if (this->weapon) {
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl; // [cite: 191, 192]
    } else {
        std::cout << this->name << " has no weapon to attack with!" << std::endl;
    }
}