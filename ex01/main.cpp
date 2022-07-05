/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 22:14:18 by kmeixner          #+#    #+#             */
/*   Updated: 2022/07/05 22:59:43 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
int main(void)
{
	int numbers[5] = {5, 2, 3, 13, 9};
	int *numptrs[5];
	char chars[5] = {'h', 'm', 's', 'b', 'c'};
	char *charptrs[5];
	for (int i = 0; i < 5; i++)
	{
		numptrs[i] = &numbers[i];
		charptrs[i] = &chars[i];
	}
	iter<int>(numbers, 5, print);
	std::cout << std::string(10, '-') << std::endl;
	iter<int*>(numptrs, 5, zerofy);
	iter<int>(numbers, 5, print);
	std::cout << std::string(10, '-') << std::endl;
	iter<char>(chars, 5, print);
	std::cout << std::string(10, '-') << std::endl;
	iter<char*>(charptrs, 5, zerofy);
	iter<char>(chars, 5, print);
	return (0);
}