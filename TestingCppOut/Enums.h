#ifndef ENUMS_H
#define ENUMS_H

#include <iostream>
#include <string>

class Items
{
public:

	enum class Food
	{
		Apple,
		Orange,
		Steak
	};

	enum class Weapons
	{
		// Weapons
		Weapon_Iron_Sword,
		Weapon_Steel_Sword,
		Weapon_Demonic_Sword,
		// MISC
		MISC_Iron_Ingot
	};

	Items()
	{

	}

	void test();

	bool isAWeapon(Items::Weapons item);

private:
	

	std::string getItemTypeString(Items::Weapons item);

};

#endif // ENUMS_H