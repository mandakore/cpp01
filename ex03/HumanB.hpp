/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atashiro <atashiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 16:19:03 by atashiro          #+#    #+#             */
/*   Updated: 2026/03/13 16:31:13 by atashiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB {
private:
    std::string name; // [cite: 190]
    Weapon* weapon;   // [cite: 190, 194, 195]

public:
    HumanB(std::string name); // [cite: 194]
    ~HumanB();

    void setWeapon(Weapon& weapon); // [cite: 211]
    void attack() const; // [cite: 191]
};

#endif