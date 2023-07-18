/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 12:34:41 by simao             #+#    #+#             */
/*   Updated: 2023/07/18 12:42:07 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H

/* Libraries */

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

/* Classes */

class WrongCat : public WrongAnimal
{
    public:
        WrongCat(void);
        WrongCat(WrongCat const& cat);
        ~WrongCat(void);
        void operator=(WrongCat const& cat);
        void makeSound(void);
        std::string		getType(void) const;
};

#endif
