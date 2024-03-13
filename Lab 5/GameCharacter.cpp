#include "GameCharacter.h"

GameCharacter::GameCharacter() {
	name = "Miner";
	tools = new string[3]{ "pickaxe", "shovel" , "bow" };
	cout << "The default constructor is called" << endl;
}

GameCharacter::GameCharacter() {
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
		this->name= rhs.name;
		this->tools = new string[3];
		for (int i = 0; i < 3; ++i) {
			this->tools[i] = rhs.tools[i];
		}
	}

	return *this;
}

GameCharacter GameCharacter::foo1(GameCharacter p) {
	return p;
}

GameCharacter& GameCharacter::foo2(GameCharacter& p) {
	return p;
}

GameCharacter GameCharacter::foo3(GameCharacter& p) {
	return p;
}

GameCharacter& GameCharacter::foo4(GameCharacter p) {
	return p;
}

GameCharacter& GameCharacter::foo5(const GameCharacter& p) {
	GameCharacter gc;
	return gc;
}

GameCharacter::~GameCharacter() {
	delete[] tools;
}
