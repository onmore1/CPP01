/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vananiev <vananiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 11:29:44 by vananiev          #+#    #+#             */
/*   Updated: 2026/06/10 15:35:09 by vananiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

HumanB::HumanB(std::string const Name) : _weapon(NULL), _name(Name)
{
	
}

void	HumanB::attack()
{
	std::cout << this->_name << " attacks with their ";
	if (this->_weapon != NULL && this->_weapon->getType() != "")
		std::cout << this->_weapon->getType() << std::endl;
	else
		std::cout << "... nothing?" << std::endl;
}