#include "../Headers/pawn.h"

char getTop(Tower tower)
{
	int i;
	char top = NULL_PAWN;

	for(i = 0; i < TOWER_HEIGHT; i++)
		if(tower[i] != NULL_PAWN)
			top = tower[i];

	return top;
}

int getTopIndex(Tower tower)
{
	int i;
	int index = -1;

	for(i = 0; i < TOWER_HEIGHT; i++) {
		if(tower[i] != NULL_PAWN)
			index = i;
	}

	return index;
}

void changeTop(Tower tower, char newTop)
{
	int index = getTopIndex(tower);

	tower[index] = newTop;
}

void promote(Tower tower)
{
	char top = getTop(tower);
	
	if(top == SOLDIER1)
		changeTop(tower, OFFICER1);

	if(top == SOLDIER2)
		changeTop(tower, OFFICER2);
}