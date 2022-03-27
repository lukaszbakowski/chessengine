#pragma once
#include "Figure.h"
#include "NorthEast.h"
#include "NorthWest.h"
#include "NorthPawn.h"

class PawnWhite : public Figure
{
private:
    void FigureBuilder() override;
public:
    PawnWhite(Figures name, FieldCoordinate currentPosition, FieldCoordinate targetPosistion, BoardModel boardModel);
    bool IsMoveLegal() override;
};

