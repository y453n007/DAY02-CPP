
// ************************************************************************** //
//                                                                            //
//                      Fixed.cpp for D02                                     //
//                      Created: 2022/10/06 09:20:08                          //
//                      Made by : yelgharo <yelgharo@student.1337.ma>         //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed() : _fixedpoint(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
} 

Fixed::Fixed(const Fixed &p)
{
	std::cout << "Copy constructor called" << std::endl;
	_fixedpoint = p.getRawBits();
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
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

// ************************************************************************** //
