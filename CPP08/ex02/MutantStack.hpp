/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 21:23:13 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/19 21:58:25 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <deque>
# include <cstdlib>


template <typename T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	using std::stack<T, Container>::c;

	public:
		MutantStack(void);
		MutantStack(MutantStack const & src);
		~MutantStack(void);

		MutantStack &	operator=(MutantStack const & rhs);

		typedef typename Container::iterator	iterator;

		iterator	begin(void);
		iterator	end(void);
};

# include "MutantStack.tpp"

#endif
