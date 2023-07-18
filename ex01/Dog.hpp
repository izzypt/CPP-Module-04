/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 21:50:01 by simao             #+#    #+#             */
/*   Updated: 2023/07/18 17:01:37 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

/* Libraries */

#include "Animal.hpp"
#include "Brain.hpp"

/* Classes */

class Dog : public Animal
{
    public:
        Dog(void);
        Dog(Dog const &other);
        ~Dog(void);
        Dog& operator=(const Dog& other);
        void makeSound(void) override;
        std::string		getType(void) const;
		std::string 	getIdea(int index) const;
		void    		setIdea(int index, std::string idea);
    private:
        Brain *brain;
};

#endif