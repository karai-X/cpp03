#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
  this->_name = name;
  this->_hit_points = 100;
  this->_energy_points = 50;
  this->_attack_damage = 20;
  this->_is_gkp = false;
  std::cout << _name << ": ScavTrap Constractor Called" << std::endl;
}

ScavTrap::~ScavTrap() {
  std::cout << _name << ": ScavTrap Destructor Called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
  this->_name = other._name;
  _hit_points = other._hit_points;
  _energy_points = other._energy_points;
  _attack_damage = other._attack_damage;
  _is_gkp = false;
  std::cout << _name << ": ScavTrap Copy constructor called" << std::endl;
}
ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
  std::cout << _name << ": ScavTrap Copy assignment operator called"
            << std::endl;
  if (this != &other) {
    this->_name = other._name;
    this->_hit_points = other._hit_points;
    this->_energy_points = other._energy_points;
    this->_attack_damage = other._attack_damage;
	this->_is_gkp = false;
  }
  return *this;
}

void ScavTrap::attack(const std::string &target) {
  if (_energy_points <= 0 || _hit_points <= 0)
    return;
  _energy_points -= 1;
  std::cout << "ScavTrap " << _name << " attacks " << target << ", causing "
            << _attack_damage << " points of damage ! Remaining ep is "
            << _energy_points << "." << std::endl;
}

void ScavTrap::guardGate() {
  if (_energy_points <= 0 || _hit_points <= 0)
    return;
  _is_gkp = true;
  _energy_points -= 1;
  std::cout << _name << " is now in Gate Keeper Mode" << std::endl;
}
