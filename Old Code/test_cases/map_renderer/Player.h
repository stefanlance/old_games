#ifndef PLAYERH
#define PLAYERH

class Player
{
	private:
	SDL_Rect box;
	SDL_Surface *sprite;
	int x, y;
	int xVel, yVel;
	
	public:
	Player();
	~Player();
	void handleInput();
	//void move(Tile *tiles[]);
	void show();
	void set_camera();
	SDL_Surface* getSprite();
	
};

#endif
