/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:13:33 by simao             #+#    #+#             */
/*   Updated: 2023/07/18 18:13:54 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) 
{
	std::cout << "Animal default constructor called" << std::endl;
	this->type = "Animal";
}

AAnimal::AAnimal(AAnimal const& animal) 
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = animal;
}

AAnimal::~AAnimal(void)
 {
	std::cout << "Animal destructor called" << std::endl;
}

AAnimal& AAnimal::operator=(AAnimal const& rhs) 
{
	this->type = rhs.type;
	return *this;
}