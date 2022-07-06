/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmeixner <konstantin.meixner@freenet.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 23:05:32 by kmeixner          #+#    #+#             */
/*   Updated: 2022/07/06 11:00:34 by kmeixner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
template<typename T>
class Array {
public:
	Array() : _size(0), _content(new T[_size]) {}
	Array(int n) : _size(n), _content(new T[_size]) {}
	Array(Array const &rhs) : _size(rhs._size), _content(new T[_size]) {*this = rhs;}
	Array &operator=(Array const &rhs)
	{
		delete[] this->_content;
		this->_size = rhs._size;
		this->_content = new T[_size];
		if (this->_size > 0)
			for (size_t i = 0; i < this->_size; i++)
				this->_content[i] = rhs._content[i];
		return (*this);
	}
	T	&operator[](size_t index)
	{
		if (this->_size == 0 || index > this->_size - 1)
			throw IndexOutOfBoundsException();
		return this->_content[index];
	}
	class IndexOutOfBoundsException : public std::exception {
		const char *what() const throw() {return ("Index out of bounds exception!");}
	};
	~Array() {delete[] (this->_content);}
	size_t size() {return (this->_size);}
private:
	size_t	_size;
	T	*_content;
};
#endif