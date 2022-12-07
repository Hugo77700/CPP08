/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugoo <hugoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:17:42 by hugoo             #+#    #+#             */
/*   Updated: 2022/12/06 18:36:00 by hugoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _N(0), _temp(0), _array(NULL)
{
}

Span::Span(unsigned int N) : _N(N), _temp(0), _array(new int[N])
{
}

Span::Span(Span const& cpy)
{
    _N = cpy._N;
    _array = new int[cpy._N];
    for(int i = 0; i < _N; i++)
    {
        _array[i] = cpy._array[i];
    }
}

Span& Span::operator=(Span const& cpy)
{
	if (this == &cpy)
		return (*this);
	delete [] _array;
	_N = cpy._N;
    _array = new int[cpy._N];
    for(int i = 0; i < _N; i++)
    {
        _array[i] = cpy._array[i];
    }
	return (*this);
}

int& Span::operator[](int pos) const
{
	if (pos >= _N)
		throw Span::OutOfRange();
	return(_array[pos]);
}

void Span::addNumber(int nbr)
{
	if (_temp >= _N)
		throw Span::OutOfRange();
	_array[_temp] = nbr;
	_temp++;
}