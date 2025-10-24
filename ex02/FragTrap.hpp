#ifndef FragTRAP_HPP
#define FragTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : public ClapTrap {
private:
public:
  FragTrap(std::string);
  ~FragTrap();
  FragTrap(const FragTrap &other);
  FragTrap &operator=(const FragTrap &other);
  void highFivesGuys(void);
};

#endif
