/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:37:19 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/19 18:17:03 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void	print(int & i)
{
	std::cout << i;
}

void	add_one(int & i)
{
	i++;
}

int		main(void)
{
	int		array[5] = {1, 2, 3, 4, 5};

	iter(array, 5, print);
	std::cout << std::endl;
	iter(array, 5, add_one);
	iter(array, 5, print);
	std::cout << std::endl;
	return (0);
}
