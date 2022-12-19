/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:23:35 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/19 15:30:00 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <stdint.h>

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*			deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main()
{
	Data*		data = new Data;
	uintptr_t	serialized = serialize(data);
	Data*		deserialized = deserialize(serialized);

	std::cout << "data: " << data << std::endl;
	std::cout << "serialized: " << serialized << std::endl;
	std::cout << "deserialized: " << deserialized << std::endl;

	return (0);
}
