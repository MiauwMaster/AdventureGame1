#include <stdio.h>
#include "object.h"

OBJECT objects[] = {
	//{"name", "description", location, toNorth, toEast, toSouth, toWest, toUp, toDown},
	{"Yourself", "Uhm, it's me I guess...\n", busstop, NULL, NULL, NULL, NULL, NULL, NULL},
	{"Bus stop", "You see a bus stop.\n A small path leads to the north, it looks like it might lead somewhere.\n To the south are high, thick trees you can't navigate at night and sout-west is the main road. It's completely empty as far as you can see\n", NULL, house, NULL, NULL, NULL, NULL, NULL},
	{"House", "You see a house, it looks abandoned. South goes a small path\n", NULL, hallway, NULL, busstop, garden, NULL, NULL},
	{"Hallway", "You are in a hallway.\n", NULL, NULL, livingroom, house, kitchen, NULL, NULL},
	{"Kitchen", "You are in a kitchen.\n", NULL, NULL, hallway, NULL, NULL, NULL, NULL},
	{"Living room", "you are in a living room.\n", NULL, NULL, NULL, NULL, hallway, NULL, NULL},
	{"Garden", "You are in an overgrown garden.\n", NULL, treehouse, house, NULL, shed, NULL, NULL},
	{"Treehouse", "You are in a treehouse.\n", NULL, NULL, NULL, garden, NULL, NULL, NULL},
	{"Shed", "You are in a shed.\n", NULL, NULL, garden, NULL, NULL, NULL, NULL},
	{"scooter", "You see a scooter.\n", shed, NULL, NULL, NULL, NULL, NULL, NULL},
	{"coin", "You see a coin, it seems to be made of gold. Cool!\n", house, NULL, NULL, NULL, NULL, NULL, NULL}
};