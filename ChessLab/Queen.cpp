#include "Queen.h"

bool Queen::IsMoveLegal() {
	for (Direction* direction : directions) {
		if (direction->IsPossible(1, 1)) {
			return true;
		}
		else {
			cout << "bool test" << endl;
		}
	}
	return Figure::IsMoveLegal();
}
void Queen::FigureBuilder() {
	
	directions.push_back(Build(new East(currentPosition, targetPosistion, boardModel, name)));
	directions.push_back(Build(new West(currentPosition, targetPosistion, boardModel, name)));
	directions.push_back(Build(new North(currentPosition, targetPosistion, boardModel, name)));
	directions.push_back(Build(new South(currentPosition, targetPosistion, boardModel, name)));
	directions.push_back(Build(new SouthEast(currentPosition, targetPosistion, boardModel, name)));
	directions.push_back(Build(new SouthWest(currentPosition, targetPosistion, boardModel, name)));
	directions.push_back(Build(new NorthEast(currentPosition, targetPosistion, boardModel, name)));
	directions.push_back(Build(new NorthWest(currentPosition, targetPosistion, boardModel, name)));
	
}
