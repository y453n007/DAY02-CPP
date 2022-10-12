
// ************************************************************************** //
//                                                                            //
//                      Point.hpp for D02                                     //
//                      Created: 2022/10/10 00:46:50                          //
//                      Made by : yelgharo <yelgharo@student.1337.ma>         //
//                                                                            //
// ************************************************************************** //

#include "Point.hpp"

Point::Point() : _x( 0 ), _y( 0 ) {}

Point::Point( float const x, float const y ) : _x( x ), _y( y ) {}

Point::Point( Point const & p ) : _x( p.getX() ), _y( p.getY() ) {}

Point&  Point::operator=( Point const & rhs )
{
    if (this == &rhs)
        new (this) Point(rhs);
    return *this;
}

Point::~Point() {}

Fixed   Point::getX() const { return _x; }

Fixed   Point::getY() const { return _y; }

// ************************************************************************** //
