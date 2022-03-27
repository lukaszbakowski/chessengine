#pragma once
#include "Direction.h"
class NorthPawn :
    public Direction
{
public:
    NorthPawn(FieldCoordinate currentPosition, FieldCoordinate targetPosition, BoardModel boardModel, Figures figureName) : Direction(currentPosition, targetPosition, boardModel, figureName) {};
    bool IsPossible(int x, int y) override;

};

