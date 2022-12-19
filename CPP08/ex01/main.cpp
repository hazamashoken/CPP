/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 20:31:10 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/19 21:22:23 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>
#include <vector>

int		main(void)
{
	{
		try
		{
			const unsigned int N = 10000;
			const unsigned int M = 10000;

			Span sp1 = Span(N);
			srand(time(NULL));
			for (int i = 0; i < (int)M; i++)
				sp1.addNumber(rand() % 100);
			// std::cout << sp1 << std::endl; // Uncomment this line to see the vector
			std::cout << sp1.shortestSpan() << std::endl;
			std::cout << sp1.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		try
		{
			Span sp = Span(5);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		try
		{
			Span sp2 = Span(10);
			std::vector<int> v;
			srand(time(NULL));
			for (int i = 0; i < 10; i++)
			{
				v.push_back(rand() % 100);
			}
			sp2.addNumber(v.begin(), v.end());
			std::cout << sp2.shortestSpan() << std::endl;
			std::cout << sp2.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}
