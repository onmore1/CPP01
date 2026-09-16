/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vananiev <vananiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 10:45:38 by vananiev          #+#    #+#             */
/*   Updated: 2026/06/09 14:52:26 by vananiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_ZOMBIE_HPP
#define EX00_ZOMBIE_HPP
#include <iostream>

class Zombie
{
private:
	std::string name;
public:
	void		announce(void);
	void		SetName(std::string name);
	~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif