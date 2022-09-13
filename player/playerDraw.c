#include <mem.h>
#include <video.h>
#include <world.h>
#include "player.h"

void playerDraw(struct Player *Bob, int playerMemory, int playerObj)
{
  
	vbSetObject(playerMemory, OBJ_ON, Bob->x_current, 0, Bob->y_current-24, playerObj);
	vbSetObject(playerMemory-1, OBJ_ON, Bob->x_current+8, 0, Bob->y_current-24, playerObj+1);
	vbSetObject(playerMemory-2, OBJ_ON, Bob->x_current+16, 0, Bob->y_current-24, playerObj+2);
	vbSetObject(playerMemory-3, OBJ_ON, Bob->x_current, 0, Bob->y_current-16, playerObj+32);
	vbSetObject(playerMemory-4, OBJ_ON, Bob->x_current+8, 0, Bob->y_current-16, playerObj+33);
	vbSetObject(playerMemory-5, OBJ_ON, Bob->x_current+16, 0, Bob->y_current-16, playerObj+34);
	vbSetObject(playerMemory-6, OBJ_ON, Bob->x_current, 0, Bob->y_current-8, playerObj+64);
	vbSetObject(playerMemory-7, OBJ_ON, Bob->x_current+8, 0, Bob->y_current-8, playerObj+65);
	vbSetObject(playerMemory-8, OBJ_ON, Bob->x_current+16, 0, Bob->y_current-8, playerObj+66);
	vbSetObject(playerMemory-9, OBJ_ON, Bob->x_current, 0, Bob->y_current, playerObj+96);
	vbSetObject(playerMemory-10, OBJ_ON, Bob->x_current+8, 0, Bob->y_current, playerObj+97);
	vbSetObject(playerMemory-11, OBJ_ON, Bob->x_current+16, 0, Bob->y_current, playerObj+98);
	
}	