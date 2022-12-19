/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalar.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:40:50 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/19 15:21:52 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
# define SCALAR_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <cmath>
# include <climits>
# include <cfloat>
# include <cstring>

class Scalar
{
	public:
		Scalar( void );
		Scalar( char * input );
		Scalar( Scalar const & src );
		~Scalar( void );

		Scalar &	operator=( Scalar const & rhs );

		void	convertToChar();
		void	convertToInt();
		void	convertToFloat();
		void	convertToDouble();

	private:
		double	_input;
};

#endif
