/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atashiro <atashiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 16:19:03 by atashiro          #+#    #+#             */
/*   Updated: 2026/03/13 18:18:28 by atashiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB {
private:
    std::string name;
    Weapon* weapon;

public:
    HumanB(std::string name);
    ~HumanB();

    void setWeapon(Weapon& weapon);
    void attack() const;
};

#endif
