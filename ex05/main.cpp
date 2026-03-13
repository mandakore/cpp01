/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atashiro <atashiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 16:19:24 by atashiro          #+#    #+#             */
/*   Updated: 2026/03/13 16:19:25 by atashiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main() {
	Harl harl;

	std::cout << "--- Testing DEBUG ---" << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl;

	std::cout << "--- Testing INFO ---" << std::endl;
	harl.complain("INFO");
	std::cout << std::endl;

	std::cout << "--- Testing WARNING ---" << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl;

	std::cout << "--- Testing ERROR ---" << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl;

	std::cout << "--- Testing UNKNOWN ---" << std::endl;
	harl.complain("INVALID_LEVEL");
	std::cout << std::endl;

	return 0;
}