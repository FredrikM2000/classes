#include <iostream>
#include <string>

class Player {
public:
	std::string name;
	int health;
	int hitPower;
	std::string inventory[5] = {"1", "2", "3", "4", "5"};

	void printInfo(Player p) {
		std::cout << "Name: " << p.name;
		std::cout << "\nHealth: " << p.health;
		std::cout << "\nHit Power: " << p.hitPower;
		std::cout << "\nInventory: ";
		for (int s = 0; s <= 4; s++) {
			std::cout << p.inventory[s] << " ";
		}
	}
	int takeDamage(int dmg) {
		health -= dmg;
		return health;
	}
	int hitPowerReturn() {
		return hitPower;
	}
	void putIntoInventory(std::string item, int inventoryIndex) {
		inventory[inventoryIndex] = item;
	}
};



int main()
{
	Player p1;
	p1.name = "fredrik";
	p1.health = 100;
	p1.hitPower = 10;



	/*p1.health = p1.takeDamage(20);

	p1.putIntoInventory("sword", 0);

	p1.printInfo(p1);*/
}

