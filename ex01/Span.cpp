/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 18:31:25 by christine         #+#    #+#             */
/*   Updated: 2024/02/10 19:49:00 by christine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span():_n(0)
{}

Span::Span(unsigned int n): _n(n)
{
}

Span::Span(const Span &autre): _n(autre._n), _span(autre._span)
{
}
Span &Span::operator=(const Span &autre)
{
	if (this != &autre)
	{
		_n = autre._n;
		_span = autre._span;
	}
	return (*this);
}

Span::~Span()
{}

void Span::addNumber(int n)
{
	if (_span.size() >= _n)
		throw std::runtime_error("Span is full");
	_span.push_back(n);
}

int	Span::shortestSpan()
{
	if (_span.size() < 2)
		throw std::runtime_error("No or only one element in Span");

	std::sort(_span.begin(), _span.end());
	int shortest = (_span[1] - _span[0]);
	int tmp = shortest;
	for (size_t i = 2; i < _span.size(); i++)
	{
		tmp = _span[i] - _span[i - 1];
		if (tmp < shortest)
			shortest = tmp;
	}
	return (shortest);
}

int Span::longestSpan()
{
	if (_span.size() < 2)
		throw std::runtime_error("No or only one element in Span");

	std::sort(_span.begin(), _span.end());
	int longest = (_span[1] - _span[0]);
	int tmp = longest;

	for (size_t i = 0; i < _span.size(); i++)
	{
		for (size_t j = i + 1; j < _span.size(); j++)
		{
			tmp = _span[j] - _span[i];
			if (tmp > longest)
				longest = tmp;
		}
	}
	return (longest);
}
