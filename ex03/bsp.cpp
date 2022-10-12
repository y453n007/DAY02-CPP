
// ************************************************************************** //
//                                                                            //
//                      Point.hpp for D02                                     //
//                      Created: 2022/10/10 01:37:46                          //
//                      Made by : yelgharo <yelgharo@student.1337.ma>         //
//                                                                            //
// ************************************************************************** //

#include <cmath>
#include "Point.hpp"


float	area(float x1, float y1, float x2, float y2, float x3, float y3)
{
	float	S = ( x1 * ( y2 - y3 ) 
			+ x2 * ( y3 - y1 )
			+ x3 * ( y1 - y2 ) ) / 2;

	return ( S );
}

bool	bsp( Point const a, Point const b, Point const c, Point const point )
{
	float	S, S1, S2, S3;

	S = fabs( area(a.getX().toFloat(), a.getY().toFloat(), b.getX().toFloat(), 
		b.getY().toFloat(), c.getX().toFloat(), c.getY().toFloat() ) );

	S1 = fabs( area(point.getX().toFloat(), point.getY().toFloat(), b.getX().toFloat(), 
		b.getY().toFloat(), c.getX().toFloat(), c.getY().toFloat() ) );

					
	S2 = fabs( area(point.getX().toFloat(), point.getY().toFloat(), a.getX().toFloat(), 
		a.getY().toFloat(), c.getX().toFloat(), c.getY().toFloat() ) );
		
	
	S3 = fabs( area(point.getX().toFloat(), point.getY().toFloat(), a.getX().toFloat(), 
		a.getY().toFloat(), b.getX().toFloat(), b.getY().toFloat() ) );
	
	if ( S == 0 || S1 == 0 || S2 == 0 || S3 == 0 )
		return false;
	if (S1 + S2 + S3 ==  S)
		return true;

	return false;
}

// ************************************************************************** //
