#ifndef _PLAYER_H_
#define _PLAYER_H_

struct Player {
		
	int x_current;			//Current x position of player
	int y_current;			//Current y position of player
	
	int x_previous;			//Previous x position of player
	int y_previous;			//previous y position of player
	
	int moving;				//Player is moving
	
	int movementx;			//is the player moving x axis
	int movementy;			//is the player moving y axis
	
	int directionx;			//direction of player on x
	int directiony;			//direction of player on y
	
	int jump;				//Is Bob jumping?
	
	int frame;				//variables for Link movement
	int cyclecount;
	int screen;

	
};


#endif