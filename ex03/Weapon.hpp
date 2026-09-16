/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vananiev <vananiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 12:03:30 by vananiev          #+#    #+#             */
/*   Updated: 2026/06/10 12:08:50 by vananiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_WEAPON
# define EX03_WEAPON

#include <iostream>

class Weapon{
	private:
		std::string _type;
	public:
		Weapon(std::string type);
		const std::string& getType() const;
		void setType(std::string type);
};


#endif