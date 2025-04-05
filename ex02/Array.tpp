/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 17:09:54 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/04/05 18:53:15 by ipuig-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
Array<T>::Array()
{
	this->_array = nullptr;
	this->_size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	this->_array = new T[n]();
	this->_size = n;
}

template <typename T>
Array<T>::Array(const Array &other)
{
	*this = other;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
	if (this != &other)
	{
		this->_size = other._size;
		this->_array = new T[this->_size];
		for(unsigned int i = 0; i < this->_size; i++)
			this->_array[i] = other._array[i];
	}
	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	delete [] this->_array;
}

template <typename T>
T &Array<T>::operator[](unsigned int i)
{
	if (i >= this->_size)
	{
		throw std::exception();
	}
	return (this->_array[i]);
}

template <typename T>
const T &Array<T>::operator[](unsigned int i) const
{
	if (i >= this->_size)
	{
		throw std::exception();
	}
	return (this->_array[i]);
}

template <typename T>
unsigned int	Array<T>::size(void) const
{
	return (this->_size);
}
