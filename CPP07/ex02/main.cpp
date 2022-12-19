/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 17:43:37 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/19 18:10:21 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int	main(void)
{
	Array<int>		arrayInt(5);
	Array<char>		arrayChar(5);
	Array<std::string>	arrayString(5);

	for (int i = 0; i < 5; i++)
	{
		arrayInt[i] = i;
		arrayChar[i] = 'a' + i;
		arrayString[i] = "String ";
		arrayString[i] += static_cast<char>(i + '0');
	}
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Int[" << i << "] : " << arrayInt[i] << std::endl;
		std::cout << "Char[" << i << "] : " << arrayChar[i] << std::endl;
		std::cout << "String[" << i << "] : " << arrayString[i] << std::endl;
		std::cout << std::endl;
	}
	return (0);
}
