#include <controller.h>
#include <mem.h>
#include <video.h>
#include <world.h>

#include <constants.h>
#include <input.h>

#include "LevelOneSet.h"
#include "LevelOneMap.h"

void LevelOne()
{
	//Copy graphics to memory
	copymem((void*)CharSeg1, (void*)LEVELONESET, 512*16);
	copymem((void*)BGMap(0), (void*)LEVELONEMAP, 256*16);
}