/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 15:59:49 by simao             #+#    #+#             */
/*   Updated: 2023/07/18 16:53:31 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

/* Libraries */
#include <iostream>
#include <string>

/* Classes */
class Brain
{
    public:
        Brain();
        Brain(Brain const& other);
        ~Brain();
        Brain&		operator=(Brain const& other);
        std::string	ideas[100];
        std::string	getIdea(int index) const;
        void		setIdea(int index,const std::string &idea);
};


#endif