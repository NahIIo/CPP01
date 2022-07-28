/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchauvet <jchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 09:54:40 by jchauvet          #+#    #+#             */
/*   Updated: 2022/07/26 10:10:27 by jchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl harl;

	std::cout << "DEBUG : " << std::endl;
	harl.complain("DEBUG");
	std::cout << "INFO : " << std::endl;
	harl.complain("INFO");
	std::cout << "WARNING : " << std::endl;
	harl.complain("WARNING");
	std::cout << "ERROR : " << std::endl;
	harl.complain("ERROR");
	while (1)
	{
		std::string input;
		std::cout << std::endl << "What do you want to hear ?" << std::endl;
		getline(std::cin, input);
		harl.complain(input);
		if (input == "exit")
		{
			std::cin.clear();
			break;
		}
	}
}
