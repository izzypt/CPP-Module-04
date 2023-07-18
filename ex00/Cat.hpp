/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 21:50:04 by simao             #+#    #+#             */
/*   Updated: 2023/07/18 12:49:18 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

/* Libraries */

#include "Animal.hpp"

/* Classes */

class Cat : public Animal
{
    public:
        Cat(void);
        Cat(const Cat &other);
        Cat& operator=(const Cat &other);
        ~Cat(void);
        void makeSound(void) override;
        std::string		getType(void) const;
};

#endif
