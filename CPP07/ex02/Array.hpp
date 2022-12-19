/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:41:32 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/19 18:08:32 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
	public:
		Array(void);
		Array(unsigned int n);
		Array(Array const &src);
		~Array(void);

		Array	&operator=(Array const &rhs);

		T		&operator[](unsigned int i);

		unsigned int	size(void) const;

	private:
		T				*_array;
		unsigned int	_size;
};

#include "Array.tpp"

#endif
