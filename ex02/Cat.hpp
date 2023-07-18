/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:22:33 by simao             #+#    #+#             */
/*   Updated: 2023/07/18 18:25:11 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
public:
	Cat(void);
	Cat(Cat const& cat);
	~Cat(void);

	Cat& operator=(Cat const& rhs);

	virtual void	makeSound(void) const;
	std::string		getType(void) const;

	Brain			*getBrain(void) const;
	std::string 	getIdea(int index) const;
	void    		setIdea(int index, std::string idea);

	private:
		Brain			*brain;
};

#endif