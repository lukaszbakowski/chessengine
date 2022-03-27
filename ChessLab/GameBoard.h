#pragma once
#include <iostream> 
#include "Figures.h"
#include "Coordinates.h"
#include "BoardModel.h"
#include "Horse.h"
#include "King.h"
#include "PawnBlack.h"
#include "PawnWhite.h"
#include "Queen.h"
#include "Runner.h"
#include "Tower.h"

class GameBoard
{
private:
	BoardModel boardModel;
	void BoardPrint();
	void PrintSwitch(short int fieldToPrint); //boardPrint helper
	bool turn = false; //false for white and true for black
	void TurnChanger();
	FieldCoordinate currentPosition;
	FieldCoordinate targetPosition;
	void SetKey(int& coordinate);
	void CurrentSet();
	void TargetSet();
	bool MoveValidator();
public:
	GameBoard();
	~GameBoard();
	void SetAnyField(FieldCoordinate coordinate, Figures figure);
	short int GetAnyField(FieldCoordinate coordinate);
	void GameStart();
};

