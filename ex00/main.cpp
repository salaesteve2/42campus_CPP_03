/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama < sasalama@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 12:36:29 by sasalama          #+#    #+#             */
/*   Updated: 2023/04/28 10:33:50 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap z("Salus");
	ClapTrap y;

	y.attack("other");
	y.takeDamage(10);
	y.takeDamage(10);
	y.beRepaired(5);
	y.attack("other");
	z.beRepaired(3);
	for (int i = 0; i < 12; i++)
		z.attack("Vida");
	z.beRepaired(3);
}
