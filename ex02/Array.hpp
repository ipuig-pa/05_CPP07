/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 16:54:52 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/04/05 18:53:36 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <exception>

template <typename T>
class Array{
public:
	Array();
	Array(unsigned int n);
	Array(const Array &other);
	Array &operator=(const Array &other);
	~Array();

	unsigned int	size(void) const;

	T &operator[](unsigned int i);
	const T &operator[](unsigned int i) const;

private:
	T				*_array;
	unsigned int	_size;
};

#include "Array.tpp"