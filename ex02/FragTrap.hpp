/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama < sasalama@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 12:36:49 by sasalama          #+#    #+#             */
/*   Updated: 2023/05/03 13:24:28 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	private:

	public:
		FragTrap(void);
		virtual ~FragTrap(void);
		FragTrap(const FragTrap &copy);
		FragTrap(std::string name);
		FragTrap &operator=(const FragTrap &src);
		void	attack(const std::string &target);
		void	highFiveGuys(void);
};

#endif
