#pragma once
#include "Direction.h"
class West :
    public Direction
{
public:
    West(FieldCoordinate currentPosition, FieldCoordinate targetPosition, BoardModel boardModel, Figures figureName) : Direction(currentPosition, targetPosition, boardModel, figureName) {};
    bool IsPossible(int x, int y) override;

};

