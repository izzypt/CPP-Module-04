/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:23:11 by simao             #+#    #+#             */
/*   Updated: 2023/07/18 18:23:30 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) 
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain;
}

Cat::Cat(const Cat &src) : AAnimal() 
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->brain = new Brain;
	*this = src;
}

Cat::~Cat(void) 
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

Cat& Cat::operator=(Cat const& other) 
{
	this->type   = other.type;
	*this->brain = *other.getBrain();
	return *this;
}



void	Cat::makeSound(void) const 
{
	std::cout << "Miauuu!!" << std::endl;
}
std::string	Cat::getType(void) const 
{
	return this->type;
}

Brain* Cat::getBrain(void) const 
{
	return this->brain;
}


std::string Cat::getIdea(int index) const
{
    return this->brain->getIdea(index);
}

void Cat::setIdea(int index, std::string idea)
{
    this->brain->setIdea(index, idea);
}