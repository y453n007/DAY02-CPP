
// ************************************************************************** //
//                                                                            //
//                      Fixed.hpp for D02                                     //
//                      Created: 2022/10/09 17:16:38                          //
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

	int 	operator>( Fixed const & rhs );
	int 	operator<( Fixed const & rhs );
	int 	operator>=( Fixed const & rhs );
	int 	operator<=( Fixed const & rhs );
	int 	operator==( Fixed const & rhs );
	int 	operator!=( Fixed const & rhs );

	Fixed 	operator+( Fixed const & rhs );
	Fixed 	operator-( Fixed const & rhs );
	Fixed 	operator*( Fixed const & rhs );
	Fixed 	operator/( Fixed const & rhs );

	Fixed &	operator++();
	Fixed &	operator--();
	Fixed 	operator++( int );
	Fixed 	operator--( int );

	static		 Fixed &	min(Fixed		 & rhs1, Fixed		 & rhs2);
	static const Fixed &	min(Fixed const & rhs1, Fixed const & rhs2);
	static		 Fixed &	max(Fixed		 & rhs1, Fixed		 & rhs2);
	static const Fixed &	max(Fixed const & rhs1, Fixed const & rhs2);

};

std::ostream &	operator<<( std::ostream & out, Fixed const & rhs );

#endif

// *****************************************************************Fixed_HPP //
