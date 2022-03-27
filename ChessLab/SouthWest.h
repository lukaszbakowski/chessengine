#pragma once
#include "Direction.h"
class SouthWest :
    public Direction
{
public:
    SouthWest(FieldCoordinate currentPosition, FieldCoordinate targetPosition, BoardModel boardModel, Figures figureName) : Direction(currentPosition, targetPosition, boardModel, figureName) {};
    bool IsPossible(int x, int y) override;

};

