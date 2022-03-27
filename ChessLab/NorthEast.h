#pragma once
#include "Direction.h"
class NorthEast :
    public Direction
{
public:
    NorthEast(FieldCoordinate currentPosition, FieldCoordinate targetPosition, BoardModel boardModel, Figures figureName) : Direction(currentPosition, targetPosition, boardModel, figureName) {};
    bool IsPossible(int x, int y) override;

};

