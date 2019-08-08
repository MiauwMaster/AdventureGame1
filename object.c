#include <stdio.h>
#include "object.h"

OBJECT objects[] = {
	//{"name", "description", location, toNorth, toEast, toSouth, toWest, toUp, toDown},
	{"Yourself", "Uhm, it's me I guess...\n", busstop, NULL, NULL, NULL, NULL, NULL, NULL},

	{"Bus stop", "You are at a bus stop.\n\
To the north you see a house, surrounded by a garden. South of you, a road goes from west to east. There is no bus in sight.\n\
The road is completely empty. The time table at the bus stop shows that this bus was the last one of today, and tomorrow no buses will come, because tomorrow is Sunday.\n\
You look at you phone, but have no signal. Night is falling.\n", NULL, house, NULL, NULL, NULL, NULL, NULL},

	{"House", "To the north is the front door of the house. You see a doorbell. There is no light behind the windows of the house.\n\
To the west, you see the garden and a shed.\n\
To the south is a bus stop.\n", NULL, hallway, NULL, busstop, garden, NULL, NULL},

	{"Hallway", "You are in a hallway.\n\
There is a door to the west and a door to the east. To the south is the front door\n", NULL, NULL, livingroom, house, kitchen, NULL, NULL},

	{"Kitchen", "You are in a kitchen.\n\
There is a table and some chairs. There are spider rags and dust, it seems abandoned.\n\
The sink is empty. In a corner you see a pile of household items. To the east is a door.\n", NULL, NULL, hallway, NULL, NULL, NULL, NULL},

	{"Living room", "you are in a living room.\n", NULL, NULL, NULL, NULL, hallway, NULL, NULL},

	{"Garden", "You are in a garden.\n\
To the east is the house. To the west, a shed. There is a treehouse to the north. Behind the shed and the treehouse lies a forest, impenetrable without daylight. \n\
To the south is a road. East of you is a house with no light behind the windows.\n", NULL, treehouse, house, NULL, shed, NULL, NULL},

	{"Treehouse", "You are in a treehouse.\n", NULL, NULL, NULL, garden, NULL, NULL, NULL},

	{"Shed", "You are in a shed.\n", NULL, NULL, garden, NULL, NULL, NULL, NULL},

	{"scooter", "You see a scooter.\n", shed, NULL, NULL, NULL, NULL, NULL, NULL},

	{"coin", "You see a coin, it seems to be made of gold. Cool!\n", house, NULL, NULL, NULL, NULL, NULL, NULL}
};