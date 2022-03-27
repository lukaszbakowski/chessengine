#pragma once
#include "Figure.h"
#include "SouthEast.h"
#include "SouthWest.h"
#include "NorthEast.h"
#include "NorthWest.h"

class Horse : public Figure
{
private:
    void FigureBuilder() override;
public:
    Horse(Figures name, FieldCoordinate currentPosition, FieldCoordinate targetPosistion, BoardModel boardModel) :
        Figure(name, currentPosition, targetPosistion, boardModel) {
        Horse::FigureBuilder();
    }
    bool IsMoveLegal() override;
};

