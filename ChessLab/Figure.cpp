#include "Figure.h"


Figure::Figure(Figures name, FieldCoordinate currentPosition, FieldCoordinate targetPosistion, BoardModel boardModel) {
    this->name = name;
    this->currentPosition = currentPosition;
    this->targetPosistion = targetPosistion;
    this->boardModel = boardModel;
    FigureBuilder();
}
Figures Figure::GetName() {
    return name;
}
bool Figure::IsMoveLegal()
{
    cout << "lol" << endl;
    return false;
}
void Figure::FigureBuilder() {
    
}
Figure::~Figure() {
    //for (auto element : directions) {
    //    delete element;
    //}
}