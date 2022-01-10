#include <stdio.h>

void main()
{
	char symbols[255];

	for (int i = 0; i < 255; i++)
	{
		symbols[i] = i;

		printf("%d: %c\n", i, symbols[i]);
	}
}

/*
	1: Outline Smiley Face
	2: Smiley Face

	3: Heart
	4: Diamond
	5: Club
	6: Spade

	11: Gender Male Sign
	12: Gender Female Sign
	14: Music
	15: Flower
	20, 21, 189, 190: Random Icons
	168: UpsideDown ?
	184: c in circle
	169: r in circle
*/

#pragma region Borders

//Corners
/*
	191, 217: Bottom Right
	8, 192: Bottom Left 
	191: Top Right
	218: Top Left
*/

//Single Line
/*
	179: |
	197: Crossroad
	194: T Junction
	193: Upsidedown T Junction
	180: Right T Junction
	195: Left T Junction
	196: Longer -
*/

//Double Line
/*
	200: Bottom Left
	201: Top Right
	205: Middle Dash
	242: Bottom
	206: Crossroad
	204: Left T Junction
	202: TopHalf T Junction
	203: BottomHalf T Junction
*/

//Other
/*
	221: -- but Vertical
	173: Vertical Dash at bottom and dot above it
*/

//Shaded Cells
/* 
	176 - 178: Different Occapity by small dots (light to full)
	219: Fully Filled
	220: BottomHalf Filled
	223: TopHalf Filled
	22: 1/4 TopHalf Filled
	254: Middle Square
	220: Bottom Square
*/

#pragma endregion

#pragma region Maths
/*
	171: 1/2
	172: 1/4
	243: 3/4
	246: Divide /
	158: Multiply *
	150: Fancy f
	251 - 253: Power of 1 - 3
	248: Degree
*/
#pragma endregion

#pragma region Arrows
/* Arrows
    24: Up
	25: Down
	26: Right
*/

/* >> or <<
	16, 175: Right
	17, 174: Left
	30: Up
	31: Down
*/

/* Both Directions
	18, 23: Up & Down
	29: Left & Right
*/
#pragma endregion

#pragma region Special Letters
/*
	128 - 155, 157 - 169, 181 - 183, 198, 199, 208 - 216, 224 - 237
*/
#pragma endregion
