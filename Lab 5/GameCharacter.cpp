#include "GameCharacter.h"

GameCharacter::GameCharacter() {
	this->name = "Miner";
	tools = new string[3]{ "pickaxe", "shovel" , "bow" };
	cout << "The default constructor is called" << endl;
}

GameCharacter::GameCharacter(string name, string tool1, string tool2, string tool3) {
	this->name = name;
	tools = new string[3]{ tool1, tool2 , tool3 };
	cout << "The parameterized constructor is called" << endl;
}

GameCharacter::GameCharacter(GameCharacter& g) {

	cout << "The copy constructor is called" << endl;

	this->name = g.name;
	this->tools = new string[3];
	for (int i = 0; i < 3; ++i) {
		this->tools[i] = g.tools[i];
	}
}

GameCharacter& GameCharacter::operator=(GameCharacter& rhs) {

	cout << "The assignment operator is called" << endl;

	if (this != &rhs) {
		this->name = rhs.name;
		this->tools = new string[3];
		for (int i = 0; i < 3; ++i) {
			this->tools[i] = rhs.tools[i];
		}
	}

	return *this;
}

GameCharacter foo1(GameCharacter p) {
	return p; //This function calls the copy constructor because it take GameCharacter class as parameter
}
GameCharacter& foo2(GameCharacter& p) {
	return p; //This function calls the copy constructor because it take GameCharacter class as parameter
}
GameCharacter foo3(GameCharacter& p) {
	return p; //This function calls the copy constructor because it take GameCharacter class as parameter
}
GameCharacter& foo4(GameCharacter p) {
	return p; //This function calls the copy constructor because it take GameCharacter class as parameter
}
GameCharacter& foo5(const GameCharacter& p) {
	GameCharacter gc; //This function calls the default constructor because it creates new GameCharacter class
	return gc;
}

GameCharacter::~GameCharacter() {
	delete[] tools;
}
