/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:31:52 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/19 16:49:50 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <ctime>
#include <cstdlib>

Base*	generate(void)
{
	int		rand = std::rand() % 3;
	Base*	base;

	if (rand == 0)
		base = new A;
	else if (rand == 1)
		base = new B;
	else
		base = new C;
	return (base);
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::exception& e)
	{
		try
		{
			(void)dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
		}
		catch (std::exception& e)
		{
			try
			{
				(void)dynamic_cast<C&>(p);
				std::cout << "C" << std::endl;
			}
			catch (std::exception& e)
			{
				std::cout << "Unknown" << std::endl;
			}
		}
	}
}

int main(void)
{
	std::srand(std::time(0));
	for (int i = 0; i < 10; i++)
	{
		Base*	base = generate();
		std::cout << "identify(base): ";
		identify(base);
		std::cout << "identify(*base): ";
		identify(*base);
		std::cout << std::endl;
		delete base;
	}
	return (0);
}


