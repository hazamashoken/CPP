/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:13:11 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/19 17:13:38 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void	swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>

T		min(T &a, T &b)
{
	return (a < b ? a : b);
}

template <typename T>
T		max(T &a, T &b)
{
	return (a > b ? a : b);
}

#endif
