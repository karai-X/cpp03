#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FlagTrap : public ClapTrap {
private:
public:
  FlagTrap(std::string);
  ~FlagTrap();
  FlagTrap(const FlagTrap &other);
  FlagTrap &operator=(const FlagTrap &other);
  void highFivesGuys(void);
};

#endif
