/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugoo <hugoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 16:17:56 by hugoo             #+#    #+#             */
/*   Updated: 2022/12/06 18:28:04 by hugoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <string>
#include <algorithm>
#include <vector>
#include <exception>

class Span
{
	public :
	
		Span();
		Span(unsigned int N);
		Span(Span const& cpy);
		~Span();

		Span& operator=(Span const& cpy);
		int& operator[](int pos) const;
		void addNumber(int nbr);
		
		class OutOfRange : public std::exception
		{
				
		};
		
	private :
	
		int * _array;
		unsigned int _N;
		unsigned int _temp;

};

#endif