
// ************************************************************************** //
//                                                                            //
//                      Fixed.hpp for D02                                     //
//                      Created: 2022/10/06 11:44:01                          //
//                      Made by : yelgharo <yelgharo@student.1337.ma>         //
//                                                                            //
// ************************************************************************** //

#ifndef Fixed_HPP
# define Fixed_HPP

#include <iostream>

class Fixed {
	
private:

	int					_fixedpoint;
	static const int	_bit = 8;

public:

	Fixed();
	Fixed( const Fixed &p );

	Fixed( int const fixedpoint );
	Fixed( float const fixedpoint );
	
	~Fixed();

	Fixed &	operator=( Fixed const & rhs );
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	float	toFloat() const;
	int		toInt() const;

};

std::ostream &	operator<<( std::ostream & out, Fixed const & rhs );

#endif

// *****************************************************************Fixed_HPP //

