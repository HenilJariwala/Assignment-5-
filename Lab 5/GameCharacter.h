#pragma once

#include <iostream>
#include <string>
using namespace std;

class GameCharacter
{
	string name;
	string* tools;

public:

	GameCharacter();

	GameCharacter();

	GameCharacter(GameCharacter& );

	GameCharacter& operator=(GameCharacter&);

	GameCharacter foo1(GameCharacter);

	GameCharacter& foo2(GameCharacter&);

	GameCharacter foo3(GameCharacter&);

	GameCharacter& foo4(GameCharacter);

	GameCharacter& foo5(const GameCharacter&);

	~GameCharacter();
	
};

