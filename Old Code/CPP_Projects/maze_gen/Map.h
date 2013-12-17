#ifndef MAPH
#define MAPH

class Tile;

class Map
{
	private:
	//SDL_Surface *map;
	Tile *tiles[SCREEN_HEIGHT/TILE_HEIGHT][SCREEN_WIDTH/TILE_WIDTH];
	
	public:
	Map();
	~Map();
	void loadMap();
	void displayMap();
	void updateDisp(int, int);
	bool spaceIsEmpty(int, int);
	
	friend class Tile;
	friend class Player;
};

#endif //MAPH
