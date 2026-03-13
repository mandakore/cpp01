/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atashiro <atashiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 16:19:11 by atashiro          #+#    #+#             */
/*   Updated: 2026/03/13 18:18:32 by atashiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {}

Weapon::~Weapon() {}

const std::string& Weapon::getType() const {
	return this->type;
}

void Weapon::setType(std::string type) {
	this->type = type;
}
