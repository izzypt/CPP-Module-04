/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 22:39:31 by simao             #+#    #+#             */
/*   Updated: 2023/07/18 13:55:22 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
};

Dog::Dog(const Dog &other) : Animal()
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = other;
};

Dog::~Dog()
{
    std::cout << "Dog destroyed!" << std::endl;
}

Dog& Dog::operator=(Dog const &other) 
{
	this->type = other.type;
	return *this;
}

void    Dog::makeSound(void)
{
    std::cout << "Woof Woof!" << std::endl;
} 

std::string	Dog::getType(void) const 
{
	return this->type;
}