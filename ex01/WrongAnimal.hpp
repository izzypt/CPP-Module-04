/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 23:07:21 by simao             #+#    #+#             */
/*   Updated: 2023/07/17 23:15:42 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal 
{
public:
    WrongAnimal(void);
    WrongAnimal(WrongAnimal const& animal);
    ~WrongAnimal(void);

    void	operator=(WrongAnimal const& rhs);

    void			makeSound(void) const;
    std::string		getType(void) const;

protected:
	std::string	type;
};

#endif