/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 18:24:49 by christine         #+#    #+#             */
/*   Updated: 2024/02/13 11:28:19 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	public:
		Span();
		Span(unsigned int n);
		Span(const Span &autre);
		Span &operator=(const Span &autre);
		~Span();

		void addNumber(int n);
		int	shortestSpan();
		int longestSpan();

	private:
		unsigned int _n;
		std::vector<int> _span;
};

#endif
