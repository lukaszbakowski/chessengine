#pragma once
#include "Figure.h"
#include "SouthEast.h"
#include "SouthWest.h"
#include "SouthPawn.h"


class PawnBlack : public Figure
{
private:
    void FigureBuilder() override;
public:
    PawnBlack(Figures name, FieldCoordinate currentPosition, FieldCoordinate targetPosistion, BoardModel boardModel) :
        Figure(name, currentPosition, targetPosistion, boardModel) {
        PawnBlack::FigureBuilder();
    }
    bool IsMoveLegal() override;
};

