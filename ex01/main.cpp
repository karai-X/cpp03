#include "ScavTrap.hpp"
#include <iostream>

int main() {
	{
          std::cout << "\n=== Constructor Destructor Test ===" << std::endl;
          std::cout << "-- ScavTrap original creation --" << std::endl;
          ScavTrap scav1("scav1");

          std::cout << "-- Copy constructor test --" << std::endl;
          ScavTrap scav2(scav1);

          std::cout << "-- Assignment operator test --" << std::endl;
          ScavTrap scav3("scav2");
          scav3 = scav1;
          std::cout << "-- Destructor Call --" << std::endl;
	}
	{
          std::cout << "\n=== Function Test ===" << std::endl;
          ScavTrap scav1("scav1");
          ScavTrap scav2("scav2");

          scav1.attack("scav2");
          scav2.takeDamage(5);

          scav2.attack("scav1");
          scav1.takeDamage(3);

          scav1.beRepaired(4);
          scav2.beRepaired(2);

		  scav1.guardGate();
		  scav2.guardGate();

          for (int i = 0; i < 51; ++i) {
            scav1.attack("scav2");
          }
		  scav1.guardGate();
        }
}
