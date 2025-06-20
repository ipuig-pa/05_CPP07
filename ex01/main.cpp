/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 15:58:34 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/06/20 09:36:58 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <cctype>

void	add(int	&i)
{
	i = i + 1;
}

void toUpperWrapper(char &c)
{
	c = std::toupper(c);
}

void appendWrapper(std::string &s)
{
	s = s.append("!!");
}

void printDouble(const int &i)
{
	std::cout << "Double: " << (i * 2) << std::endl;
}

int	main(void)
{
	std::cout << "-----CHECKING ON AN ARRAY OF INT:-----" << std::endl;
	int	i[5] = {2, 5, 3, 1, 2};
	iter(i, 5, print<int>);
	
	std::cout << "Iter with add (+1) function:" << std::endl;
	iter(i, 5, add);
	iter(i, 5, print<int>);

	std::cout << "-----CHECKING ON AN ARRAY OF CHARS:------" << std::endl;
	char	c[7] = {'a', 'b', 'd', 'x', 'R', 'S', 'u'};
	iter(c, 7, print<char>);
	
	std::cout << "Iter with ToUpper function:" << std::endl;
	iter(c, 7, toUpperWrapper);
	iter(c, 7, print<char>);

	std::cout << "-----CHECKING ON AN ARRAY OF STRINGS:------" << std::endl;
	std::string	s[3] = {"Hello", "World", "always"};
	iter(s, 3, print<std::string>);
	
	std::cout << "Iter with append \"!!\" function:" << std::endl;
	iter(s, 3, appendWrapper);
	iter(s, 3, print<std::string>);

	std::cout << "-----CHECKING ON A CONST ARRAY OF INT:------" << std::endl;
	const int const_i[3] = {10, 20, 30};
	iter(const_i, 3, print<int>);

	std::cout << "Iter with printDouble function:" << std::endl;
	iter(const_i, 3, printDouble);
	iter(const_i, 3, print<int>);
	// iter(const_i, 3, add);
}

