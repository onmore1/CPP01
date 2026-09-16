/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vananiev <vananiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 15:29:08 by vananiev          #+#    #+#             */
/*   Updated: 2026/09/07 12:19:44 by vananiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

const std::string& Weapon::getType() const
{
	return (this->_type);
}

void	Weapon::setType(std::string type)
{
	if (type.empty())
		std::cout << this->getType() << " bare hands" << std::endl;
	else
		this->_type = type;
}