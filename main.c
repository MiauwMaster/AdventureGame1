#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include "action.h"
#include "object.h"

#define MAX_INPUT_SIZE 100

// Directions
int getDirection(const char* direction) {
	if (direction != NULL) {
		if (strcmp(direction, "north") == 0 || strcmp(direction, "n") == 0) { return 1; }
		else if (strcmp(direction, "east") == 0 || strcmp(direction, "e") == 0) { return 2; }
		else if (strcmp(direction, "south") == 0 || strcmp(direction, "s") == 0) { return 3; }
		else if (strcmp(direction, "west") == 0 || strcmp(direction, "w") == 0) { return 4; }
		else if (strcmp(direction, "up") == 0 || strcmp(direction, "u") == 0) { return 5; }
		else if (strcmp(direction, "down") == 0 || strcmp(direction, "d") == 0) { return 6; }
		else { return -1; }
	}
	else { return -1; }
}

// Globals

const char input[MAX_INPUT_SIZE];
// Functions

int getInput() {
	printf("\n > ");
	return fgets(input, MAX_INPUT_SIZE, stdin) != NULL;
}

int parseInput() {
	// Split the input. Limited to one- or two-word comands like 'look' or 'go north'
	const char* verb = strtok(input, " \n");
	const char* noun = strtok(NULL, " \n");

	// Perform action based on input
	if (verb != NULL) {
		// Quit the game
		if (strcmp(verb, "quit") == 0) {
			printf("Weak...\n");
			return 0;
		}
		// Go north, east, south, west, up or down
		else if (strcmp(verb, "go") == 0) {
			if (noun != NULL) {
				switch (getDirection(noun))
				{
				case 1:
					move(1);
					look();
					break;
				case 2:
					move(2);
					look();
					break;
				case 3:
					move(3);
					look();
					break;
				case 4:
					move(4);
					look();
					break;
				case 5:
					move(5);
					look();
					break;
				case 6:
					move(6);
					look();
					break;
				case -1:
					printf("Sorry where?!\n");
					break;
				}
			}
			else {
				printf("Well I'm gonna need a direction...\n");
			}
		}
		// Look
		else if (strcmp(verb, "look") == 0) {
			look();
		}
		// Show <something>
		else if (strcmp(verb, "show") == 0) {
			if (strcmp(noun, "inventory") == 0) {
				listItemsInLocation("Yourself", false);
			}
		}
		// Take <item>
		else if (strcmp(verb, "take") == 0) {
			if (noun != NULL) {
				take(noun);
			}
		}
		// Drop <item>
		else if (strcmp(verb, "drop") == 0) {
			if (noun != NULL) {
				drop(noun);
			}
		}
		else {
			if (noun != NULL) {
				printf("I don't know how to '%s %s'..\n", verb, noun);
			}
			else {
				printf("I don't know how to '%s'..\n", verb);
			}
		}
	}
	else {
		printf("Excuse me?\n");
	}
	return 1;
}

int main(void) {
	printf("Oh damn! You're on the wrong bus!\n\
You have no idea where this one is going and this late at night you are in no mood to find out either!\n\
Better to get off at the first stop and take the next one back I guess!\n\n");
	look();
	while (getInput() && parseInput());
	return 0;
 }

