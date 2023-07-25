#include <iostream>
#include <fstream>
#include <conio.h>
#include <time.h>
using namespace std;
int c_size;
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_ESC 27


template<class T>
class Stack
{
private:
	struct Node {
	public:
		Node()
		{ 
		
			next = prev = NULL; 
		}
		Node(int n , int a, int b, Node* prv = NULL, Node* nxt = NULL) {
			x = a;
			y = b;
			name = n;
			prev = prv;
			next = nxt;
		}
		void info()
		{
			cout <<"Room.NO : " << name << " -> x : " << x << "  y : " << y ;
			cout << cpoint;
			cout << endl;
		}
		void setSpecial(const string a)
		{
			cpoint = a;
		}
		
		int x;
		int y;
		int name;
		string cpoint;
		Node* prev, * next;
	};
	Node* head, * tail;
public:
	Stack()
	{
		head = tail = NULL;
	}
	bool TNO()
	{
		if (head->name == 3)
			return true;
	}
	int getName()
	{
		if(head!=NULL)
		return head->name;
		else
		{
			return -1;
		}
	}
	void push(int name, int x, int y)
	{
		if (head != NULL)
		{
			Node* n = new Node(name, x, y, NULL, head);
			head->prev = n;
			head = n;
		}
		else
		{
			head = tail = new Node(name, x, y);
		}
	}
	void pop()
	{
		if (head != NULL)
		{
			if (head == tail)
			{
				delete tail;
				head = tail = NULL;
			}
			else
			{
				head = head->next;
				delete head->prev;
				head->prev = NULL;
			}
		}
	}
	bool isEmpty()
	{
		return (head == tail == NULL);
	}
	int size()
	{
		return c_size;
	}
	void print() const
	{
		Node* temp;
		for (temp = head; temp != NULL; temp = temp->next)
		{
			temp->info();
		}
		cout << endl;
	}
	int getx()
	{
		int n = -1;
		if (head->next != NULL)
		{
			n = head->next->x;
		}
		return n;
	}
	int gety()
	{
		int n = -1;
		if (head->next != NULL)
		{
			n = head->next->y;
		}

		return n;
	}
	int getx2()
	{
		int n = -1;
		if (head != NULL)
		{
			n = head->x;
		}
		return n;
	}
	int gety2()
	{
		int n = -1;
		if (head != NULL)
		{
			n = head->y;
		}

		return n;
	}
	void Special(const string a)
	{
		head->setSpecial(a);
	}
	~Stack()
	{
		cout << endl << endl;
		if (c_size == 0)
		{
			delete head;
		}
		else
		{
			Node* p = head;
			while (!isEmpty())
			{
				p = head->next;
				delete head;
				head = p;
			}
		}
	}
};
void Win()
{
	system("cls");
	cout << " * ****************************************************************************** " << endl;
	cout << "          |                   |                  |                     | " << endl;
	cout << " _________|________________.=--_;=.______________|_____________________|_______ " << endl;
	cout << "|                   |  ,--_,=--     `-=.|                  | " << endl;
	cout << "|___________________|__-=._o`--._        `-=.______________|___________________ " << endl;
	cout << "          |                `-=._o`-=._      _`-=._                     | " << endl;
	cout << " _________|_____________________:=._o -=._.-_.-=-'-=.__________________|_______ " << endl;
	cout << "|                   |    __.--- , ; `-=._o.- ,-----._ -.   | " << endl;
	cout << "|___________________|_.--  ,. .` ` `` ,  `--._--._   -. '__|___________________ " << endl;
	cout << "          |           |o`-=._` , -` `; .-. ,  --._--._; ;              | " << endl;
	cout << " _________|___________| ;`-.o`-=._; .- ` '`.-\` . --._ /_______________|_______ " << endl;
	cout << "|                   | |o;    `--.o`-=._``  '` - ,__.--o;   | " << endl;
	cout << "|___________________|_| ;     (#) `-.o `-=.`_.---_o.-; ;___|___________________ " << endl;
	cout << "____/______/______/___|o;._    -      `-.o|o_.---    ;o;____/______/______/____ " << endl;
	cout << "/______/______/______/_-=._o--._        ; | ;        ; ;/______/______/______/_ " << endl;
	cout << "____/______/______/______/__-=._o--._   ;o|o;     _._;o;____/______/______/____ " << endl;
	cout << "/______/______/______/______/____-=._o._; | ;_.---o.---_/______/______/______/_ " << endl;
	cout << "____/______/______/______/______/_____-=.o|o_.----___/______/______/______/____ " << endl;
	cout << "/______/______/______/______/______/______/______/______/______/______/         " << endl;
	cout << "******************************************************************************* " << endl;

	system("pause");
	system("cls");

	cout << "  __      __  ______    __    __        __       __   ______    __    __ " << endl;
	cout << "/  \    /  | /      \  /  |  /  |      /  |  _  /  |  /      | /  \  /  | " << endl;
	cout << "$$  \  /$$/ /$$$$$$  | $$ |  $$ |      $$ | / \ $$ |  $$$$$$/   $$  \ $$ | " << endl;
	cout << " $$  \/$$/  $$ |  $$ | $$ |  $$ |      $$ |/$  \$$ |    $$ |   $$$  \$$ | " << endl;
	cout << "  $$  $$/   $$ |  $$ | $$ |  $$ |      $$ /$$$  $$ |   $$ |   $$$$  $$ | " << endl;
	cout << "   $$$$/    $$ |  $$ | $$ |  $$ |      $$ $$/$$ $$ |   $$ |   $$ $$ $$ | " << endl;
	cout << "    $$ |    $$ \__$$ | $$ \__$$ |        $$$$/  $$$$ |  _$$ |_  $$ |$$$$ | " << endl;
	cout << "    $$ |    $$    $$/  $$    $$/       $$$/    $$$ | / $$   | $$ | $$$ | " << endl;
	cout << "    $$/      $$$$$$/    $$$$$$/        $$/      $$/  $$$$$$/  $$/   $$/  " << endl;

}
void GameOver()
{

	system("cls");
	cout << "      ,o888888o.          .8.                   ,8.       ,8.          8 8888888888    " << endl;
	cout << "     8888     `88.       .888.                 ,888.     ,888.         8 8888          " << endl;
	cout << "  ,8 8888       `8.     :88888.               .`8888.   .`8888.        8 8888          " << endl;
	cout << "  88 8888              . `88888.             ,8.`8888. ,8.`8888.       8 8888          " << endl;
	cout << " 88 8888             .8. `88888.           ,8'8.`8888,8^8.`8888.      8 888888888888   " << endl;
	cout << " 88 8888            .8`8. `88888.         ,8' `8.`8888' `8.`8888.     8 8888           " << endl;
	cout << " 88 8888   8888888 .8' `8. `88888.       ,8'   `8.`88'   `8.`8888.    8 8888           " << endl;
	cout << " `8 8888       .8'.8'   `8. `88888.     ,8'     `8.`'     `8.`8888.   8 8888           " << endl;
	cout << "     8888     ,88'.888888888. `88888.   ,8'       `8        `8.`8888.  8 8888          " << endl;
	cout << "      `8888888P' .8'       `8. `88888. ,8'         `         `8.`8888. 8 888888888888  " << endl;
	cout << "                                                                                       " << endl;
	cout << "     ,o888888o.  `8.`888b           ,8' 8 8888888888   8 888888888o.                   " << endl;
	cout << "  . 8888     `88. `8.`888b         ,8'  8 8888         8 8888    `88.                  " << endl;
	cout << " ,8 8888       `8b `8.`888b       ,8'   8 8888         8 8888     `88                  " << endl;
	cout << " 88 8888        `8b `8.`888b     ,8'    8 8888         8 8888     ,88                  " << endl;
	cout << " 88 8888         88  `8.`888b   ,8'     8 888888888888 8 8888.   ,88'                  " << endl;
	cout << " 88 8888         88   `8.`888b ,8'      8 8888         8 888888888P'                   " << endl;
	cout << " 88 8888        ,8P    `8.`888b8'       8 8888         8 8888`8b                       " << endl;
	cout << " `8 8888       ,8P      `8.`888'        8 8888         8 8888 `8b.                     " << endl;
	cout << "  ` 8888     ,88'        `8.`8'         8 8888         8 8888   `8b.                   " << endl;
	cout << "     `8888888P'           `8.`          8 888888888888 8 8888     `88.                 " << endl;

}
void loadRandomRoom(int& no)
{
	srand(time(0));
	no = rand()%4;

}
bool Toss()
{
	srand(time(0));
	return rand()%2;
}
void loadHouse(string Rname, int&x,int&y,char**& map,int& rows,int& cols)
{
	ifstream ios;
	ios.open(Rname);
	if (ios.is_open())
	{
		ios >> rows;
		ios >> cols;
		map = new char*[rows];
		ios >> x;
		ios >> y;
		for (int i = 0; i < rows; i++)
		{
			map[i] = new char[cols];
			for (int j = 0; j < cols; j++)
			{
				ios >> map[i][j];
			}
		}
		ios.close();
	}
	else
	{
		cout << "\nFile couldnt be opened !!!\n";
	}
}
void loadhauntedhouse(int& n,string*& chrname)
{
	ifstream ios;
	ios.open("hauntedhouse.txt");
	if (ios.is_open())
	{
		ios >> n;
		chrname = new string[n];
		int i;
		for (i = 0; i < n; i++)
		{
			ios >> chrname[i];
		}
		ios.close();
	}
	else
	{
		cout << "\nFile couldnt be opened !!!\n";
	}

}
void loadRandomCell(char** map, const int rows, const int cols, int& x, int& y,bool& portal)
{
	while (portal == true)
	{
		x = rand() % rows;
		y = rand() % cols;
		if (map[x][y] != 'X' && map[x][y] != 'P' && map[x][y] != 'G' && map[x][y] != 'T' && map[x][y] != 'D')
		{
			portal = false;
			break;
		}
	}
}
void Print(int r, int c,char** map,int rows, int cols) 
{
system("cls");
char X = 'X', S = ' ';
for (int i = 0; i < rows; i++) {
	for (int j = 0; j < cols; j++)
		if (i == r && j == c) 
			cout << "*";
		else {
			if (map[i][j] == 'X')
				cout << '#';
			if (map[i][j] == 'S')
				cout << ' ';
			if (map[i][j] == 'P')
				cout << 'P';
			if (map[i][j] == 'G')
				cout << 'G';
			if (map[i][j] == 'D')
				cout << 'D';
			if (map[i][j] == 'T')
				cout << 'T';

		}
	cout << endl;
	}
}
void iterativeGame(Stack<int>& coordinates, Stack<int>& portals)
{
	char** map = NULL;
	int numberOfhouses = 0;
	string* arrayOfHouseNames;
	loadhauntedhouse(numberOfhouses, arrayOfHouseNames);
	int currentHNO = 0;
	loadRandomRoom(currentHNO);
	int x = 0, y = 0;
	int rows, cols;
	coordinates.push(currentHNO, x, y);
	loadHouse(arrayOfHouseNames[currentHNO], x, y, map, rows, cols);
	Print(x, y, map, rows, cols);
	bool endflag = false;
	bool winflag = false;
	bool portal = false;
	bool isPrev = false;
	int c = 0;
	while (!endflag)
	{
		c = 0;
		
		switch ((c = _getch()))
		{
			
		case KEY_ESC:
			endflag = true;
			break;
				
		case KEY_UP:
			if (x > 1)
				x = x - 1;
			if (map[x][y] == 'X')
			{
				x = x + 1;
				break;
			}

			if (coordinates.getx() == x && coordinates.gety() == y)
				coordinates.pop();
			else
				coordinates.push(currentHNO, x, y);

			if (map[x][y] == 'P')
			{
				portal = true;
				cout << "\n\n\t\t\tTossing...";
				system("pause");
				if (Toss()) {
					isPrev = false;
					system("cls");
					cout << "\n\n\t\t\tIts a head...\n";
					cout << "\t\t\tYOu will be teleported to a random room";
					system("pause");
					portals.push(currentHNO, x, y);
					portal = true;
					loadRandomRoom(currentHNO);
					loadHouse(arrayOfHouseNames[currentHNO], x, y, map, rows, cols);
				}
				else
				{

					system("cls");
					cout << "\n\n\t\t\tIts a tail...\n";
					if (portals.getName() >= 0)
					{
						cout << "\t\t\tYOu will be teleported to previous room";
						currentHNO = portals.getName();
						if (portals.getx2() != -1) {
							isPrev = true;
							x = portals.getx2();
						}
						if (portals.gety2() != -1) {
							isPrev = true;
							y = portals.gety2();
						}
						portals.pop();
						system("pause");
						system("cls");
						loadHouse(arrayOfHouseNames[currentHNO], x, y, map, rows, cols);
					}
					else
					{
						cout << "\nYou were in the First Room hence you were kicked out !!!";
						system("pause");
						endflag = true;

					}
				}
			}
			if (map[x][y] == 'G')
			{
				portals.push(currentHNO, x, y);
				loadHouse(arrayOfHouseNames[3], x, y, map, rows, cols);

			}
			if (map[x][y] == 'D')
			{

				endflag = true;

			}
			if (map[x][y] == 'T')
			{
				winflag = true;
				endflag = true;

			}
			if (portal && !isPrev)
			{
				loadRandomCell(map, rows, cols, x, y, portal);
			}
			Print(x, y, map, rows, cols);
			break;

		case KEY_DOWN:

			if (x < rows - 1)
				x = x + 1;

			if (map[x][y] == 'X')
			{
				x = x - 1;
				break;
			}

			if (coordinates.getx() == x && coordinates.gety() == y)
				coordinates.pop();
			else
				coordinates.push(currentHNO, x, y);

			if (map[x][y] == 'P')
			{
				cout << "\t\t\t" << currentHNO;
				portal = true;
				cout << "\n\n\t\t\tTossing...";
				system("pause");
				if (Toss()) {
					isPrev = false;
					system("cls");
					cout << "\n\n\t\t\tIts a head...\n";
					cout << "\t\t\tYOu will be teleported to a random room";
					system("pause");
					portals.push(currentHNO, x, y);
					portal = true;
					loadRandomRoom(currentHNO);
					loadHouse(arrayOfHouseNames[currentHNO], x, y, map, rows, cols);
				}
				else
				{

					system("cls");
					cout << "\n\n\t\t\tIts a tail...\n";
					if (portals.getName() >= 0)
					{
						cout << "\t\t\tYOu will be teleported to previous room";
						currentHNO = portals.getName();
						if (portals.getx2() != -1) {
							isPrev = true;
							x = portals.getx2();
						}
						if (portals.gety() != -1) {
							isPrev = true;
							y = portals.gety2();
						}
						portals.pop();
						system("pause");
						system("cls");
						loadHouse(arrayOfHouseNames[currentHNO], x, y, map, rows, cols);
					}
					else
					{
						cout << "\nYou were in the First Room hence you were kicked out !!!";
						system("pause");
						endflag = true;

					}
				}
			}
			if (map[x][y] == 'G')
			{
				portals.push(currentHNO, x, y);
				loadHouse(arrayOfHouseNames[3], x, y, map, rows, cols);

			}
			if (map[x][y] == 'D')
			{

				endflag = true;

			}
			if (map[x][y] == 'T')
			{
				winflag = true;
				endflag = true;
			}
			if (portal && !isPrev)
			{
				loadRandomCell(map, rows, cols, x, y, portal);
			}
			Print(x, y, map, rows, cols);
			break;

		case KEY_LEFT:
			if (y > 1)
				y = y - 1;

			if (map[x][y] == 'X')
			{
				y = y + 1;
				break;
			}

			if (coordinates.getx() == x && coordinates.gety() == y)
				coordinates.pop();
			else
				coordinates.push(currentHNO, x, y);

			if (map[x][y] == 'P')
			{
				isPrev = false;
				portal = true;
				cout << "\n\n\t\t\tTossing...";
				system("pause");
				if (Toss()) {
					system("cls");
					cout << "\n\n\t\t\tIts a head...\n";
					cout << "\t\t\tYOu will be teleported to a random room";
					system("pause");
					portals.push(currentHNO, x, y);
					portal = true;
					loadRandomRoom(currentHNO);
					loadHouse(arrayOfHouseNames[currentHNO], x, y, map, rows, cols);
				}
				else
				{

					system("cls");
					cout << "\n\n\t\t\tIts a tail...\n";
					if (portals.getName() >= 0)
					{
						cout << "\t\t\tYOu will be teleported to previous room";
						currentHNO = portals.getName();
						if (portals.getx2() != -1) {
							isPrev = true;
							x = portals.getx2();
						}
						if (portals.gety2() != -1) {
							isPrev = true;
							y = portals.gety2();
						}
						portals.pop();
						system("pause");
						system("cls");
						loadHouse(arrayOfHouseNames[currentHNO], x, y, map, rows, cols);
					}
					else
					{
						cout << "\nYou were in the First Room hence you were kicked out !!!";
						system("pause");
						endflag = true;

					}
				}
			}
			if (map[x][y] == 'G')
			{
				portals.push(currentHNO, x, y);
				loadHouse(arrayOfHouseNames[3], x, y, map, rows, cols);

			}
			if (map[x][y] == 'D')
			{

				endflag = true;

			}
			if (map[x][y] == 'T')
			{
				winflag = true;
				endflag = true;
			}
			if (portal && !isPrev)
			{
				loadRandomCell(map, rows, cols, x, y, portal);
			}
			Print(x, y, map, rows, cols);

			break;

		case KEY_RIGHT:
			if (y < cols - 1)
				y = y + 1;

			if (map[x][y] == 'X')
			{
				y = y - 1;
				break;
			}

			if (coordinates.getx() == x && coordinates.gety() == y)
				coordinates.pop();
			else
				coordinates.push(currentHNO, x, y);

			if (map[x][y] == 'P')
			{
				cout << "\t\t\t" << currentHNO;
				isPrev = false;
				portal = true;
				cout << "\n\n\t\t\tTossing...";
				system("pause");
				if (Toss()) {
					system("cls");
					cout << "\n\n\t\t\tIts a head...\n";
					cout << "\t\t\tYOu will be teleported to a random room";
					system("pause");
					portals.push(currentHNO, x, y);
					portal = true;
					loadRandomRoom(currentHNO);
					loadHouse(arrayOfHouseNames[currentHNO], x, y, map, rows, cols);
				}
				else
				{

					system("cls");
					cout << "\n\n\t\t\tIts a tail...\n";
					if (portals.getName() >= 0)
					{
						cout << "\t\t\tYOu will be teleported to previous room";
						currentHNO = portals.getName();
						if (portals.getx2() != -1) {
							isPrev = true;
							x = portals.getx2();
						}
						if (portals.gety2() != -1) {
							isPrev = true;
							y = portals.gety();
						}
						portals.pop();
						system("pause");
						system("cls");
						loadHouse(arrayOfHouseNames[currentHNO], x, y, map, rows, cols);
					}
					else
					{
						cout << "\nYou were in the First Room hence you were kicked out !!!";
						system("pause");
						endflag = true;

					}
				}
			}
			if (map[x][y] == 'G')
			{
				portals.push(currentHNO, x , y);
				loadHouse(arrayOfHouseNames[3], x, y, map, rows, cols);

			}
			if (map[x][y] == 'D')
			{

				endflag = true;

			}
			if (map[x][y] == 'T')
			{
				winflag = true;
				endflag = true;

			}
			if (portal && !isPrev)
			{
				loadRandomCell(map, rows, cols, x, y, portal);
			}
			Print(x, y, map, rows, cols);

			break;

		default:
			break;
		}
	}

	if (winflag)
	{
		endflag = false;
		Win();
		system("pause");
		system("cls");
		cout << "Path" << endl << endl;
		coordinates.print();
		system("pause");
		system("cls");
	}
	if (endflag)
	{
		system("cls");
		GameOver();
		system("pause");
		system("cls");
		cout << "Path" <<endl << endl;
		coordinates.print();
		system("pause");
		system("cls");
	}
}
void recurssiveGame(Stack<int>& coordinates, Stack<int>& portals, char**& map, int& numberOfhouses, string*& arrayOfHouseNames, int& currentHNO, int& x, int& y, int& rows, int& cols, bool& endflag, bool& winflag, bool& portal, bool& isPrev, int& c, int& flag)
{
	if (flag == 1)
	{
		Print(x, y, map, rows, cols);

		if (map[x][y] == 'P')
		{
			portal = true;
			cout << "\n\n\t\t\tTossing...";
			system("pause");
			if (Toss()) {
				isPrev = false;
				system("cls");
				cout << "\n\n\t\t\tIts a head...\n";
				cout << "\t\t\tYOu will be teleported to a random room";
				system("pause");
				portals.push(currentHNO, (x + 1), y);
				portal = true;
				loadRandomRoom(currentHNO);
				loadHouse(arrayOfHouseNames[currentHNO], x, y, map, rows, cols);
			}
			else
			{

				system("cls");
				cout << "\n\n\t\t\tIts a tail...\n";
				if (portals.getName() >= 0)
				{
					cout << "\t\t\tYOu will be teleported to previous room";
					currentHNO = portals.getName();
					if (portals.getx() != -1) {
						isPrev = true;
						x = portals.getx();
					}
					if (portals.gety() != -1) {
						isPrev = true;
						y = portals.gety();
					}
					portals.pop();
					system("pause");
					system("cls");
					loadHouse(arrayOfHouseNames[currentHNO], x, y, map, rows, cols);
				}

				else
				{
					cout << "\nYou were in the First Room hence you were kicked out !!!";
					system("pause");
					endflag = true;
					flag = 0;

				}
			}

			recurssiveGame(coordinates, portals, map, numberOfhouses, arrayOfHouseNames, currentHNO, x, y, rows, cols, endflag, winflag, portal, isPrev, c, flag);
		}

		if (map[x][y] == 'G')
		{
			portals.push(currentHNO, x, y);
			loadHouse(arrayOfHouseNames[3], x, y, map, rows, cols);
			recurssiveGame(coordinates, portals, map, numberOfhouses, arrayOfHouseNames, currentHNO, x, y, rows, cols, endflag, winflag, portal, isPrev, c, flag);
		}
		if (map[x][y] == 'D')
		{

			endflag = true;
			flag = 0;

		}
		if (map[x][y] == 'T')
		{
			winflag = true;
			endflag = true;
			flag = 0;

		}
		if (portal && !isPrev)
		{
			loadRandomCell(map, rows, cols, x, y, portal);
			recurssiveGame(coordinates, portals, map, numberOfhouses, arrayOfHouseNames, currentHNO, x, y, rows, cols, endflag, winflag, portal, isPrev, c, flag);
		}

		if (flag != 0)
		{
			switch ((c = _getch()))
			{
			case KEY_UP:
				if (x > 1)
					x = x - 1;

				if (map[x][y] != 'X')
				{
					if (coordinates.getx() == x && coordinates.gety() == y)
						coordinates.pop();
					else
						coordinates.push(currentHNO, x, y);
				}
				else
				{
					x = x + 1;
				}
				break;


			case KEY_DOWN:

				if (x < rows - 1)
					x = x + 1;

				if (map[x][y] != 'X')
				{
					if (coordinates.getx() == x && coordinates.gety() == y)
						coordinates.pop();
					else
						coordinates.push(currentHNO, x, y);
				}
				else
				{
					x = x - 1;
				}
				break;

			case KEY_LEFT:
				if (y > 1)
					y = y - 1;

				if (map[x][y] != 'X')
				{
					if (coordinates.getx() == x && coordinates.gety() == y)
						coordinates.pop();
					else
						coordinates.push(currentHNO, x, y);
				}
				else
				{
					y = y + 1;
				}
				break;

			case KEY_RIGHT:
				if (y < cols - 1)
					y = y + 1;

				if (map[x][y] != 'X')
				{
					if (coordinates.getx() == x && coordinates.gety() == y)
						coordinates.pop();
					else
						coordinates.push(currentHNO, x, y);
				}
				else
				{
					y = y - 1;
				}
				break;

			default:
				break;
			}

			if (flag == 1)
			{
				recurssiveGame(coordinates, portals, map, numberOfhouses, arrayOfHouseNames, currentHNO, x, y, rows, cols, endflag, winflag, portal, isPrev, c, flag);
			}
		}
	}
}

