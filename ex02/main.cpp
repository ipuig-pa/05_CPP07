/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 16:54:34 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/04/05 19:12:16 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <string>

template <typename T, typename F>
void	iter(T a, unsigned int length, F f)
{
		for(unsigned int i = 0; i < length; i++)
			f(a[i]);
}

template <typename T>
void	print(const T &a)
{
	std::cout << "	" << a << std::endl;
}

int	main(void)
{
	try
	{
		std::cout << "----INITIALIZING AN ARRAY OF 4 INT-----" << std::endl;
		Array<int>	i(4);
		std::cout << "printing array i, of size " << i.size() << std::endl;
		iter(i, i.size(), print<int>);
		std::cout << "trying to modify i[3]..." << std::endl;
		i[3] = 42;
		std::cout << "printing array after modifying i[3]:" << std::endl;
		iter(i, i.size(), print<int>);
		std::cout << "trying to modify i[4]..." << std::endl;
		i[4] = 21;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "----INITIALIZING AN ARRAY OF 3 STRINGS-----" << std::endl;
		Array<std::string>	s1(3);
		std::cout << "printing array s1, of size " 	<< s1.size() << std::endl;
		iter(s1, s1.size(), print<std::string>);
		std::cout << "trying to modify s1[0]..." << std::endl;
		s1[0] = "Hello";
		std::cout << "printing array s1 after modifying s1[0]:" << std::endl;
		iter(s1, s1.size(), print<std::string>);
		std::cout << "----INITIALIZING A COPY ARRAY OF 3 STRINGS-----" << std::endl;
		Array<std::string>	s2(s1);
		std::cout << "printing array s2, of size " << s2.size() << std::endl;
		iter(s2, s2.size(), print<std::string>);
		std::cout << "trying to modify s2[0]..." << std::endl;
		s2[1] = "World";
		std::cout << "printing array s2 after modifying s2[1]:" << std::endl;
		iter(s2, s2.size(), print<std::string>);
		std::cout << "printing array s1 after modifying s2[1]:" << std::endl;
		iter(s1, s1.size(), print<std::string>);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "----INITIALIZING A DEFAULT CHAR ARRAY (NO PARAM)-----" << std::endl;
		Array<char>	c;
		std::cout << "printing array c, of size " << c.size() << std::endl;
		iter(c, c.size(), print<int>);
		std::cout << "trying to modify c[0]..." << std::endl;
		c[0] = 'a';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}