#include "ScavTrap.hpp"
#include "FlagTrap.hpp"
#include <iostream>

int main() {
	{
          std::cout << "\n=== Constructor Destructor Test ===" << std::endl;
          std::cout << "-- FlagTrap original creation --" << std::endl;
          FlagTrap flag1("flag1");

          std::cout << "-- Copy constructor test --" << std::endl;
          FlagTrap flag2(flag1);

          std::cout << "-- Assignment operator test --" << std::endl;
          FlagTrap flag3("flag2");
          flag3 = flag1;
          std::cout << "-- Destructor Call --" << std::endl;
	}
	{
          std::cout << "\n=== Function Test ===" << std::endl;
          FlagTrap flag1("flag1");
          FlagTrap flag2("flag2");

          flag1.attack("flag2");
          flag2.takeDamage(5);

          flag2.attack("flag1");
          flag1.takeDamage(3);

          flag1.beRepaired(4);
          flag2.beRepaired(2);

		  flag1.highFivesGuys();
		  flag2.highFivesGuys();

          for (int i = 0; i < 51; ++i) {
            flag1.attack("flag2");
          }
		  flag1.highFivesGuys();
        }
}
