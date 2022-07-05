/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 22:14:17 by kmeixner          #+#    #+#             */
/*   Updated: 2022/07/05 23:00:11 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
template<typename T>
void	iter(T *arr, int len, void(*f)(T))
{
	for (int i = 0; i < len; i++)
		(f)(arr[i]);
}
template<typename T>
void	print(T i)
{
	std::cout << i << std::endl;
}
template<typename T>
void	zerofy(T *i)
{
	*i = 0;
}
#endif