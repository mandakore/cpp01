/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atashiro <atashiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 15:45:49 by atashiro          #+#    #+#             */
/*   Updated: 2026/03/13 19:13:42 by atashiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main() {
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	std::cout << &string << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << string << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;


	return 0;
}

// #include <iostream>
// #include <string>

// int main() {
// 	std::string str1 = "ONE";
// 	std::string str2 = "TWO";
// 	std::string &ref = str1;

// 	std::cout << "--- 代入前 ---" << std::endl;
// 	std::cout << "str1のアドレス: " << &str1 << " 値: " << str1 << std::endl;
// 	std::cout << "str2のアドレス: " << &str2 << " 値: " << str2 << std::endl;
// 	std::cout << "ref のアドレス: " << &ref  << " 値: " << ref << std::endl;


// 	ref = str2;

// 	std::cout << "\n--- 代入 (ref = str2) 後 ---" << std::endl;
// 	std::cout << "ref のアドレス: " << &ref  << " 値: " << ref << std::endl;
// 	std::cout << "str1のアドレス: " << &str1 << " 値: " << str1 << std::endl;

// 	return 0;
// }
