/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 13:11:31 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/06/20 09:16:46 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstddef>
#include <iostream>

template <typename T, typename F>
void	iter(T *a, std::size_t length, F f)
{
	if (!a || !f)
		return ;
	for(std::size_t i = 0; i < length; i++)
		f(a[i]);
}

template <typename T>
void	print(const T &a)
{
	std::cout << "	" << a << std::endl;
}