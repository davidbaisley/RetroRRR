#include <mem.h>
#include <video.h>
#include <world.h>

void sysClean()
{
    u8 i = 0;
    setmem((void*)CharSeg0, 0x0000, 2048);
    setmem((void*)CharSeg1, 0x0000, 2048);
    setmem((void*)CharSeg2, 0x0000, 2048);
    setmem((void*)CharSeg3, 0x0000, 2048);

    for(i=0; i < 14; i++) 
    {
        setmem((void*)BGMap(i), 0x0000, 8192);
    }

    for(i=0; i <=31; i++)
    {
        WA[i].w = 0;
        WA[i].h = 0;
        WA[i].gx = 0;
        WA[i].gp = 0;
        WA[i].gy = 0;
        WA[i].mx = 0;
        WA[i].mp = 0;
        WA[i].my = 0;
        WA[i].param = 0;
        WA[i].head = WRLD_END | 0;
    }
}	