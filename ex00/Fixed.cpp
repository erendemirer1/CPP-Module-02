/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edemirer <edemirer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 05:49:42 by edemirer          #+#    #+#             */
/*   Updated: 2024/08/27 05:59:58 by edemirer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
Fixed::Fixed(): _value(0)
{
	std:: cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std:: cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	std:: cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std:: cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed)
		this->_value = fixed.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const
{
    std:: cout << "getRawBits member function called" << std::endl;
    return this->_value;
}

void Fixed::setRawBits(int const raw)
{
    std:: cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
}