#include "West.h"
bool West::IsPossible(int x, int y)
{
    FieldCoordinate newPosition(currentPosition.X, currentPosition.Y - y);
    if (newPosition.Y >= 0) //is fit in array length?
    {
        if (figureName > EmptyField) //white or black?
        {
            if (boardModel.board[newPosition.X][newPosition.Y] <= EmptyField) //is move available?
            {
                if (newPosition.X == targetPosition.X && newPosition.Y == targetPosition.Y) //is move match with target pos?
                {
                    return true;
                }
                else if (boardModel.board[newPosition.X][newPosition.Y] < EmptyField) return false;
            }
            else return false;
        }
        else
        {
            if (boardModel.board[newPosition.X][newPosition.Y] >= EmptyField)
            {
                if (newPosition.X == targetPosition.X && newPosition.Y == targetPosition.Y)
                {
                    return true;
                }
                else if (boardModel.board[newPosition.X][newPosition.Y] > EmptyField) return false;
            }
            else return false;
        }
    }
    return Direction::IsPossible(x, y++);
}
