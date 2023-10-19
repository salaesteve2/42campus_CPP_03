/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama < sasalama@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 12:36:47 by sasalama          #+#    #+#             */
/*   Updated: 2023/05/03 11:48:06 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	_name = "default";
	_life = 100;
	_energy = 100;
	_attack = 30;
	std::cout << "FragTrap " << _name << " has been created" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << _name << " has been deleted" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
{
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	_name = name;
	_life = 100;
	_energy = 100;
	_attack = 30;
	std::cout << "FragTrap " << _name << " has been created" << std::endl;
}

void	FragTrap::attack(const std::string &target)
{
	FragTrap enemy = target;
	_energy -= 1;
	if (_energy > 0 && _life > 0)
	{
		enemy.takeDamage(_attack);
		std::cout << "FragTrap " << _name << " attacks " << enemy._name << ", causing " << _attack << " points of damage!" << std::endl; 
		std::cout << "Life of " << enemy._name << " is " << enemy._life << std::endl;
	}
	else
		std::cout << "FragTrap " << _name << " it's not able to attack" << std::endl;
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << _name << " High five! " << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
	std::cout << "FragTrap Assignation operator called" << std::endl;
	_name = src._name;
	_life = src._life;
	_energy = src._energy;
	_attack = src._attack;
	return *this;
}
