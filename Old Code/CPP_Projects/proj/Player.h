#ifndef PLAYERH
#define PLAYERH

class Player
{
	private:
	int pos_x, pos_y, dir/*, map_x, map_y*/, old_x, old_y, FOV_radius;
	Map *map_curr; /*TEMPORARY*/
	SDL_Surface *sprite;
	
	public:
	Player();
	~Player();
	void handleInput(SDL_Event &);
	void display();
	void genFOV(int);
	void dispFOV(float, float);
	void dispObsFOV(float, float);
	
	friend class Map;
	friend class Tile;
};

#endif //PLAYERH
