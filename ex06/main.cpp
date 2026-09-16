/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vananiev <vananiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 14:40:52 by vananiev          #+#    #+#             */
/*   Updated: 2026/06/18 16:07:00 by vananiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **argv)
{
	Harl harle;

	if (ac != 2)
		return (std::cout << "Invalid argumt count" << std::endl, 1);
	harle.complain(argv[1]);
	return (0);
}