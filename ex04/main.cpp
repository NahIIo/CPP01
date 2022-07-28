/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchauvet <jchauvet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 08:36:46 by jchauvet          #+#    #+#             */
/*   Updated: 2022/07/26 09:34:07 by jchauvet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>
#include <cstring>
int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Wrong usage." << std::endl;
		return(0);
	}
	std::string infile(av[1]);
	std::string	s1(av[2]);
	std::string s2(av[3]);
	std::ifstream original(av[1]);
	if (original.good())
	{
		if (original.eof())
			std::cout << "Error: Empty file." << std::endl;
		else
		{
			std::ofstream changed(infile.append(".replace").data());
			while(original.good() && changed.good())
			{
				std::string haystack;
				std::size_t needle;
				std::getline(original, haystack);
				needle = haystack.find(s1, 0);
				while(needle != std::string::npos)
				{
					haystack.erase(needle, s1.length());
					haystack.insert(needle, s2);
					needle = haystack.find(s1, needle);
				}
				changed << haystack;
				if (original.eof())
					break;
				changed << std::endl;
			}
			original.close();
			changed.close();
		}
	}
	else
		std::cout << "Error :" << std::strerror(errno) << std::endl;
	return 1;
}
