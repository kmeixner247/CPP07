/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 22:00:52 by kmeixner          #+#    #+#             */
/*   Updated: 2022/07/05 22:07:48 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>
#include <string>
template<typename T>
void swap(T &x, T &y)
{
	T tmp;
	tmp = x;
	x = y;
	y = tmp;
}
template<typename T>
T const &min(T const &x, T const &y)
{
	return ((x < y) ? x : y);
}

template<typename T>
T const &max(T const &x, T const &y)
{
	return ((x > y) ? x : y);
};
#endif