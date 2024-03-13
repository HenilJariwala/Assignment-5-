#include "GameCharacter.h"

GameCharacter::GameCharacter() {
	name = "Miner";
	tool = new string[3]{ "pickaxe", "shovel" , "bow" };
	cout << "The default constructor is called" << endl;
}

GameCharacter::GameCharacter() {
	cout << "The parameterized constructor is called" << endl;
}

GameCharacter::GameCharacter(GameCharacter& g) {

	cout << "The copy constructor is called" << endl;

	name = new string;
	strcpy(name, (g.name));

	tool = new string[3];
	// Copy tools from the source object
	for (int i = 0; i < 3; ++i) {
		tool[i] = g.tool[i];
	}
}

GameCharacter& GameCharacter::operator=(GameCharacter& rhs) {

	cout << "The assignment operator is called" << endl;

	if (this != &rhs) {
		strcpy(*name , *(rhs.name));

	}
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
	delete name;
	delete[] tools;
}
