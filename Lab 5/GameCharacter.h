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
	GameCharacter(string name, string tool1, string tool2, string tool3);
	GameCharacter(GameCharacter& rhs);
	GameCharacter& operator=(GameCharacter&);

	friend GameCharacter foo1(GameCharacter p);
	friend GameCharacter& foo2(GameCharacter& p);
	friend GameCharacter foo3(GameCharacter& p);
	friend GameCharacter& foo4(GameCharacter p);
	friend GameCharacter& foo5(const GameCharacter& p);

	~GameCharacter();
};

