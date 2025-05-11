#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) {
  }
  
ScavTrap::~ScavTrap() { std::cout << "Destructor Called" << std::endl; }
  
ScavTrap::ScavTrap(const ScavTrap &other) {
}
ScavTrap &ScavTrap::operator=(const ScavTrap &other){
	  std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
	  
	}
	return *this;
  }
