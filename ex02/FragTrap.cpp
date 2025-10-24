#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
  this->_name = name;
  this->_hit_points = 100;
  this->_energy_points = 100;
  this->_attack_damage = 30;
  std::cout << _name << ": FragTrap Constractor Called" << std::endl;
}

FragTrap::~FragTrap() {
  std::cout << _name << ": FragTrap Destructor Called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
  this->_name = other._name;
  this->_hit_points = other._hit_points;
  this->_energy_points = other._energy_points;
  this->_attack_damage = other._attack_damage;
  std::cout << this->_name << ": FragTrap Copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
  std::cout << _name << ": FragTrap Copy assignment operator called"
            << std::endl;
  if (this != &other) {
    this->_name = other._name;
    this->_hit_points = other._hit_points;
    this->_energy_points = other._energy_points;
    this->_attack_damage = other._attack_damage;
  }
  return *this;
}

void FragTrap::highFivesGuys() {
  if (_energy_points <= 0 || _hit_points <= 0)
    return;
  std::cout << _name << ": Let's do High Five !!" << std::endl;
}
