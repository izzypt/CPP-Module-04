/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 21:05:10 by simao             #+#    #+#             */
/*   Updated: 2023/07/18 13:54:23 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

/* LIbraries */
#include <iostream>
#include <string.h>

/* Classes */
class Animal
{
    protected:
        std::string type;
    public:
        /* Constructors */
        Animal(void);
        Animal(Animal const &other);
        ~Animal(void);
        /* Operator Overloading */
        Animal& operator=(Animal const& other);
        /* Member Functions */
        virtual void    makeSound(void);
        std::string		getType(void) const;
};

#endif