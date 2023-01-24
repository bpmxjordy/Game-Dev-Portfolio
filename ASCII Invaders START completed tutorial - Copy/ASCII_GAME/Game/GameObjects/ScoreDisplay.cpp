#include "ScoreDisplay.h"
#include "../../Core/Renderer/ConsoleColours.h"

CHAR_INFO ScoreDigitSprite[NUM_DIGITS][DIGIT_WIDTH * DIGIT_HEIGHT] =	//This is used to create sprites ranging from 0-9
{
	{
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE },
	},
	{
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE },
	},
	{
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
	},
	{
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE },
	},
	{
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE },
	},
	{
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE },
	},
	{
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE },
	},
	{
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },
	},
	{
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE },
	},
	{
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE } ,{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_WHITE },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },
		{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED } ,{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_BRIGHT_RED },{ ' ' ,BACKGROUND_WHITE },
	},
};

ScoreDisplay::ScoreDisplay()
	:m_bInitialised(false)
{
}

ScoreDisplay::~ScoreDisplay()
{
}

void ScoreDisplay::Initialise(Vector2& position)			//Used to initialise the numbers in their positions
{
	AnimatedSprite::Initialise(&ScoreDigitSprite[0][0], Vector3(DIGIT_WIDTH, DIGIT_HEIGHT, NUM_DIGITS));

	Vector2 startPosition(position.x - (AnimatedSprite::GetSize().x / 2), position.y - (AnimatedSprite::GetSize().y / 2));
	SetPosition(startPosition);

	SetAnimationFrame(0);

	m_bInitialised = true;
}

void ScoreDisplay::Update(float deltaTime)
{
	if (!m_bInitialised)
		return;	
}

void ScoreDisplay::SetDigitValue(int value)					//This is used when the score gets a new value
{
	if (value >= 0 && value < NUM_DIGITS)
	{
		SetAnimationFrame(value);							//Sets the digits to the correct integers
	}
	else
	{
		SetAnimationFrame(0);
	}
}

void ScoreDisplay::Render(ASCIIRenderer* pRenderer)
{
	if (!m_bInitialised)
		return;

	AnimatedSprite::Render(pRenderer);
}
