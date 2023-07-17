/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 22:53:30 by simao             #+#    #+#             */
/*   Updated: 2023/07/17 22:56:54 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Cat created" << std::endl;
}

Cat::Cat(const Cat& cat)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = cat;
}

Cat::~Cat(void) 
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(Cat const& other) 
{
	this->type = other.type;
	return *this;
}

void	Cat::makeSound(void)
{
	std::cout << "Miauuu!!" << std::endl;
}