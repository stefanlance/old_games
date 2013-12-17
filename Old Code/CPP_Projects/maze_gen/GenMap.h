#ifndef GENMAPH
#define GENMAPH

#define wall 35
#define ground 32
#define door 45
#define sy 33
#define sx 33

class GenMap;
struct gm_Cell;
struct gm_Item;

struct gm_Cell
{
	int type;
	bool in_room;
	gm_Item *item_list;
};

struct gm_Item
{
	gm_Item *next;
	int i_type;
};

typedef gm_Cell MapArray[sy][sx];

class GenMap
{
	private:
	MapArray map;
	
	public:
	GenMap();
	~GenMap();
	void initMap();
	void buildMap();
	void printMap();
	void addRand();
	void addRooms();
	void addDoors(int, int);
	void removeDoubleDoors(); //XXX optimize XXX
	void removeDeadEnds();
	bool deadEndsExist();
	bool toFile();
	void addItems();
	
};

#endif //GENMAPH
