/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:49:09 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/19 18:08:11 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
Array<T>::Array(void) : _array(NULL), _size(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n)
{
}

template <typename T>
Array<T>::Array(Array const &src)
{
	this->_array = new T[src._size];
	this->_size = src._size;
	for (unsigned int i = 0; i < this->_size; i++)
		this->_array[i] = src._array[i];
}

template <typename T>
Array<T>::~Array(void)
{
	delete [] this->_array;
}

template <typename T>
Array<T>	&Array<T>::operator=(Array const &rhs)
{
	if (this != &rhs)
	{
		delete [] this->_array;
		this->_size = rhs._size;
		this->_array = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; i++)
			this->_array[i] = rhs._array[i];
	}
	return (*this);
}

template <typename T>
T	&Array<T>::operator[](unsigned int i)
{
	if (i >= this->_size)
		throw std::exception();
	return (this->_array[i]);
}

template <typename T>
unsigned int	Array<T>::size(void) const
{
	return (this->_size);
}
