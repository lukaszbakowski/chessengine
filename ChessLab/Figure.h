#pragma once
#include "Figures.h"
#include "Coordinates.h"
#include "Direction.h"
#include "BoardModel.h"
#include <iostream>
#include <vector>

class Figure
{
protected:
    BoardModel boardModel;
    FieldCoordinate currentPosition;
    FieldCoordinate targetPosistion;
    Figures name;
    vector<Direction*> directions;
    virtual void FigureBuilder();
public:
    Figure(Figures name, FieldCoordinate currentPosition, FieldCoordinate targetPosistion, BoardModel boardModel);
    Figures GetName();
    virtual bool IsMoveLegal();
    ~Figure();
};

