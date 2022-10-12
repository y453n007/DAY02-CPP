
// ************************************************************************** //
//                                                                            //
//                      Point.hpp for D02                                     //
//                      Created: 2022/10/10 02:04:44                          //
//                      Made by : yelgharo <yelgharo@student.1337.ma>         //
//                                                                            //
// ************************************************************************** //

#include "Point.hpp"

int main ( void )
{
    Point const a( 0, 0 );
    Point const b( 0, 10 );
    Point const c( 5, 5);
    Point const point( 5, 4);

    if ( bsp( a, b, c, point ) )
        std::cout << "\t\t[ TRUE !]"  << std::endl
        <<"Our dear POINT is in our beloved TRIANGLE !!" << std::endl;
    else
        std::cout << "\t\t[ FALSE !]"  << std::endl
        << "Our dear POINT is out of our beloved TRIANGLE !!" << std::endl;

    return 0;
}

// ************************************************************************** //
