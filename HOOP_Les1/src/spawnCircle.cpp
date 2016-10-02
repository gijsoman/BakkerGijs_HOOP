#include "spawnCircle.h"



void spawnCircle::drawAtLocation(int X, int Y, int radius, ofColor circleColor)
{
	//we need to fill x,y,radius,circleColor with random values we like.
	//this can be easily done by a loop.
	//after we have all this random circles in different arrays with values we want to actually draw them
	//we can draw the circles by using a for loop which goes through all the values of the arrays we have.
}

void spawnCircle::pulseCircleWithSpeed(int xSpeed, int ySpeed)
{
	//first we need to slowly change the radius step by step(very smalls steps so it's smooth) up to a certain value
	//if it goes past that value we want to do the same but now backwards
	//if it has reached the minimum value we want to let it pulse back out again. 
	//this loops
}

void spawnCircle::moveInRandomDirection(int radiusChange, int radiusChangeSpeed)
{
	//if we have drawn our circles we need to start moving them.
	//here for we need to fill xspeed and yspeed with random values we like(between -5 and 5 so they move in all directions)
	//if they come to the edge of the screen we have to bounce them back by inverting the x- or yspeed value.
	//this goes from positive to negative or from negative to positive depending on where the ball touches the edge.
	//the balls should keep moving throughout the program. They won't stop until the program is closed.
}


