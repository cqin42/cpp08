/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 19:43:06 by christine         #+#    #+#             */
/*   Updated: 2024/02/10 20:24:38 by christine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <iterator>

template<class T>
class MutantStack: public std::stack<T>
{
	public:
		typedef std::stack<T> stack;
		typedef typename stack::container_type container;
		typedef typename container::iterator iterator;

		MutantStack() : stack()
		{
			std::cout << "Default Constructor called" << std::endl;
		}

		MutantStack(const stack &src) : stack(src)
		{
			std::cout << "Copy Constructor called" << std::endl;
		}

		// Deconstuctor
		~MutantStack()
		{
			std::cout << "Deconstuctor called" << std::endl;
		}

		// Overloaded opperators
		stack &operator=(const stack &src)
		{
			if (*this != src)
				*this = src;
			return (*this);
		}

		// begin iterator
		iterator begin()
		{
			return (stack::c.begin());
		}

		// end iterator
		iterator end()
		{
			return (stack::c.end());
		}
};

#endif
