
//Lab 05 - Tyler, Henil
#include "GameCharacter.h"
using namespace std;

int main() {
	GameCharacter p1;
	GameCharacter p2 = p1;
	p1 = p2;
	foo1(p1); //This function calls the copy constructor
	foo2(p1); //This function calls the copy constructor
	foo3(p1); //This function calls the copy constructor
	foo4(p1); //This function calls the copy constructor
	foo5(p1); //This function creates a new GameCharacter class so it calls the default constructor
	//The copy constructor is called 4 times
}