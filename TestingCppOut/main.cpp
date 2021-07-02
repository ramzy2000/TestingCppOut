#include <iostream>
#include <string>

enum class ItemID
{
	Apple,
	Strawberry
};

class Items
{
public:
	ItemID item;
	int itemSize;

	ItemID getItemID()
	{
		return item;
	}

	std::string getItemString()
	{
		switch (item)
		{
		case ItemID::Apple:
			return "Apple";
		default:
			std::cout << "???" << '\n';
			return "???";
		}
	}
};

class Apple : public Items
{
	
public:
	std::string itemString;
	ItemID itemID;
	Apple()
		:itemString(getItemString()), itemID(ItemID::Apple)

	{
		setupID();
		setupString();
	}

	
private:
	void setupID()
	{
		item = ItemID::Apple;
	}

	void setupString()
	{
		itemString = getItemString();
	}
};

int main()
{
	Apple apple;
	std::cout << static_cast<int>(apple.getItemID()) << '\n';
	return 0;
}