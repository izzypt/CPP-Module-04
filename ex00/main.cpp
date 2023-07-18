/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 21:50:10 by simao             #+#    #+#             */
/*   Updated: 2023/07/18 13:54:37 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void) 
{
	Animal*		meta = new Animal();
	Animal*		j = new Dog();
	Animal*		i = new Cat();
	WrongAnimal*	l = new WrongCat();
	WrongCat*		m = new WrongCat();

	std::cout << '\n' << i->getType() << " goes\n";
	i->makeSound(); //miau
	std::cout << '\n' << j->getType() << " goes\n";
	j->makeSound();//au au
	std::cout << "\nAnimal goes\n";
	meta->makeSound();
	std::cout << "\nWrongCat ptr goes\n";
	m->makeSound();
	std::cout << "\nWrongAnimal ptr goes\n";
	l->makeSound();
	std::cout << std::endl;

	delete meta;
	delete i;
	delete j;
	delete l;
	delete m;
	return 0;
}