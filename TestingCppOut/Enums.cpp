#include "Enums.h"


void Items::test()
{
	Items::Weapons playerHandSlot{ Items::Weapons::Weapon_Steel_Sword };
	bool holdingAWeapon{ isAWeapon(playerHandSlot) };
	if (holdingAWeapon)
	{
		std::cout << "Be careful that is a sharp weapon called a " << getItemTypeString(playerHandSlot) << '\n';
	}
	else
	{
		std::cout << "Not holding any weapons" << '\n';
	}
}

bool Items::isAWeapon(Items::Weapons item)
{
	switch (item)
	{
	case Items::Weapons::Weapon_Steel_Sword:
	case Items::Weapons::Weapon_Iron_Sword:
	case Items::Weapons::Weapon_Demonic_Sword:
		return true;
	default:
		return false;
	}
}

std::string Items::getItemTypeString(Items::Weapons item)
{
	switch (item)
	{
	case Items::Weapons::Weapon_Iron_Sword:
		return "Iron Sword";
	case Items::Weapons::Weapon_Steel_Sword:
		return "Steel Sword";
	case Items::Weapons::MISC_Iron_Ingot:
		return "Iron Ingot";
	case Items::Weapons::Weapon_Demonic_Sword:
		return "Demonic Sword";
	default:
		return "???";
	}
}