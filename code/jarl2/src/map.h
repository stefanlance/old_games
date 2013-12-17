#ifndef MAP_H
#define MAP_H

class Map
{
private:
	svector < svector <Tile *> > map;

public:
	Map();
	~Map();
	void init();
	void build();
	// creates the maze
	void addMaze();
	void addRooms();
	// fills in bits of the maze at random
	void addRand();
	void addDoors();
	void removeDoubleDoors();
	void removeDeadEnds();
	bool deadEndsExist();
	void addExit();

	Tile *	getTile(int, int);
	int 	getHeight();
	int 	getWidth();
};

#endif // MAP_H
