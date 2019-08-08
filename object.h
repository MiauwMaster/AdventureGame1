typedef struct object {
	const char* name;
	const char* description;
	struct object* location;
	struct object* toNorth;
	struct object* toEast;
	struct object* toSouth;
	struct object* toWest;
	struct object* toUp;
	struct object* toDown;
} OBJECT;

extern OBJECT objects[];

#define player		(objects + 0)
#define busstop		(objects + 1)
#define house		(objects + 2)
#define hallway		(objects + 3)
#define kitchen		(objects + 4)
#define livingroom	(objects + 5)
#define garden		(objects + 6)
#define treehouse	(objects + 7)
#define shed		(objects + 8)
#define scooter		(objects + 9)
#define coin		(objects + 10)

#define endOfObjects	(objects + 11)