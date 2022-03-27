#include "PawnWhite.h"

PawnWhite::PawnWhite(Figures name, FieldCoordinate currentPosition, FieldCoordinate targetPosistion, BoardModel boardModel) : 
	Figure(name, currentPosition, targetPosistion, boardModel) {
	PawnWhite::FigureBuilder();
}

bool PawnWhite::IsMoveLegal() {
	for (Direction* direction : directions) {
		cout << "halo" << endl;
		if (direction->IsPossible(1, 1)) return true;
	}
	return Figure::IsMoveLegal();
}
void PawnWhite::FigureBuilder() {
	directions.push_back(new NorthEast(currentPosition, targetPosistion, boardModel, name));
	directions.push_back(new NorthWest(currentPosition, targetPosistion, boardModel, name));
	directions.push_back(new NorthPawn(currentPosition, targetPosistion, boardModel, name));
	
}