/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vananiev <vananiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 14:40:52 by vananiev          #+#    #+#             */
/*   Updated: 2026/09/08 12:26:14 by vananiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl harle;

	harle.complain("DEBUG");
	harle.complain("INFO");
	harle.complain("WARNING");
	harle.complain("ERROR");
	return (0);
}