#pragma once
#include "Figure.h"
#include "North.h"
#include "East.h"
#include "West.h"
#include "South.h"
#include "ChainBuilder.h"

class Tower : public Figure, private ChainBuilder
{
private:
    void FigureBuilder() override;
public:
    Tower(Figures name, FieldCoordinate currentPosition, FieldCoordinate targetPosistion, BoardModel boardModel) :
        Figure(name, currentPosition, targetPosistion, boardModel) {
        Tower::FigureBuilder();
    }
    bool IsMoveLegal() override;
};

