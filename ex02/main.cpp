#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main() {
	{
          std::cout << "\n=== Constructor Destructor Test ===" << std::endl;
          std::cout << "-- FragTrap original creation --" << std::endl;
          FragTrap Frag1("Frag1");

          std::cout << "-- Copy constructor test --" << std::endl;
          FragTrap Frag2(Frag1);

          std::cout << "-- Assignment operator test --" << std::endl;
          FragTrap Frag3("Frag2");
          Frag3 = Frag1;
          std::cout << "-- Destructor Call --" << std::endl;
	}
	{
          std::cout << "\n=== Function Test ===" << std::endl;
          FragTrap Frag1("Frag1");
          FragTrap Frag2("Frag2");

          Frag1.attack("Frag2");
          Frag2.takeDamage(5);

          Frag2.attack("Frag1");
          Frag1.takeDamage(3);

          Frag1.beRepaired(4);
          Frag2.beRepaired(2);

		  Frag1.highFivesGuys();
		  Frag2.highFivesGuys();

          for (int i = 0; i < 54; ++i) {
            Frag1.attack("Frag2");
          }
		  Frag1.highFivesGuys();
        }
}
