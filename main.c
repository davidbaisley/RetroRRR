#include <libgccvb.h>
#include <constants.h>
#include <languages.h>
#include "Inspired.h"
#include "DutchIsland.h"
#include "RetroRRRscreen.h"
#include "LevelOne.h"
#include "Bob.h"
#include "Congratulations.h"
#include "timer.h"
#include "player.h"
#include "playerInit.h"
#include "playerDraw.h"

/**RetroRRR Virtual Boy version of RetroRGB **/

int main()
{
	struct Player Bob;
	playerInit(&Bob);
	
//	int Player_X = 32;
//	int Player_Y = 176;
	int playerMemory = 1006;
	int playerObj = 0;
	
	HWORD pad;				//Scan pad input
	HWORD pressDown;		//Scan pad for buttons pushed down
	HWORD pressUp;			//Scan pad for buttons pushed up
	
	pad = vbReadPad();
	pressDown = vbPadKeyDown();
	pressUp = vbPadKeyUp();
	
	//Initial setup
	vbSetColTable();
    vbDisplayOn();
	clearScreen();
	
	WA[31].head = WRLD_ON|WRLD_BGMAP;
    WA[31].w = 384;
    WA[31].h = 224;
	WA[30].head = WRLD_ON|WRLD_OBJ;
	WA[25].head = WRLD_END;
	
	//Setup object registers
    VIP_REGS[SPT3]=1023;
    VIP_REGS[SPT2]=512;
	VIP_REGS[SPT1]=256;
	VIP_REGS[SPT0]=128;
	
	VIP_REGS[JPLT0]=198;   //switches link pallette
	
	vbDisplayShow();

	clearScreen();
	Inspired();
	vbFXFadeIn(3);
	vbFXFadeOut(3);
	DutchIsland();
	vbFXFadeIn(3);
	vbFXFadeOut(3);
	RetroRRRscreen();
	vbFXFadeIn(3);
	
	while(1) {
	//Store the pad so we don't have to read it multiple times
	pressDown = vbPadKeyDown();

	//Read each axis and update the character
	if (pressDown&K_STA) {
		vbFXFadeOut(0);
		break;
		}
	}

	
	
	while(1) {
		//Store the pad so we don't have to read it multiple times
		pad = vbReadPad();
		pressDown = vbPadKeyDown();
		pressUp = vbPadKeyUp();
		
		LevelOne();
	
		copymem((void*)CharSeg0, (void*)BOB, 512*16);
		
		
		if (Bob.jump == 1){
			
			if (Bob.frame == 1){
				//Bob.x_current = Bob.x_current + 4;
				Bob.y_current = Bob.y_current - 8;
				Bob.frame = Bob.frame + 1;
			}
			
			else if (Bob.frame == 2){
				//Bob.x_current = Bob.x_current + 4;
				Bob.y_current = Bob.y_current - 8;
				Bob.frame = Bob.frame + 1;
			}
			
			else if (Bob.frame == 3){
				//Bob.x_current = Bob.x_current + 4;
				Bob.y_current = Bob.y_current - 8;
				Bob.frame = Bob.frame + 1;
			}

			else if (Bob.frame == 4){
				//Bob.x_current = Bob.x_current + ;4
				Bob.y_current = Bob.y_current - 8 ;	
				Bob.frame = Bob.frame + 1;
			}
			
			else if (Bob.frame == 5){
				//Bob.x_current = Bob.x_current + 4;
				Bob.y_current = Bob.y_current - 8;
				Bob.frame = Bob.frame + 1;
			}
			
			else if (Bob.frame == 6){
				//Bob.x_current = Bob.x_current + 4;
				Bob.y_current = Bob.y_current + 8;
				Bob.frame = Bob.frame + 1;
			}
			
			else if (Bob.frame == 7){
				//Bob.x_current = Bob.x_current + 4;
				Bob.y_current = Bob.y_current + 8;
				Bob.frame = Bob.frame + 1;
			}
			
			else if (Bob.frame == 8){
				//Bob.x_current = Bob.x_current + 4;
				Bob.y_current = Bob.y_current + 8;
				Bob.frame = Bob.frame + 1;
			}
			
			else if (Bob.frame == 9){
				//Bob.x_current = Bob.x_current + 4;
				Bob.y_current = Bob.y_current + 8;
				Bob.frame = Bob.frame + 1;
			}
			
			else if (Bob.frame == 10){
				//Bob.x_current = Bob.x_current + 4;
				Bob.y_current = Bob.y_current + 8;
				Bob.frame = Bob.frame + 1;
				Bob.frame = 0;
				Bob.jump = 0;
			}
		vbWaitFrame(0);
		playerDraw(&Bob, playerMemory, playerObj);
		//vbDisplayShow();
		}
		
		
		if (pressDown&K_A && Bob.jump == 0){
			Bob.jump = 1;	
			Bob.frame = 1;
		}
		
		else if (pad&K_LR){
			Bob.x_current = Bob.x_current + 1;
		}

		else if (pad&K_LL){
			Bob.x_current = Bob.x_current - 1;
		}
		

		//dclearScreen();
	

		playerDraw(&Bob, playerMemory, playerObj);
		vbDisplayShow();

		//Read each axis and update the character
		if (pressDown&K_STA) {
			break;
		}
	}

	clearScreen();
	Congratulations();
	
    //Setup worlds
    //(This uses structs to access world data, the old method using functions is commented out)
    WA[31].head = (WRLD_LON|WRLD_OVR);
    WA[31].w = 384;
    WA[31].h = 224;
    //vbSetWorld(31, (WRLD_LON|WRLD_OVR), 0, 0, 0, 0, 0, 0, 384, 224);

    WA[30].head = (WRLD_RON|WRLD_OVR);
    WA[30].my = 224;
    WA[30].w = 384;
    WA[30].h = 224;
    //vbSetWorld(30, (WRLD_RON|WRLD_OVR), 0, 0, 0, 0, 0, 224, 384, 224);

	WA[29].head = (WRLD_RON|WRLD_OBJ);
	
	WA[29].head = (WRLD_RON|WRLD_OBJ);
	
    WA[28].head = WRLD_END;
    //vbSetWorld(29, WRLD_END, 0, 0, 0, 0, 0, 0, 0, 0);

    //Set brightness registers
    vbDisplayShow();

    //Main loop (Empty because we're done but don't want to reach the end)
    for (;;);

    return 0;
}
