/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:33:29 by simao             #+#    #+#             */
/*   Updated: 2023/07/18 18:33:44 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

#define MAX_ANIMALS 5

int	main(void) 
{
	AAnimal	*animals[MAX_ANIMALS];
	Cat		cat;
	Cat		clone = cat;

	for (int i = 0; i < MAX_ANIMALS; i++)
		i % 2 ? animals[i] = new Cat() : animals[i] = new Dog();
	animals[0]->makeSound();
	animals[1]->makeSound();
	for (int i = 0; i < MAX_ANIMALS; i++)
		delete animals[i];

}