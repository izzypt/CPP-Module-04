/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 18:19:36 by simao             #+#    #+#             */
/*   Updated: 2023/07/18 18:20:06 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
    public:
        Brain(void);
        Brain(Brain const& brain);
        ~Brain(void);

        Brain& operator=(Brain const& rhs);
        std::string getIdea(int index) const;
        void    	setIdea(int index,const std::string &idea);
        std::string	ideas[100];
};

#endif