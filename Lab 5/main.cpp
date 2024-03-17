
//Lab 05 - Tyler, Henil
#include "GameCharacter.h"
using namespace std;

int main() {
	GameCharacter p1;
	GameCharacter p2 = p1;
	p1 = p2;

	foo1(p1);
	foo2(p1);
	foo3(p1); 
	foo4(p1); 
	foo5(p1); 
	//The copy constructor is called 4 times when run foo1() foo2() foo3() foo4() and foo5() calls the default constructor
}