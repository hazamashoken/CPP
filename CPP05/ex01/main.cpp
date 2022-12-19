/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 19:57:08 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/19 01:45:31 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try {
		Bureaucrat a = Bureaucrat("A", 1);
		Bureaucrat b = Bureaucrat("B", 150);
		Form fa = Form("FormA", 1, 150); //change middle value to 0 to see error
		Form fb = Form("FormB", 150, 1);
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << fa << std::endl;
		fa.beSigned(a); // change to b to see error
		std::cout << fa << std::endl;
		b.signForm(fb);
		std::cout << fb << std::endl;
	} catch (std::exception & e) {
		std::cout << e.what()  << std::endl;
	}
	return (0);
}
