
// ************************************************************************** //
//                                                                            //
//                      Fixed.hpp for D02                                     //
//                      Created: 2022/10/06 09:20:08                          //
//                      Made by : yelgharo <yelgharo@student.1337.ma>         //
//                                                                            //
// ************************************************************************** //


#ifndef Fixed_HPP
# define Fixed_HPP

class Fixed {
	
private:

	int					_fixedpoint;
	static const int	_bit = 8;

public:

	Fixed();
	Fixed( const Fixed &p );
	~Fixed();

	Fixed &	operator=( Fixed const & rhs );
	int getRawBits( void ) const;
	void setRawBits( int const raw );

};

#endif

// *****************************************************************Fixed_HPP //
