#include <iostream>
using namespace std;

#ifndef __GAME__
#include "game.h"
#endif

int main(){
	Game g(1);
	g.showCardsInGame();
	return 0;
}