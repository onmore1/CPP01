/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vananiev <vananiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 15:57:49 by vananiev          #+#    #+#             */
/*   Updated: 2026/09/07 13:14:33 by vananiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>


static void	ftReplace(std::string &line, char *s, char *replaceWith)
{
	size_t	pos;
	size_t	len;

	pos = line.find(s);
	len = strlen(s);
	if(pos != std::string::npos)
	{
		line.erase(pos, len);
		line.insert(pos, replaceWith);
	}
}

int main(int ac, char **argv)
{
	if (ac != 4 || argv[1][0] == '\0' || argv[2][0] == '\0' || argv[3][0] == '\0')
		return (std::cout << "There should be 3 non-empty args" << std::endl, 1);
	std::string		line;
	std::string		outfile_name;
	std::ifstream	infile;
	std::ofstream	outfile;

	outfile_name = std::string(argv[1]) + ".replace";
	infile.open(argv[1]);
	if (!infile.is_open())
		return(std::cout << "Error opening file:" << argv[1] << std::endl, 1);
	outfile.open(outfile_name.c_str()); // ofstream:open accepts simple const char* and not string class so we need to simply return a inner const char from this string
	if (!outfile.is_open())
		return(std::cout << "Error opening file:" << outfile_name << std::endl, 1);
	while(std::getline(infile, line))
	{
		ftReplace(line, argv[2], argv[3]);
		outfile << line << std::endl;
	}
	outfile.close();
	infile.close();
}