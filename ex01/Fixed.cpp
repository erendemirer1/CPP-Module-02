/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edemirer <edemirer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 06:30:57 by edemirer          #+#    #+#             */
/*   Updated: 2024/08/27 06:33:35 by edemirer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(const int value) : _value(value << _fractionalBits) {
}

Fixed::Fixed(const float value)
{
    _value = roundf(value * (1 << _fractionalBits));
}