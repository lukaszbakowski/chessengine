#pragma once
#include "Direction.h"
class NorthWest :
    public Direction
{
public:
    NorthWest(FieldCoordinate currentPosition, FieldCoordinate targetPosition, BoardModel boardModel, Figures figureName) : Direction(currentPosition, targetPosition, boardModel, figureName) {};
    bool IsPossible(int x, int y) override;

};

