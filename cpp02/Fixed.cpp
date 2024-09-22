# include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0)
{
	 std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const Fixed& other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}



