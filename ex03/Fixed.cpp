
// ************************************************************************** //
//                                                                            //
//                      Fixed.cpp for D02                                     //
//                      Created: 2022/10/10 00:33:57                          //
//                      Made by : yelgharo <yelgharo@student.1337.ma>         //
//                                                                            //
// ************************************************************************** //

#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed() : _fixedpoint(0) {
	return ;
} 

Fixed::Fixed(const Fixed &p)
{
	*this = p;
	return ;
}

Fixed::~Fixed()
{
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
	this->_fixedpoint = rhs.getRawBits();

	return *this;
}

Fixed::Fixed( int const fixedpoint )
{
	_fixedpoint = fixedpoint << _bit;

	return ;
}

Fixed::Fixed( float const fixedpoint )
{
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

int 	Fixed::operator>( Fixed const & rhs )
{
	return ( ( this->toFloat() > rhs.toFloat() ) );
}

int 	Fixed::operator<( Fixed const & rhs )
{
	return ( ( this->toFloat() < rhs.toFloat() ) );
}

int 	Fixed::operator>=( Fixed const & rhs )
{
	return ( ( this->toFloat() >= rhs.toFloat() ) );
}
int 	Fixed::operator<=( Fixed const & rhs )
{
	return ( ( this->toFloat() <= rhs.toFloat() ) );
}

int 	Fixed::operator==( Fixed const & rhs )
{
	return ( ( this->toFloat() == rhs.toFloat() ) );
}

int 	Fixed::operator!=( Fixed const & rhs )
{
	return ( ( this->toFloat() != rhs.toFloat() ) );
}




Fixed	Fixed::operator+(Fixed const & rhs)
{
	return ( Fixed( this->toFloat() + rhs.toFloat() ) );
}

Fixed	Fixed::operator-( Fixed const & rhs )
{
	return ( Fixed( this->toFloat() - rhs.toFloat() ) );
}

Fixed	Fixed::operator*( Fixed const & rhs )
{
	return ( Fixed( this->toFloat() * rhs.toFloat() ) );
}

Fixed	Fixed::operator/( Fixed const & rhs )
{
	return ( Fixed( this->toFloat() / rhs.toFloat() ) );
}


Fixed &	Fixed::operator++()
{	
	++_fixedpoint;

	return *this;
}

Fixed &	Fixed::operator--()
{	
	--_fixedpoint;
	
	return *this;
}

Fixed 	Fixed::operator++( int )
{
	Fixed tmp;

	tmp._fixedpoint = this->_fixedpoint++;

	return tmp;
}

Fixed 	Fixed::operator--( int )
{	
	Fixed tmp;
	
	tmp._fixedpoint = this->_fixedpoint--;

	return tmp;
}

Fixed &	Fixed::min(Fixed & rhs1, Fixed & rhs2)
{
	if ( rhs1._fixedpoint < rhs2._fixedpoint )
		return rhs1;
	else
		return rhs2;
}

const Fixed &	Fixed::min(Fixed const & rhs1, Fixed const & rhs2)
{
	if ( rhs1._fixedpoint < rhs2._fixedpoint )
		return rhs1;
	else
		return rhs2;
}

Fixed &	Fixed::max(Fixed & rhs1, Fixed & rhs2)
{
	if ( rhs1._fixedpoint > rhs2._fixedpoint )
		return rhs1;
	else
		return rhs2;
}

const Fixed &	Fixed::max(Fixed const & rhs1, Fixed const & rhs2)
{
	if ( rhs1._fixedpoint > rhs2._fixedpoint )
		return rhs1;
	else
		return rhs2;
}


// ************************************************************************** //
