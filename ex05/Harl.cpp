/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atashiro <atashiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 16:19:19 by atashiro          #+#    #+#             */
/*   Updated: 2026/03/13 16:19:20 by atashiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug(void) {
	std::cout << "[ DEBUG ]\n"
			<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" 
			<< std::endl;
}

void Harl::info(void) {
	std::cout << "[ INFO ]\n"
			<< "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" 
			<< std::endl;
}

void Harl::warning(void) {
	std::cout << "[ WARNING ]\n"
			<< "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month." 
			<< std::endl;
}

void Harl::error(void) {
	std::cout << "[ ERROR ]\n"
			<< "This is unacceptable! I want to speak to the manager now." 
			<< std::endl;
}

void Harl::complain(std::string level) {
	void (Harl::*funcs[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++) {
		if (levels[i] == level) {
			(this->*funcs[i])();
			return;
		}
	}
	std::cout << "[ UNKNOWN ]\nProbably complaining about insignificant problems" << std::endl;
}