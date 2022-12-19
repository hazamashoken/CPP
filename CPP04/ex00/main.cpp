/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 13:57:26 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/18 16:17:59 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int		main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete j;//should not create a leak
	delete i;
	delete meta;

	std::cout << "\nWrongAnimal\n" << std::endl;

	const WrongAnimal* wrong = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << wrongCat->getType() << " " << std::endl;

	wrong->makeSound();
	wrongCat->makeSound();

	delete wrong;
	delete wrongCat;
	return (0);
}

