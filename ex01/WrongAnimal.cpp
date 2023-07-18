/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 23:07:47 by simao             #+#    #+#             */
/*   Updated: 2023/07/17 23:10:19 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) 
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal const& animal) 
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = animal;
}

WrongAnimal::~WrongAnimal(void) 
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void	WrongAnimal::operator=(WrongAnimal const& other) 
{
	this->type = other.type;
}

void	WrongAnimal::makeSound(void) const 
{
	std::cout << "This is the wrong aninal sound" << std::endl;
}

std::string	WrongAnimal::getType(void) const 
{
	return this->type;
}