int main(){
	int input = 1;
	Stack<int>portals;
	Stack<int>coordinates;

	while (input != 0)
	{
		cout << "Input 1 for iterative Game " << endl;
		cout << "Input 2 for recurssive Game " << endl;
		cout << "Input 0 to exit " << endl;
		cin >> input;

		if(input == 1)
			iterativeGame(coordinates, portals);

		if (input == 2)
		{
			char** map = NULL;
			int numberOfhouses = 0;
			string* arrayOfHouseNames;
			loadhauntedhouse(numberOfhouses, arrayOfHouseNames);
			int currentHNO = 0;
			loadRandomRoom(currentHNO);
			int x = 0, y = 0;
			int rows, cols;
			coordinates.push(currentHNO, x, y);
			loadHouse(arrayOfHouseNames[currentHNO], x, y, map, rows, cols);
			Print(x, y, map, rows, cols);
			bool endflag = false;
			bool winflag = false;
			bool portal = false;
			bool isPrev = false;
			int c = 0;
			int flag = 1;
			recurssiveGame(coordinates, portals, map, numberOfhouses, arrayOfHouseNames, currentHNO, x, y, rows, cols, endflag, winflag, portal, isPrev, c,flag);
			if (winflag)
			{
				endflag = false;
				Win();
				system("pause");
				system("cls");
				cout << "Path" << endl << endl;
				coordinates.print();
				system("pause");
				system("cls");
			}
			if (endflag)
			{
				system("cls");
				GameOver();
				system("pause");
				system("cls");
				cout << "Path" << endl << endl;
				coordinates.print();
				system("pause");
				system("cls");
			}
		}
	}

system("Pause");
return 0;
}