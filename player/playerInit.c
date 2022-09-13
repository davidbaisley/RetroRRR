#include "player.h"
 
void playerInit(struct Player *Bob)
{	
	Bob->x_current = 32;
	Bob->y_current = 176;
	
	Bob->x_previous = 32;
	Bob->y_previous = 176;
	
	Bob->moving = 0;
	
	Bob->movementx = 0;
	Bob->movementy = 0;
	
	Bob->directionx = 1;
	Bob->directiony = 0;
	
	Bob->jump = 0;
	
	Bob->frame = 0;
	Bob->cyclecount = 0;
	Bob->screen = 0;	
}