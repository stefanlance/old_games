#ifndef MAIN_H
#define MAIN_H

#include <ctime>
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <ncurses.h>
#include <cmath>
//#include <unistd.h> //for display purposes only

#define wall 35
#define ground 46 //either dots (46) or spaces (32) (spaces would require
//changing null_space
#define door 45
#define null_space 32
#define sy 21
#define sx 79

class Map;
class Player;

struct Tile
{
	int type;
	bool in_room;
};

typedef Tile MapArray[sy][sx];

class Map
{
	private:
	MapArray map;
	
	public:
	Map();
	void initMap();
	void buildMap();
	void printMap();
	void addRand();
	void addRooms();
	void addDoors(int, int);
	void removeDoubleDoors(); //XXX optimize XXX
	void removeDeadEnds();
	bool deadEndsExist();
	void ridNull();
	
	friend class Player;
	
};

class Player
{
	private:
	int pos_x, pos_y, key;
	Map *this_map;
	
	public:
	Player();
	~Player();
	void getAndHandleEvent();
	
	friend class Map;
};

#endif
