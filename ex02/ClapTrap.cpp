#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) {
  _name = name;
  _hit_points = 10;
  _energy_points = 10;
  _attack_damage = 0;
  std::cout << _name << ": ClapTrap Constractor Called" << std::endl;
}

ClapTrap::~ClapTrap() { std::cout << _name << ": ClapTrap Destructor Called" << std::endl; }

ClapTrap::ClapTrap(const ClapTrap &other) {
	_name = other._name;
	_hit_points = other._hit_points;
	_energy_points = other._energy_points;
	_attack_damage = other._attack_damage;
	std::cout << _name << ": ClapTrap Copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other){
	std::cout << _name << ": ClapTrap Copy assignment operator called" << std::endl;
  if (this != &other) {
    this->_name = other._name;
	this->_hit_points = other._hit_points;
	this->_energy_points = other._energy_points;
	this->_attack_damage = other._attack_damage;
  }
  return *this;
}

void ClapTrap::attack(const std::string &target) {
  if (_energy_points <= 0 || _hit_points <= 0)
    return;
  _energy_points -= 1;
  std::cout << "ClapTrap " << _name << " attacks " << target << ", causing "
            << _attack_damage << " points of damage ! Remaining ep is "
            << _energy_points << "." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
  _hit_points -= amount;
  std::cout << "ClapTrap " << _name << " takes " << amount
            << " points of damage, HP became " << _hit_points << " points !"
            << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (_energy_points <= 0 || _hit_points <= 0)
    return;
  _hit_points += amount;
  _energy_points -= 1;
  std::cout << "ClapTrap " << _name << " repaired " << amount
            << " points of HP, HP became " << _hit_points
            << " points ! Remaining ep is " << _energy_points << "."
            << std::endl;
}
