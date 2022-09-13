#include <controller.h>
#include <mem.h>
#include <video.h>
#include <world.h>

#include <constants.h>
#include <input.h>

#include "CongratulationsSet.h"
#include "CongratulationsMap.h"

void Congratulations()
{
	//Copy graphics to memory
	copymem((void*)CharSeg1, (void*)CONGRATULATIONSSET, 512*16);
	copymem((void*)BGMap(0), (void*)CONGRATULATIONSMAP, 256*16);
}