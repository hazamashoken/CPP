/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 13:57:26 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/18 23:08:15 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int		main(void)
{
	const Animal *meta[20];
	
	for (int i = 0; i < 20; i++)
	{
		if (i % 2 == 0)
			meta[i] = new Dog();
		else
			meta[i] = new Cat();
	}

	for (int i = 0; i < 20; i++)
	{
		std::cout << meta[i]->getType() << " " << std::endl;
		meta[i]->makeSound();
		delete meta[i];
	}

	return (0);
}

