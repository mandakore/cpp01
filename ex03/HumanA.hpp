/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atashiro <atashiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 16:18:56 by atashiro          #+#    #+#             */
/*   Updated: 2026/03/13 18:18:48 by atashiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA {
private:
	std::string name;
	Weapon& weapon;

public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();

	void attack() const;
};

#endif
