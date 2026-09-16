/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vananiev <vananiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 17:04:56 by vananiev          #+#    #+#             */
/*   Updated: 2026/06/10 12:28:31 by vananiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_HUMANB
# define EX03_HUMANB

#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon *_weapon;
		std::string const _name;
	public:
		HumanB(std::string const Name);
		void	attack();
		void	setWeapon(Weapon &Type);
};

#endif