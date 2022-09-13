#include <controller.h>
#include <mem.h>
#include <video.h>
#include <world.h>

#include <constants.h>
#include <input.h>

#include "InspiredSet.h"
#include "InspiredMap.h"

void Inspired()
{
	//Copy graphics to memory
	copymem((void*)CharSeg1, (void*)INSPIREDSET, 512*16);
	copymem((void*)BGMap(0), (void*)INSPIREDMAP, 256*16);
}