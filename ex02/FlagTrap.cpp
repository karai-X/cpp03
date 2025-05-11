#include "FlagTrap.hpp"

FlagTrap::FlagTrap(std::string name) : ClapTrap(name) {
  this->_name = name;
  this->_hit_points = 100;
  this->_energy_points = 100;
  this->_attack_damage = 30;
  std::cout << _name << ": FlagTrap Constractor Called" << std::endl;
}

FlagTrap::~FlagTrap() {
  std::cout << _name << ": FlagTrap Destructor Called" << std::endl;
}

FlagTrap::FlagTrap(const FlagTrap &other) : ClapTrap(other) {
  this->_name = other._name;
  this->_hit_points = other._hit_points;
  this->_energy_points = other._energy_points;
  this->_attack_damage = other._attack_damage;
  std::cout << this->_name << ": FlagTrap Copy constructor called" << std::endl;
}

FlagTrap &FlagTrap::operator=(const FlagTrap &other) {
  std::cout << _name << ": FlagTrap Copy assignment operator called"
            << std::endl;
  if (this != &other) {
    this->_name = other._name;
    this->_hit_points = other._hit_points;
    this->_energy_points = other._energy_points;
    this->_attack_damage = other._attack_damage;
  }
  return *this;
}

void FlagTrap::highFivesGuys() {
  if (_energy_points <= 0 || _hit_points <= 0)
    return;
  _energy_points -= 1;
  std::cout << _name << ": Let's do High Five !!" << std::endl;
}
