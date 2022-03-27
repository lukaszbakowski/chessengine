#pragma once
#include "Direction.h"
class SouthEast :
    public Direction
{
public:
    SouthEast(FieldCoordinate currentPosition, FieldCoordinate targetPosition, BoardModel boardModel, Figures figureName) : Direction(currentPosition, targetPosition, boardModel, figureName) {};
    bool IsPossible(int x, int y) override;

};

