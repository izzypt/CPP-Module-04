/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 12:40:41 by simao             #+#    #+#             */
/*   Updated: 2023/07/18 12:56:44 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat default constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &cat) : WrongAnimal() 
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = cat;
}

WrongCat::~WrongCat(void) 
{
	std::cout << "WrongCat destructor called" << std::endl;
}

void	WrongCat::operator=(WrongCat const& other) 
{
	this->type = other.type;
}

void	WrongCat::makeSound(void)
{
	std::cout << "Meoww!" << std::endl;
}

std::string	WrongCat::getType(void) const 
{
	return this->type;
}