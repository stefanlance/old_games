#ifndef TILEH
#define TILEH

class Tile
{
	private:
	SDL_Rect box;
	SDL_Surface *sprite;
	int type, visibility;
	int rand_for_ground;
	Map *my_map;
	gm_Item *item_list;
	
	public:
	Tile(int, int, int, Map*);
	~Tile();
	void applyToMap();
	void loadSprite();
	void loadInitSprite();
	void applyVis();
	void loadObscuredSprite();
	void applyShadow();
	
	friend class Map;
	friend class Player;
	friend class Object;
	
};

#endif //TILEH
