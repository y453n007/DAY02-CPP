
// ************************************************************************** //
//                                                                            //
//                      main.cpp for D02                                      //
//                      Created: 2022/10/09 17:19:16                          //
//                      Made by : yelgharo <yelgharo@student.1337.ma>         //
//                                                                            //
// ************************************************************************** //

#include "Fixed.hpp"

int main( void ) 
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    
    return 0;
}

// ************************************************************************** //
