/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 19:43:06 by christine         #+#    #+#             */
/*   Updated: 2024/02/15 13:23:52 by cqin             ###   ########.fr       */
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
		}

		MutantStack(const stack &src) : stack(src)
		{
		}

		~MutantStack()
		{
		}

		stack &operator=(const stack &autre)
		{
			if (*this != autre)
				*this = autre;
			return (*this);
		}

		iterator begin()
		{
			return (stack::c.begin());
		}

		iterator end()
		{
			return (stack::c.end());
		}
};

#endif
