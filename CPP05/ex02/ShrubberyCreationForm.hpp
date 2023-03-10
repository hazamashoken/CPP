/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 23:24:05 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/16 00:55:26 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <fstream>

class ShrubberyCreationForm : public AForm
{
	public:

		ShrubberyCreationForm( void );
		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( const ShrubberyCreationForm &src );
		~ShrubberyCreationForm( void );

		ShrubberyCreationForm	&operator=( const ShrubberyCreationForm &other );


		void		execute(Bureaucrat const & executor) const;

	private:
};

std::ostream &	operator<<( std::ostream & o, ShrubberyCreationForm const & i );

// picture to ascii from `P Nay :D`
std::string const tree =
"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++=====================\n"
"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++=++++++========================\n"
"++++++++++++++++++++++++++++++++++++++++++++++++++++++++==================================\n"
"+++++++++++++++++++++++++++++++++++++++++*++++++++========================================\n"
"+++++++++++++++++++++++++++++++++++*++**#**#*******++**+=================================-\n"
"+++++++++++++++++++++++++++***+**##*******####**********+==========--------------=======--\n"
"++++++++++++++++++++===+*#**#***#*******#****%#########*++==================--:::----==---\n"
"+++++++++++============+****#######****#####%%%#*#*%##%#*++*+=========-----:::::::--------\n"
"=====================+***#***#**##%##*#%###%##**%%###*##++***+===--------:::-----------:--\n"
"====================+***#**####%%######%%#%%%%%%%%%#%#%%++**++=---------------------------\n"
"====================+#****+*#%%%##****#####*##%*##%%%#%%******==--------------------------\n"
"---------------------+*#*####%%#*%##%%%%####*****%*****#**#**##+++=-----------------------\n"
"--------:::::::::--:-+**####%#######%%%##%####*#****+*##***####***#*----------------------\n"
"--------------------******+#++**###**#**#*#%##%###*####%###***##+**=-----------------:::::\n"
"-----------------****+++#**##*########%%%%%#**%%#%*##%%#+****#*###+-::::::::::::::::::::::\n"
"------------------+*#*+*####***####*#%#**#*##%#######%##**####*#**#*-:::::::::::::::::::::\n"
"--------------::---=+**####%##%##%%#****##**#%%%%##*#*+*%#%#%%%++++:.....:.:::::::::::::::\n"
"----------------::-=***###*###%#*##*#%#%#%##%#%%%#%%###%%##%%%%*+#*      ....       .....:\n"
"---------------::::-*##***##*###**###%#*#%##*****####*#%%**#####==#:                  .. .\n"
"::::::::::::::::::-+**###*####+*###**#*####***#***#%%%%##==+*##*--::                     .\n"
"...............:::-**++###+#*+*#%#*++#%%%%%%#%###%*##%###+:-==#=:::                       \n"
"...................:::-=--...:=-*=:.*#==+##%%%#**+#*##*#%*-:..-:-.......                  \n"
".....::::.....................:..........:-%%%+:.-:.-:::::................................\n"
":::::::::::::..............................=%%:...........................................\n"
":::::::::::::::::::::::::::::::::::::::::::=%%=...........................................\n"
"::::::::::::::::::::::::::::::::::::::::::-%%%%-::::::::::::::::::::::::::::::::::::::::::\n"
"***********+++++++++++++++++++++++***+**************************+*++++++++++++++++++++++++\n"
"****************************++++++++++*+++++++++++++++++++++++++++++++++++++++++++++++++++\n"
"*************************+*+**++*+++++*+++++++++++++++++++++++++++++++++++++++++++++++++++\n"
;

#endif
