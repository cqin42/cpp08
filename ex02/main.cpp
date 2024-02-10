/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: christine <christine@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 20:22:25 by christine         #+#    #+#             */
/*   Updated: 2024/02/10 20:27:58 by christine        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main() {
    MutantStack<int> mstack;
    mstack.push(1);
    mstack.push(2);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << "size = " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(4);
    mstack.push(5);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }

    return 0;
}
