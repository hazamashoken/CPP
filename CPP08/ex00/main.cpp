/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 20:11:07 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/19 20:27:06 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int		main(void)
{
	std::vector<int> v;
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		v.push_back(rand() % 20);
	}
	for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	try
	{
		std::cout << easyfind(v, 5) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << easyfind(v, 11) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
