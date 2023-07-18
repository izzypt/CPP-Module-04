/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 22:53:30 by simao             #+#    #+#             */
/*   Updated: 2023/07/18 17:09:29 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
	this->brain = new Brain;
    std::cout << "Cat created" << std::endl;
}

Cat::Cat(const Cat &cat) : Animal()
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = cat;
}

Cat::~Cat(void) 
{
	delete this->brain;
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

std::string	Cat::getType(void) const 
{
	return this->type;
}

std::string Cat::getIdea(int index) const
{
    return this->brain->getIdea(index);
}

void Cat::setIdea(int index, std::string idea)
{
    this->brain->setIdea(index, idea);
}