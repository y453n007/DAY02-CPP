
// ************************************************************************** //
//                                                                            //
//                      Point.hpp for D02                                     //
//                      Created: 2022/10/10 00:46:50                          //
//                      Made by : yelgharo <yelgharo@student.1337.ma>         //
//                                                                            //
// ************************************************************************** //

#ifndef Point_HPP
# define Point_HPP

# include "Fixed.hpp"

class Point {

private:

    Fixed const _x;
    Fixed const _y;

public:

    Point();
    Point( float const x, float const y );
    Point( Point const & p );
    Point& operator=( Point const & rhs );
    ~Point();

    Fixed getX() const;
    Fixed getY() const;

};

bool	bsp( Point const a, Point const b, Point const c, Point const point );

#endif

// ************************************************************************** //
