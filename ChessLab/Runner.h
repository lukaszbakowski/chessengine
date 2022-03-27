#pragma once
#include "Figure.h"
#include "SouthEast.h"
#include "SouthWest.h"
#include "NorthEast.h"
#include "NorthWest.h"
#include "ChainBuilder.h"

class Runner : public Figure, private ChainBuilder
{
private:
    void FigureBuilder() override;
public:
    Runner(Figures name, FieldCoordinate currentPosition, FieldCoordinate targetPosistion, BoardModel boardModel) :
        Figure(name, currentPosition, targetPosistion, boardModel) {
        Runner::FigureBuilder();
    }
    bool IsMoveLegal() override;
};

