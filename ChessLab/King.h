#pragma once
#include "Figure.h"
#include "SouthEast.h"
#include "SouthWest.h"
#include "NorthEast.h"
#include "NorthWest.h"
#include "North.h"
#include "East.h"
#include "West.h"
#include "South.h"

class King : public Figure
{
private:
    void FigureBuilder() override;
public:
    King(Figures name, FieldCoordinate currentPosition, FieldCoordinate targetPosistion, BoardModel boardModel) :
        Figure(name, currentPosition, targetPosistion, boardModel) {
        King::FigureBuilder();
    }
    bool IsMoveLegal() override;
};

