/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 17:11:00 by christine         #+#    #+#             */
/*   Updated: 2024/02/10 17:31:02 by christine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main ()
{
	std::vector<int> vec;
	std::vector<int>::iterator it;

	for (int i = 0; i < 10; i++)
	{
		vec.push_back(i);
	}

	try
	{
		it = easyfind(vec, 6);
		std::cout << "find it" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		it = easyfind(vec, 10);
		std::cout << "find it" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
