/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:27:25 by simao             #+#    #+#             */
/*   Updated: 2023/07/18 18:32:49 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
    public:
        Dog(void);
        Dog(Dog const& dog);
        ~Dog(void);

        Dog& operator=(Dog const& rhs);

        virtual void	makeSound(void) const;
        std::string		getType(void) const;

        Brain			*getBrain(void) const;
        std::string 	getIdea(int index) const;
        void    		setIdea(int index, std::string idea);
    private:
        Brain*			brain;
};

#endif