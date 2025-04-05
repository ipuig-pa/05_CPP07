/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 15:58:34 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/04/05 16:51:56 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

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

template <typename T>
void	print(const T &a)
{
	std::cout << "	" << a << std::endl;
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
	
	std::cout << "Iter with append (!!) function:" << std::endl;
	iter(s, 3, appendWrapper);
	iter(s, 3, print<std::string>);
}

