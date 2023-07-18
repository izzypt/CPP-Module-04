/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:25:58 by simao             #+#    #+#             */
/*   Updated: 2023/07/18 18:25:59 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) 
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain;
}

Dog::Dog(Dog const& dog) : AAnimal() 
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->brain = new Brain;
	*this = dog;
}

Dog::~Dog(void) 
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
}

Dog& Dog::operator=(Dog const& rhs) 
{
	this->type = rhs.type;
	*this->brain = *rhs.getBrain();
	return *this;
}

void	Dog::makeSound(void) const 
{
	std::cout << "Whoof! Whoof! Whoof!" << std::endl;
}

Brain* Dog::getBrain(void) const 
{
	return this->brain;
}
std::string	Dog::getType(void) const 
{
	return this->type;
}
std::string Dog::getIdea(int index) const
{
    return this->brain->getIdea(index);
}

void Dog::setIdea(int index, std::string idea)
{
    this->brain->setIdea(index, idea);
}