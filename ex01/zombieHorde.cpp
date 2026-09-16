/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vananiev <vananiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 12:28:38 by vananiev          #+#    #+#             */
/*   Updated: 2026/06/09 14:52:34 by vananiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *z_array;
	
	z_array = new Zombie[N];
	for (int i = 0; i < N; i++)
		z_array[i].SetName(name);
	return z_array;
}