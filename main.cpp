#include <iostream>
#include <conio.h>
#include <string>
#include <vector>

using namespace std;
using namespace System;

#include "Juego.h"


void main(){
	srand(time(NULL));
	Console::SetWindowSize(100, 40);
	Console::CursorVisible = false;
	CGame* game = new CGame();
	game->gameloop();
	_getch();
}