/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama < sasalama@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 12:36:41 by sasalama          #+#    #+#             */
/*   Updated: 2023/05/03 13:24:07 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	private:
		bool _g_g;
	public:
		ScavTrap(void);
		virtual ~ScavTrap(void);
		ScavTrap(const ScavTrap &copy);
		ScavTrap(std::string name);
		ScavTrap &operator=(const ScavTrap &src);
		void	attack(const std::string &target);
		void	guardGate(void);
};

#endif