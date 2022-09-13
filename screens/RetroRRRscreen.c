#include <controller.h>
#include <mem.h>
#include <video.h>
#include <world.h>

#include <constants.h>
#include <input.h>

#include "RetroRRRset.h"
#include "RetroRRRmap.h"

void RetroRRRscreen()
{
	//Copy graphics to memory
	copymem((void*)CharSeg1, (void*)RETRORRRSET, 512*16);
	copymem((void*)BGMap(0), (void*)RETRORRRMAP, 256*16);
}