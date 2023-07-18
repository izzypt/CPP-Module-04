/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 21:50:10 by simao             #+#    #+#             */
/*   Updated: 2023/07/18 17:17:02 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#define MAX_ANIMALS 25
int	main(void)
 {

	//test constructors && array

	 std::cout<< " *** teste 1 ***"  << std::endl;
  
	const Animal* d = new Dog();
	const Animal* c = new Cat();
	delete d;
	delete c;

	Animal* animals[MAX_ANIMALS];
	for (int i = 0; i < MAX_ANIMALS; i++)
		i % 2 ? animals[i] = new Cat : animals[i] = new Dog;

	for (int i = 0; i < MAX_ANIMALS; i++)
		delete animals[i];

	//test copy
 std::cout<< " *** teste 2 ***"  << std::endl;
  
	Dog dog;
    dog.setIdea(0, "quero ossos !");
    std::cout<< "Type: " << dog.getType() << std::endl << "Idea: " << dog.getIdea(0) << std::endl ;
    
	Cat cat;
    cat.setIdea(0, "quero leite !");
    std::cout << "Type: " << cat.getType() << std::endl << "Idea: " << cat.getIdea(0) << std::endl ;
  
}