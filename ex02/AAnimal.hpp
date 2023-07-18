/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:13:06 by simao             #+#    #+#             */
/*   Updated: 2023/07/18 18:13:16 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal 
{
public:
	AAnimal(void);
	AAnimal(AAnimal const& animal);
	virtual ~AAnimal(void);

	AAnimal& operator=(AAnimal const& rhs);

	virtual void		makeSound(void) const = 0;
	virtual std::string	getType(void) const = 0;

protected:
	std::string	type;
};

#endif