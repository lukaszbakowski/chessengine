#include "Direction.h"

Direction::Direction(FieldCoordinate currentPosition, FieldCoordinate targetPosition, BoardModel boardModel, Figures figureName) {
	this->currentPosition = currentPosition;
	this->targetPosition = targetPosition;
	this->boardModel = boardModel;
	this->figureName = figureName;
}

//void Direction::Add(Direction direction)
//{
//
//	if (next != NULL) {
//		next->Add(direction);
//	}
//	else {
//		next = &direction;
//	}
//}
bool Direction::IsPossible(int x, int y) {
	cout << "test1" << endl;
	if (count > 0) {
		cout << "test2" << endl;
		count--;
		return this->IsPossible(x, y);
		//next->IsPossible(x, y);
	} 
	return false;
}
Direction::~Direction() {
	//if (next) {
	//	delete next;
	//}
}Direction& Direction::operator++() {
	count++;
	return *this;
}
Direction& Direction::operator--() {
	if (count > 0) {
		count--;
	}
	return *this;
}
Direction* Direction::operator++(int) {
	++(*this);
	return this;
}
Direction* Direction::operator--(int) {
	--(*this);
	return this;
}