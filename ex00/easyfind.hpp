/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cqin <cqin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 17:02:31 by christine         #+#    #+#             */
/*   Updated: 2024/02/13 11:28:11 by cqin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class notFound : public std::exception
{
	public:
		const char *what() const throw()
		{
			return ("Not found");
		}
};

template <typename T>
typename T::iterator	easyfind(T &container, int value)
{
	typename T::iterator	it =  std::find(container.begin(), container.end(), value);
	if (it != container.end())
		return (it);
	else
		throw notFound();
}

#endif

