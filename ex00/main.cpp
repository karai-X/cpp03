#include "ClapTrap.hpp"

int main() {
  ClapTrap clap1("Clappy");
  ClapTrap clap2("Trapster");

  clap1.attack("Trapster");
  clap2.takeDamage(5);

  clap2.attack("Clappy");
  clap1.takeDamage(3);

  clap1.beRepaired(4);
  clap2.beRepaired(2);

  for (int i = 0; i < 13; ++i) {
    clap1.attack("Trapster");
  }

  return 0;
}
