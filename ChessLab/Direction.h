#pragma once
#include "Figures.h"
#include "Coordinates.h"
#include <cstddef>
#include "BoardModel.h"
#include <iostream>

using namespace std;



class Direction
{
protected:
	Figures figureName;
	FieldCoordinate currentPosition;
	FieldCoordinate targetPosition;
	BoardModel boardModel;
	//Direction *next;
	int count = 0;
public:
	Direction(FieldCoordinate currentPosition, FieldCoordinate targetPosition, BoardModel boardModel, Figures figureName);
	//void Add(Direction direction);
	Direction& operator++();
	Direction& operator--();
	Direction* operator++(int);
	Direction* operator--(int);
	virtual bool IsPossible(int x, int y);
	~Direction();

};

