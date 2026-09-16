/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vananiev <vananiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 13:18:45 by vananiev          #+#    #+#             */
/*   Updated: 2026/06/18 16:23:56 by vananiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "[DEBUG] I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
	<< std::endl;
}

void	Harl::info(void)
{
	std::cout << "[INFO] I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"
	<< std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[WARNING] I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month."
	<< std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR] This is unacceptable! I want to speak to the manager now"
	<< std::endl;
}

void	Harl::complain(std::string level)
{

	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int		index2 = -1;
	
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{	
			index2 = i;
			break;
		}
	}
	switch (index2)
	{
	case -1:
		std::cout << "No such level:" << level << std::endl;
		break;
	case 0:
		this->debug();
		index2++;
	case 1:
		this->info();
		index2++;
	case 2:
		this->warning();
		index2++;
	case 3:
		this->error();
		index2++;
	break;
	}
}
