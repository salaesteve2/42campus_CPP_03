/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama < sasalama@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 12:36:39 by sasalama          #+#    #+#             */
/*   Updated: 2023/05/03 11:35:17 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	_name = "default";
	_life = 100;
	_energy = 50;
	_attack = 20;
	_g_g = false;
	std::cout << "ScavTrap " << _name << " has been created" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << _name << " has been deleted" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
	_g_g = copy._g_g;
}

ScavTrap::ScavTrap(std::string name)
{
	_name = name;
	_life = 100;
	_energy = 50;
	_attack = 20;
	_g_g = false;
	std::cout << "ScavTrap " << _name << " has been created" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	ScavTrap enemy = target;
	_energy -= 1;
	if (_energy > 0 && _life > 0)
	{
		enemy.takeDamage(_attack);
		std::cout << "ScavTrap " << _name << " attacks " << enemy._name << ", causing " << _attack << " points of damage!" << std::endl; 
		std::cout << "Life of " << enemy._name << " is " << enemy._life << std::endl;
	}
	else
		std::cout << "ScavTrap " << _name << " it's not able to attack" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	if (_g_g == false)
	{
		_g_g = true;
		std::cout << "ScavTrap " << _name << " is now in Gate keeper mode! " << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << _name << " is already in Gate keeper mode! " << std::endl;
	}
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	_name = src._name;
	_life = src._life;
	_energy = src._energy;
	_attack = src._attack;
	_g_g = src._g_g;
	return *this;
}