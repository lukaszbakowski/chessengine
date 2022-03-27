#pragma once

struct FieldCoordinate {
public:
	int X = 0;
	int Y = 0;
	FieldCoordinate() {
	}
	FieldCoordinate(int X, int Y) {
		this->X = X;
		this->Y = Y;
	}
};