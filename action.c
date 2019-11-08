#include <stdio.h>
#include <string.h>
#include "object.h"

typedef enum { false, true } myBool;

void move(int direction) {
	if (direction == 1 && player->location->toNorth != NULL) {
		player->location = player->location->toNorth;
	}
	else if (direction == 2 && player->location->toEast != NULL) {
		player->location = player->location->toEast;
	}
	else if (direction == 3 && player->location->toSouth != NULL) {
		player->location = player->location->toSouth;
	}
	else if (direction == 4 && player->location->toWest != NULL) {
		player->location = player->location->toWest;
	}
	else if (direction == 5 && player->location->toUp != NULL) {
		player->location = player->location->toUp;
	}
	else if (direction == 6 && player->location->toDown != NULL) {
		player->location = player->location->toDown;
	}
	else {
		printf("You can't go there\n");
	}
}

void take(const char* objectName) {
	//take object if it is near you.

	OBJECT *obj = NULL;
	OBJECT* found = NULL;

	for (obj = objects; obj < endOfObjects; obj++) {
		if (strcmp(obj->name, objectName) == 0) {
			found = obj;
			break;
		}
	}

	if (found != NULL) {
		if (found->location == player->location) {
			found->location = player;
		}
		printf("taken %s.\n", found->name);
	}
}

void drop(const char* objectName) {
	//drop object if it is on you.

	OBJECT* obj = NULL;
	OBJECT* found = NULL;

	for (obj = objects; obj < endOfObjects; obj++) {
		if (strcmp(obj->name, objectName) == 0) {
			found = obj;
			break;
		}
	}

	if (found != NULL) {
		if (found->location == player) {
			found->location = player->location;
		}
		printf("dropped %s.\n", found->name);
	}
}

void listItemsInLocation(const char* objectName, myBool descriptive) {
	//list items in location by name.
	OBJECT* obj;
	OBJECT* locationToList = NULL;
	for (obj = objects; obj < endOfObjects; obj++) {
		if (obj->name == objectName) {
			locationToList = obj;
			break;
		}
	}
	if (locationToList != NULL) {
		for (obj = objects; obj < endOfObjects; obj++) {
			if (obj->location == locationToList) {
				if (strncmp(obj->name, "Yourself", 15) != 0) {
					if (descriptive) {
						printf("%s", obj->description);
					}
					else {
						printf("%s\n", obj->name);
					}
				}
			}
		}
	}
}

void look() {
	printf("%s", player->location->description);
	listItemsInLocation(player->location->name, true);
}
