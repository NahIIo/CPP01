/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchauvet <jchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 11:27:59 by jchauvet          #+#    #+#             */
/*   Updated: 2022/07/26 12:01:53 by jchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/* CONSTRUCTOR*/

Harl::Harl()
{
	return;
}

/* DESTRUCTOR*/

Harl::~Harl()
{
	return;
}

/* OTHERS */

void Harl::complain(std::string level)
{
	int levelInt = 0;
	void (Harl::*f[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	if (level == "DEBUG")
		levelInt = 1;
	else if (level == "INFO")
		levelInt = 2;
	else if(level == "WARNING")
		levelInt = 3;
	else if(level == "ERROR")
		levelInt = 4;
	else
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;

	switch (levelInt) {
		case 1:
			std::cout << "[ DEBUG ]" << std::endl;
			(this->*f[0])();
		case 2:
			std::cout << "[ INFO ]" << std::endl;
			(this->*f[1])();
		case 3:
			std::cout << "[ WARNING ]" << std::endl;
			(this->*f[2])();
		case 4:
			std::cout << "[ ERROR ]" << std::endl;
			(this->*f[3])();
	}
}

void Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
