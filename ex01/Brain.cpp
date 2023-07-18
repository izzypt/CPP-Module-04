/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:10:29 by simao             #+#    #+#             */
/*   Updated: 2023/07/18 16:52:30 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


    /**************************** */
    /* Constructors & Destructor */
    /************************** */

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(Brain const& other)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = other;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

    /********************** */
    /* Operator Overloading */
    /********************** */
    
Brain& Brain::operator=(Brain const& other)
{
	std::cout << "Brain assignment operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return *this;
}

    /****************** */
    /* Member Functions */
    /***************** */

std::string Brain::getIdea(int index) const
{
    return this->ideas[index];
}

void Brain::setIdea(int index, const std::string &idea)
{
    this->ideas[index] = idea;
}