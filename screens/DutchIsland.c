#include <controller.h>
#include <mem.h>
#include <video.h>
#include <world.h>

#include <constants.h>
#include <input.h>

#include "DutchIslandSet.h"
#include "DutchIslandMap.h"

void DutchIsland()
{
	//Copy graphics to memory
	copymem((void*)CharSeg1, (void*)DUTCHISLANDSET, 512*16);
	copymem((void*)BGMap(0), (void*)DUTCHISLANDMAP, 256*16);
}