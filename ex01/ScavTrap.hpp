#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>

class ScavTrap {
private:
	
public:
  ScavTrap(std::string);
  ~ScavTrap();
  ScavTrap(const ScavTrap &other);
  ScavTrap &operator=(const ScavTrap &other);
};

#endif
