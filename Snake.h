#define arriba 72
#define abajo 80
#define izquierda 75
#define derecha 77

class CSnake{

private:
	int x;
	int y;
	int dy;
	int dx;
	int ax;
	int ay;
	int cuerpo;

public:
	CSnake(){
		int x=10;
		int y=10;
		int dy=2;
		int dx=2;
		int ax=1;
		int ay=1;
		int cuerpo=1;
	}
	~CSnake(){}


	//pinta Snake
	void draw() { //pinta el personaje de color verde
		Console::ForegroundColor = ConsoleColor::Green;
		Console::SetCursorPosition(x, y);
		cout << char(254);
	}
	void erase() { //borra el personaje
		Console::SetCursorPosition(x, y);
		cout << " ";
	}
	void moveSnake(){
		if (_kbhit())
		{
			char tecla = _getch();
			switch (tecla)

			{
			case izquierda:
				x = x - dx;
				break;
			case derecha:
				x = x + dx;
				break;
			case arriba:
				y = y - dy;
				break;
			case abajo:
				y = y + dy;
				break;
			}
		}
	}
	void window(){
		if (x + dx < 0 || x + dx + ax>180)
		{
			dx = dx * -1;
		}
		x = x + dx;
	}
};