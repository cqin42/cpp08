/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 19:09:45 by christine         #+#    #+#             */
/*   Updated: 2024/02/10 19:22:08 by christine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try
	{
		Span span = Span(0);
		int i = span.shortestSpan();
		std::cout << i << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-----------------------------------------------" << std::endl;
	try
	{
		Span span1 = Span(0);
		span1.addNumber(60);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "-----------------------------------------------" << std::endl;
	try
	{
		Span span2 = Span(10);
		span2.addNumber(5);
		int i = span2.shortestSpan();
		std::cout << i << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	std::cout << "-----------------------------------------------" << std::endl;
	try
	{
		Span span3 = Span(10);
		span3.addNumber(1);
		span3.addNumber(2);
		span3.addNumber(3);
		span3.addNumber(4);
		span3.addNumber(5);
		int i;
		i = span3.shortestSpan();
		std::cout << i << std::endl;
		i = span3.longestSpan();
		std::cout << i << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

}