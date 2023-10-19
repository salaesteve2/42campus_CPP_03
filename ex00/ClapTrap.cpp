/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasalama < sasalama@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 12:36:23 by sasalama          #+#    #+#             */
/*   Updated: 2023/05/03 11:17:07 by sasalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_life = 10;
	_energy = 10;
	_attack = 0;
	std::cout << "ClapTrap " << _name << " has been created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
	*this = copy;
}

ClapTrap::ClapTrap(void)
{
	_name = "default";
	_life = 10;
	_energy = 10;
	_attack = 5;
	std::cout << "ClapTrap " << _name << " has been created" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << _name << " has been deleted" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	ClapTrap enemy = target;
	_energy -= 1;
	if (_energy > 0 && _life > 0)
	{
		enemy.takeDamage(_attack);
		std::cout << "ClapTrap " << _name << " attacks " << enemy._name << ", causing " << _attack << " points of damage!" << std::endl; 
		std::cout << "Life of " << enemy._name << " is " << enemy._life << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " it's not able to attack" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_life > amount)
	{
		std::cout << "ClapTrap " << _name << " was attacked and lost " << amount << std::endl;
		_life -= amount;
	}
	else if (_life > 0)
		_life = 0;
	else
		std::cout << "ClapTrap " << _name << " it's dead" << std::endl;
	
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy > 0 && _life > 0 && _life + amount <= 10)
	{
		_life = amount;
		_energy -= 1;
		std::cout << "ClapTrap " << _name << " has been repaired " << amount << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " couldn't be repaired " << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "ClapTrap Assignation operator called" << std::endl;
	this->_name = src._name;
	this->_life = src._life;
	this->_energy = src._energy;
	this->_attack = src._attack;
	return *this;
}
