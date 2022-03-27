#include "Tower.h"

bool Tower::IsMoveLegal() {
	for (Direction* direction : directions) {
		if (direction->IsPossible(1, 1)) return true;
	}
	return Figure::IsMoveLegal();
}
void Tower::FigureBuilder() {
	
	directions.push_back(Build(new East(currentPosition, targetPosistion, boardModel, name)));
	directions.push_back(Build(new West(currentPosition, targetPosistion, boardModel, name)));
	directions.push_back(Build(new North(currentPosition, targetPosistion, boardModel, name)));
	directions.push_back(Build(new South(currentPosition, targetPosistion, boardModel, name)));
	
}