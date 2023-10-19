/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama < sasalama@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 12:36:37 by sasalama          #+#    #+#             */
/*   Updated: 2023/05/03 11:49:39 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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


	ScavTrap z2("Salus2");
	ScavTrap y2;

	y2.attack("other2");
	y2.takeDamage(10);
	y2.takeDamage(10);
	y2.beRepaired(5);
	y2.attack("other2");
	z2.beRepaired(3);
	for (int i = 0; i < 12; i++)
		z2.attack("Vida2");
	z2.beRepaired(3);

	FragTrap z3("Salus3");
	FragTrap y3;

	y3.attack("other3");
	y3.takeDamage(10);
	y3.takeDamage(10);
	y3.beRepaired(5);
	y3.attack("other3");
	z3.beRepaired(3);
	for (int i = 0; i < 12; i++)
		z3.attack("Vida3");
	z3.beRepaired(3);
	z3.highFiveGuys();
}