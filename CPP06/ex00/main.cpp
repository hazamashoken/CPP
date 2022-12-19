/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:03:45 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/19 15:00:16 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalar.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: ./convert [input]" << std::endl;
		return (0);
	}
	Scalar scalar(argv[1]);
	scalar.convertToChar();
	scalar.convertToInt();
	scalar.convertToFloat();
	scalar.convertToDouble();
	return (0);
}
