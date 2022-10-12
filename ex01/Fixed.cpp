
// ************************************************************************** //
//                                                                            //
//                      Fixed.cpp for D02                                     //
//                      Created: 2022/10/06 11:51:34                          //
//                      Made by : yelgharo <yelgharo@student.1337.ma>         //
//                                                                            //
// ************************************************************************** //

#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed() : _fixedpoint(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
} 

Fixed::Fixed(const Fixed &p)
{
	std::cout << "Copy constructor called" << std::endl;

	*this = p;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;

	return ;
}

int	Fixed::getRawBits( void ) const
{

	return this->_fixedpoint;
}

void	Fixed::setRawBits( int const raw )
{
	this->_fixedpoint = raw;
	return ;
}

Fixed &	Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedpoint = rhs.getRawBits();

	return *this;
}

Fixed::Fixed( int const fixedpoint )
{
	std::cout << "Int constructor called" << std::endl;
	_fixedpoint = fixedpoint << _bit;

	return ;
}

Fixed::Fixed( float const fixedpoint )
{
	std::cout << "Float constructor called" << std::endl;
	_fixedpoint = roundf( fixedpoint  * ( 1 << _bit ) );

	return;
}

float	Fixed::toFloat( void ) const
{
	float ret;

	ret = ( float )_fixedpoint / ( 1 << _bit );

	return ret;

}

int		Fixed::toInt( void ) const
{
	int ret;
	
	ret = _fixedpoint >> _bit;

	return ret;
}

std::ostream &	operator<<( std::ostream & out, Fixed const & rhs )
{

	out << rhs.toFloat();

	return out;
}

// ************************************************************************** //
