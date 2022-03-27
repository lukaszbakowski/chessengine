#pragma once
#include "Figure.h"
#include "Figure.h"
#include "SouthEast.h"
#include "SouthWest.h"
#include "NorthEast.h"
#include "NorthWest.h"
#include "North.h"
#include "East.h"
#include "West.h"
#include "South.h"
#include "ChainBuilder.h"

class Queen : public Figure, private ChainBuilder
{
private:
    void FigureBuilder() override;
public:
    Queen(Figures name, FieldCoordinate currentPosition, FieldCoordinate targetPosistion, BoardModel boardModel) :
        Figure(name, currentPosition, targetPosistion, boardModel) {
        Queen::FigureBuilder();
    }
    bool IsMoveLegal() override;
};

