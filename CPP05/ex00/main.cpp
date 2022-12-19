/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 18:50:38 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/19 01:45:38 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try {
		// Bureaucrat z = Bureaucrat("Z", -1); // overflow
		Bureaucrat a = Bureaucrat("A", 1);
		Bureaucrat b = Bureaucrat("B", 150);
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		a.incrementGrade();
		a.incrementGrade();
		a.incrementGrade();
	} catch (std::exception & e) {
		std::cout << e.what()  << std::endl;
	}
	return (0);
}
