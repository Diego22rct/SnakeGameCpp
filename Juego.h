#include "Snake.h"

//declaracoin de variables globales

bool gameover=false;

//clase juego
class CGame{
private:
	CSnake* Snake;

public:
	CGame(){
		//Snake.push_back(new CSnake())	
		CSnake* Snake = new CSnake();	
	}

	~CGame(){

	}

	void gameloop(){
		while(!gameover){
			Snake->window();
			Snake->erase();
			Snake->moveSnake();
			Snake->draw();
			_sleep(60);
		}
	}
};