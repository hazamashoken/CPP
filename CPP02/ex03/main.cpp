/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliangso <earth78203@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 23:06:42 by tliangso          #+#    #+#             */
/*   Updated: 2022/12/18 16:04:26 by tliangso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void)
{
	Point P1; //default constructor P1 = (0 ; 0)
	Point P2(5, 3.02); // Fixed constructor P2 = (4.18 ; 3.02)
	Point P3(P2); // copy constructor P3 = P2 = (4.18 ; 3.02)
	Point P4(94.16f, 100.12f);
	Point P5(2.56f, 2.08f);
	Point P(4, 3.2);
	Point P6 = P; // Assignation operator used
	Point P7(-0.5f, -0.5f);
	Point *P8 = new Point(P7);

	//2.56 ; 2.08 part of the vertex
	Point Tc(0, 0);
	Point Ta(5.12, 4.16);
	Point Tb(1.18, -6.49);

	Point Tx(0, 3.02);
	Point Ty(5, 3.02);
	Point Tz(2.5, 0);

	// One of the vertexes
	std::cout << std::endl;
	std::cout << "P1: one of the vertexes, should be false" << std::endl;
	std::cout << "x: " << P1.getX() << " y: " << P1.getY() << std::endl;
	std::cout << "A x: " << Ta.getX() << " y: " << Ta.getY() << std::endl;
	std::cout << "B x: " << Tb.getX() << " y: " << Tb.getY() << std::endl;
	std::cout << "C x: " << Tc.getX() << " y: " << Tc.getY() << std::endl;
	std::cout << "BSP Return value: " << bsp(Ta, Tb, Tc, P1) << std::endl;

	// Inside the triangle
	std::cout << std::endl;
	std::cout << "P2: inside the triangle, should be true" << std::endl;
	std::cout << "x: " << P2.getX() << " y: " << P2.getY() << std::endl;
	std::cout << "A x: " << Ta.getX() << " y: " << Ta.getY() << std::endl;
	std::cout << "B x: " << Tb.getX() << " y: " << Tb.getY() << std::endl;
	std::cout << "C x: " << Tc.getX() << " y: " << Tc.getY() << std::endl;
	std::cout << "BSP Return value: " << bsp(Ta, Tb, Tc, P2) << std::endl;

	// On the edge
	std::cout << std::endl;
	std::cout << "P3: on the edge, should be false" << std::endl;
	std::cout << "x: " << P3.getX() << " y: " << P3.getY() << std::endl;
	std::cout << "A x: " << Tx.getX() << " y: " << Tx.getY() << std::endl;
	std::cout << "B x: " << Ty.getX() << " y: " << Ty.getY() << std::endl;
	std::cout << "C x: " << Tz.getX() << " y: " << Tz.getY() << std::endl;
	std::cout << "BSP Return value: " << bsp(Tx, Ty, Tz, P3) << std::endl;

	// Outside the triangle
	std::cout << std::endl;
	std::cout << "P4: outside the triangle, should be false" << std::endl;
	std::cout << "x: " << P4.getX() << " y: " << P4.getY() << std::endl;
	std::cout << "A x: " << Ta.getX() << " y: " << Ta.getY() << std::endl;
	std::cout << "B x: " << Tb.getX() << " y: " << Tb.getY() << std::endl;
	std::cout << "C x: " << Tc.getX() << " y: " << Tc.getY() << std::endl;
	std::cout << "BSP Return value: " << bsp(Ta, Tb, Tc, P4) << std::endl;

	// On the edge
	std::cout << std::endl;
	std::cout << "P5: on the edge, should be false" << std::endl;
	std::cout << "x: " << P5.getX() << " y: " << P5.getY() << std::endl;
	std::cout << "A x: " << Ta.getX() << " y: " << Ta.getY() << std::endl;
	std::cout << "B x: " << Tb.getX() << " y: " << Tb.getY() << std::endl;
	std::cout << "C x: " << Tc.getX() << " y: " << Tc.getY() << std::endl;
	std::cout << "BSP Return value: " << bsp(Ta, Tb, Tc, P5) << std::endl;

	// Inside
	std::cout << std::endl;
	std::cout << "P6: inside, should be true" << std::endl;
	std::cout << "x: " << P6.getX() << " y: " << P6.getY() << std::endl;
	std::cout << "A x: " << Tx.getX() << " y: " << Tx.getY() << std::endl;
	std::cout << "B x: " << Ty.getX() << " y: " << Ty.getY() << std::endl;
	std::cout << "C x: " << Tz.getX() << " y: " << Tz.getY() << std::endl;
	std::cout << "BSP Return value: " << bsp(Tx, Ty, Tz, P6) << std::endl;

	// Outside
	std::cout << std::endl;
	std::cout << "P7: outside the triangle, should be false" << std::endl;
	std::cout << "x: " << P7.getX() << " y: " << P7.getY() << std::endl;
	std::cout << "A x: " << Tx.getX() << " y: " << Tx.getY() << std::endl;
	std::cout << "B x: " << Ty.getX() << " y: " << Ty.getY() << std::endl;
	std::cout << "C x: " << Tz.getX() << " y: " << Tz.getY() << std::endl;
	std::cout << "BSP Return value: " << bsp(Tx, Ty, Tz, P7) << std::endl;
	return 0;
}
