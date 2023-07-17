/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 21:05:10 by simao             #+#    #+#             */
/*   Updated: 2023/07/17 22:48:17 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

/* LIbraries */
#include <iostream>
#include <string.h>
#include "Dog.hpp"
#include "Cat.hpp"

/* Classes */
class Animal
{
    protected:
        std::string type;
    public:
        /* Constructors */
        Animal(void);
        Animal(const Animal& other);
        ~Animal(void);
        /* Operator Overloading */
        Animal& operator=(const Animal& other);
        /* Member Functions */
        virtual void    makeSound(void);
};

#endif