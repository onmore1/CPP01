/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vananiev <vananiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 12:27:43 by vananiev          #+#    #+#             */
/*   Updated: 2026/06/09 15:16:14 by vananiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int total = 4;
	Zombie *hord = zombieHorde(total, "walkig dead");
	for (int i = 0; i < total; i++)
		hord[i].announce();
	delete[] hord;
	return (0);
}