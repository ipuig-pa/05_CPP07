/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ipuig-pa <ipuig-pa@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 17:09:54 by ipuig-pa          #+#    #+#             */
/*   Updated: 2025/06/20 10:05:08 by ipuig-pa         ###   ########.fr       */
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
	if (n == 0)
	{
		this->_array = nullptr;
		this->_size = 0;
	}
	else
	{
		this->_array = new T[n]();
		this->_size = n;
	}
}

template <typename T>
Array<T>::Array(const Array &other)
{
	this->_size = other._size;
	if (this->_size == 0)
		this->_array = nullptr;
	else
	{
		this->_array = new T[this->_size];
		for(unsigned int i = 0; i < this->_size; i++)
			this->_array[i] = other._array[i];
	}
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
	if (this != &other)
	{
		delete[] this->_array;
		this->_size = other._size;
		if (this->_size == 0)
			this->_array = nullptr;
		else
		{
			this->_array = new T[this->_size];
			for(unsigned int i = 0; i < this->_size; i++)
				this->_array[i] = other._array[i];
		}
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
