#pragma once
#include "Figures.h"

class BoardModel {
public:
	Figures board[8][8] = {
				{ BlackTower,BlackHorse,BlackRunner,BlackQueen,BlackKing,BlackRunner,BlackHorse,BlackTower }, //A - black 
				{ BlackPawn,BlackPawn,BlackPawn,BlackPawn,BlackPawn,BlackPawn,BlackPawn,BlackPawn }, //A - black 
				{ EmptyField,EmptyField,EmptyField,EmptyField,EmptyField,EmptyField,EmptyField,EmptyField }, //B - empty 
				{ EmptyField,EmptyField,EmptyField,EmptyField,EmptyField,EmptyField,EmptyField,EmptyField }, //B - empty 
				{ EmptyField,EmptyField,EmptyField,EmptyField,EmptyField,EmptyField,EmptyField,EmptyField }, //B - empty 
				{ EmptyField,EmptyField,EmptyField,EmptyField,EmptyField,EmptyField,EmptyField,EmptyField }, //B - empty 
				{ WhitePawn,WhitePawn,WhitePawn,WhitePawn,WhitePawn,WhitePawn,WhitePawn,WhitePawn }, //C - white 
				{ WhiteTower,WhiteHorse,WhiteRunner,WhiteQueen,WhiteKing,WhiteRunner,WhiteHorse,WhiteTower }  //C - white 
	};
};
