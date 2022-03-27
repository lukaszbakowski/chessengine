#include "PawnBlack.h"

bool PawnBlack::IsMoveLegal() {
	for (Direction* direction : directions) {
		if (direction->IsPossible(1, 1)) return true;
	}
	return Figure::IsMoveLegal();
}
void PawnBlack::FigureBuilder() {
	directions.push_back(new SouthEast(currentPosition, targetPosistion, boardModel, name));
	directions.push_back(new SouthWest(currentPosition, targetPosistion, boardModel, name));
	directions.push_back(new SouthPawn(currentPosition, targetPosistion, boardModel, name));
	
}