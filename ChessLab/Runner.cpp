#include "Runner.h"

bool Runner::IsMoveLegal() {
	for (Direction* direction : directions) {
		if (direction->IsPossible(1, 1)) return true;
	}
	return Figure::IsMoveLegal();
}
void Runner::FigureBuilder() {

	directions.push_back(Build(new SouthEast(currentPosition, targetPosistion, boardModel, name)));
	directions.push_back(Build(new SouthWest(currentPosition, targetPosistion, boardModel, name)));
	directions.push_back(Build(new NorthEast(currentPosition, targetPosistion, boardModel, name)));
	directions.push_back(Build(new NorthWest(currentPosition, targetPosistion, boardModel, name)));
	
}