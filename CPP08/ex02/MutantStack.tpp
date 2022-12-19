/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 21:39:11 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/19 21:56:06 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T, class Container>
MutantStack<T, Container>::MutantStack(void) : std::stack<T, Container>()
{
}

template <typename T, class Container>
MutantStack<T, Container>::MutantStack(MutantStack const & src) : std::stack<T, Container>(src)
{
}

template <typename T, class Container>
MutantStack<T, Container>::~MutantStack(void)
{
}

template <typename T, class Container>
MutantStack<T, Container> &	MutantStack<T, Container>::operator=(MutantStack const & rhs)
{
	if (this != &rhs)
		std::stack<T, Container>::operator=(rhs);
	return (*this);
}

template <typename T, class Container>
typename MutantStack<T, Container>::iterator	MutantStack<T, Container>::begin(void)
{
	return (c.begin());
}

template <typename T, class Container>
typename MutantStack<T, Container>::iterator	MutantStack<T, Container>::end(void)
{
	return (c.end());
}


