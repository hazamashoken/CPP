/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 20:27:57 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/19 21:19:44 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
#include <ostream>
# include <vector>
# include <iterator>
# include <algorithm>
# include <cstdlib>
# include <ctime>
# include <climits>
class Span
{
	public:
		Span(unsigned int N);
		Span(Span const & src);
		~Span(void);

		Span &	operator=(Span const & rhs);
		int &	operator[](unsigned int i);

		int	getSize(void) const;

		void	addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		void	addNumber(int n);
		int		shortestSpan(void);
		int		longestSpan(void);

	private:
		Span(void);
		unsigned int	_N;
		int				*_array;
		int				_size;

	class SpanFullException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Span is full");
			}
	};

	class SpanNotEnoughException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Span does not have enough numbers");
			}
	};

	class IndexOutOfRangeException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Index out of range");
			}
	};

};

std::ostream &	operator<<(std::ostream & o, Span & rhs);

#endif
