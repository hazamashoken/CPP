/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 20:28:22 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/19 21:19:57 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <ostream>

Span::Span(unsigned int N) : _N(N), _size(0)
{
	this->_array = new int[N];
}

Span::Span(Span const & src)
{
	this->_array = new int[src._N];
	for (int i = 0; i < src._size; i++)
		this->_array[i] = src._array[i];
	this->_N = src._N;
	this->_size = src._size;
}

Span::~Span(void)
{
	delete [] this->_array;
}

Span &	Span::operator=(Span const & rhs)
{
	this->_N = rhs._N;
	this->_size = rhs._size;
	this->_array = new int[this->_N];
	for (int i = 0; i < this->_size; i++)
		this->_array[i] = rhs._array[i];
	return (*this);
}

int &	Span::operator[](unsigned int i)
{
	if (i >= this->_N)
		throw Span::IndexOutOfRangeException();
	return (this->_array[i]);
}

void	Span::addNumber(int n)
{
	if (this->_size == (int)this->_N)
		throw Span::SpanFullException();
	this->_array[this->_size] = n;
	this->_size++;
}

void	Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (this->_size + (end - begin) > (int)this->_N)
		throw Span::SpanFullException();
	for (std::vector<int>::iterator it = begin; it != end; it++)
	{
		this->_array[this->_size] = *it;
		this->_size++;
	}
}

int		Span::shortestSpan(void)
{
	if (this->_size < 2)
		throw Span::SpanNotEnoughException();
	int		min = INT_MAX;
	int		diff;
	for (int i = 0; i < this->_size; i++)
	{
		for (int j = i + 1; j < this->_size; j++)
		{
			diff = this->_array[i] - this->_array[j];
			if (diff < 0)
				diff *= -1;
			if (diff < min)
				min = diff;
		}
	}
	return (min);
}

int		Span::longestSpan(void)
{
	if (this->_size < 2)
		throw Span::SpanNotEnoughException();
	int		max = INT_MIN;
	int		min = INT_MAX;
	for (int i = 0; i < this->_size; i++)
	{
		if (this->_array[i] > max)
			max = this->_array[i];
		if (this->_array[i] < min)
			min = this->_array[i];
	}
	return (max - min);
}

int		Span::getSize(void) const
{
	return (this->_size);
}

std::ostream	&operator<<(std::ostream &o, Span &rhs)
{
	o << "Span: ";
	for (int i = 0; i < rhs.getSize(); i++)
		o << rhs[i] << " ";
	o << std::endl;
	return (o);
}
