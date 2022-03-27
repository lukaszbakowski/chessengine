#include "NorthPawn.h"

bool NorthPawn::IsPossible(int x, int y)
{
    cout << "work????" << endl;
    FieldCoordinate newPosition(currentPosition.X - x, currentPosition.Y);
    if (newPosition.X >= 0) //is fit in array length?
    {
        if (figureName > EmptyField) //white or black?
        {
            cout << "work2?" << endl;
            if (boardModel.board[newPosition.X][newPosition.Y] == EmptyField) //is move available?
            {
                cout << "work2?" << endl;
                if (newPosition.X == targetPosition.X && newPosition.Y == targetPosition.Y) //is move match with target pos?
                {
                    return true;
                }
            }
            else return false;
        }
        else
        {
            cout << "work?" << endl;
            if (boardModel.board[newPosition.X][newPosition.Y] == EmptyField)
            {
                cout << "work?" << endl;
                if (newPosition.X == targetPosition.X && newPosition.Y == targetPosition.Y)
                {
                    return true;
                }
            }
            else return false;
        }
    }
    return Direction::IsPossible(x++, y);
}
