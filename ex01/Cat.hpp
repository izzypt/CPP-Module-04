/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 21:50:04 by simao             #+#    #+#             */
/*   Updated: 2023/07/18 17:09:37 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

/* Libraries */

#include "Animal.hpp"
#include "Brain.hpp"

/* Classes */

class Cat : public Animal
{
    public:
        Cat(void);
        Cat(const Cat &cat);
        Cat& operator=(const Cat &other);
        ~Cat(void);
        void makeSound(void) override;
        std::string		getType(void) const;
		std::string 	getIdea(int index) const;
		void    		setIdea(int index, std::string idea);
    private:
        Brain *brain;
};

#endif
