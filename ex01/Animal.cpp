/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 21:15:55 by simao             #+#    #+#             */
/*   Updated: 2023/07/18 18:11:37 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal default constructor called" << std::endl;
	this->type = "Animal";
}

Animal::Animal(const Animal& other)
{
    *this = other;
}

Animal::~Animal() 
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
    std::cout << "Copy assigment operator called" << std::endl;
    if (this != &other)
        this->type = other.type;
    return *this;
}

void    Animal::makeSound(void)
{
    std::cout << "<Animal> sound" << std::endl;
}

std::string	Animal::getType(void) const 
{
	return this->type;
}
