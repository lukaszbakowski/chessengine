#include "Horse.h"

bool Horse::IsMoveLegal() {
	for (Direction* direction : directions) {
		if (direction->IsPossible(1, 2)) return true;
		if (direction->IsPossible(2, 1)) return true;
	}
	return Figure::IsMoveLegal();
}
void Horse::FigureBuilder() {
	directions.push_back(new SouthEast(currentPosition, targetPosistion, boardModel, name));
	directions.push_back(new SouthWest(currentPosition, targetPosistion, boardModel, name));
	directions.push_back(new NorthWest(currentPosition, targetPosistion, boardModel, name));
	directions.push_back(new NorthEast(currentPosition, targetPosistion, boardModel, name));
}