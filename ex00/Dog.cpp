/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 22:39:31 by simao             #+#    #+#             */
/*   Updated: 2023/07/17 22:52:15 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
};

Dog::Dog(const Dog &other)
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
