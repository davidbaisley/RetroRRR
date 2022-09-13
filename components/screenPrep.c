#include <controller.h>
#include <mem.h>
#include <video.h>
#include <world.h>

#include <constants.h>
#include <input.h>

#include "screenPrep.h"

void screenPrep()
{
	//Load graphics in memory to screen
	WA[31].head = WRLD_ON|WRLD_BGMAP;
	WA[31].w = 384;
	WA[31].h = 224;
	WA[30].head = WRLD_ON|WRLD_OBJ;
	WA[25].head = WRLD_END;
	
	/*
	WA[28].head = WRLD_ON|WRLD_BGMAP;		//Village/House
	WA[28].w = 384;
	WA[28].h = 224;
	WA[27].head = WRLD_ON|WRLD_OBJ;			//Chicken
	WA[26].head = WRLD_ON|WRLD_OBJ;			//Link
	WA[25].head = WRLD_ON|WRLD_OBJ;			//HUD
	WA[24].head = WRLD_ON|WRLD_BGMAP;		//Inventory BGM
	WA[24].w = 384;
	WA[24].h = 224;
	WA[23].head = WRLD_ON|WRLD_OBJ;		//Inventory
	WA[22].head = WRLD_ON|WRLD_OBJ;		//Heart container
	WA[21].head = WRLD_END;
*/
}