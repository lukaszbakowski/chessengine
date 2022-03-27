#pragma once
#include "Direction.h"
class SouthPawn :
    public Direction
{
public:
    SouthPawn(FieldCoordinate currentPosition, FieldCoordinate targetPosition, BoardModel boardModel, Figures figureName) : Direction(currentPosition, targetPosition, boardModel, figureName) {};
    bool IsPossible(int x, int y) override;

};

