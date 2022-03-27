#include "King.h"

bool King::IsMoveLegal() {
	for (Direction* direction : directions) {
		if (direction->IsPossible(1, 1)) return true;
	}
	return Figure::IsMoveLegal();
}
void King::FigureBuilder() {
	directions.push_back(new East(currentPosition, targetPosistion, boardModel, name));
	directions.push_back(new West(currentPosition, targetPosistion, boardModel, name));
	directions.push_back(new South(currentPosition, targetPosistion, boardModel, name));
	directions.push_back(new SouthEast(currentPosition, targetPosistion, boardModel, name));
	directions.push_back(new SouthWest(currentPosition, targetPosistion, boardModel, name));
	directions.push_back(new North(currentPosition, targetPosistion, boardModel, name));
	directions.push_back(new NorthEast(currentPosition, targetPosistion, boardModel, name));
	directions.push_back(new NorthWest(currentPosition, targetPosistion, boardModel, name));
		
}