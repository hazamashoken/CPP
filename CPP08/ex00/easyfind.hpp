/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 20:03:45 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/19 20:25:38 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <iterator>
# include <algorithm>

class	Nofound : public std::exception
{
	public:
		virtual const char* what() const throw() { return "No found"; }
};

template <typename T>
int		easyfind(T &container, int n)
{
	std::vector<int>::iterator it;
	it = std::find(container.begin(), container.end(), n);
	if (it == container.end())
		throw Nofound();
	return (*it);
}

#endif
