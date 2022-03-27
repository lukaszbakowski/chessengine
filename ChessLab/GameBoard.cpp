#include "GameBoard.h"
using namespace std;



GameBoard::GameBoard() {
	cout << "new game has started" << endl;

	BoardPrint();
}
void GameBoard::BoardPrint() {
	
	if (turn == false) {
		cout << "white turn" << endl;
		for (int i = 0; i < 8; i++) {
			cout << "   -----------------------------------------" << endl;
			cout << " " << i << " ";
			for (int j = 0; j < 8; j++) {

				cout << "|";
				PrintSwitch(boardModel.board[i][j]);
				if (j == 7) {
					cout << "|";
				}
			}
			cout << endl;
		}
		cout << "   -----------------------------------------" << endl;
		cout << "      0    1    2    3    4    5    6    7  " << endl;
	}
	else {
		cout << "black turn" << endl;
		for (int i = 7; i >= 0; i--) {
			cout << "   -----------------------------------------" << endl;
			cout << " " << i << " ";
			for (int j = 7; j >= 0; j--) {

				cout << "|";
				PrintSwitch(boardModel.board[i][j]);
				if (j == 0) {
					cout << "|";
				}
			}
			cout << endl;
		}
		cout << "   -----------------------------------------" << endl;
		cout << "      7    6    5    4    3    2    1    0  " << endl;
	}
}

void GameBoard::PrintSwitch(short int fieldToPrint) {
	switch (fieldToPrint) {
	case EmptyField:
		cout << "    ";
		break;
	case BlackKing:
		cout << " BK ";
		break;
	case BlackQueen:
		cout << " BQ ";
		break;
	case BlackRunner:
		cout << " BR ";
		break;
	case BlackHorse:
		cout << " BH ";
		break;
	case BlackTower:
		cout << " BT ";
		break;
	case BlackPawn:
		cout << " BP ";
		break;
	case WhiteKing:
		cout << " WK ";
		break;
	case WhiteQueen:
		cout << " WQ ";
		break;
	case WhiteRunner:
		cout << " WR ";
		break;
	case WhiteHorse:
		cout << " WH ";
		break;
	case WhiteTower:
		cout << " WT ";
		break;
	case WhitePawn:
		cout << " WP ";
		break;
	default:
		break;
	}
}

void GameBoard::SetAnyField(FieldCoordinate coordinate, Figures anyFigure) {
	boardModel.board[coordinate.X][coordinate.Y] = anyFigure;
}
short int GameBoard::GetAnyField(FieldCoordinate coordinate) {
	return boardModel.board[coordinate.X][coordinate.Y];
}
void GameBoard::TurnChanger() {
	turn = !turn;
	system("cls");
	BoardPrint();
}

void GameBoard::GameStart() {
	while (true) {
		bool loop = true;
		do {
			CurrentSet();
			TargetSet();
			if (MoveValidator()) {
				boardModel.board[targetPosition.X][targetPosition.Y] = boardModel.board[currentPosition.X][currentPosition.Y];
				boardModel.board[currentPosition.X][currentPosition.Y] = EmptyField;
				loop = false;
			}
			else {
				cout << "move not possible, please try again" << endl;
			}
			
		} while (loop); //do since correct figure target

		if (false) { //check if king is still alive
			break;
		}
		else {
			TurnChanger();
		}
	}
}
bool GameBoard::MoveValidator() {

	switch (boardModel.board[currentPosition.X][currentPosition.Y])
	{
	case BlackHorse:
		return Horse(BlackHorse, currentPosition, targetPosition, boardModel).IsMoveLegal();
	case WhiteHorse:
		return Horse(WhiteHorse, currentPosition, targetPosition, boardModel).IsMoveLegal();
	case BlackKing:
		return King(BlackKing, currentPosition, targetPosition, boardModel).IsMoveLegal();
	case WhiteKing:
		return King(WhiteKing, currentPosition, targetPosition, boardModel).IsMoveLegal();
	case BlackPawn:
		return PawnBlack(BlackPawn, currentPosition, targetPosition, boardModel).IsMoveLegal();
	case WhitePawn:
		return PawnWhite(WhitePawn, currentPosition, targetPosition, boardModel).IsMoveLegal();
	case BlackQueen:
		return Queen(BlackQueen, currentPosition, targetPosition, boardModel).IsMoveLegal();
	case WhiteQueen:
		return Queen(WhiteQueen, currentPosition, targetPosition, boardModel).IsMoveLegal();
	case BlackRunner:
		return Runner(BlackRunner, currentPosition, targetPosition, boardModel).IsMoveLegal();
	case WhiteRunner:
		return Runner(WhiteRunner, currentPosition, targetPosition, boardModel).IsMoveLegal();
	case BlackTower:
		return Tower(BlackTower, currentPosition, targetPosition, boardModel).IsMoveLegal();
	case WhiteTower:
		return Tower(WhiteTower, currentPosition, targetPosition, boardModel).IsMoveLegal();
	default:
		break;
	}
	return false;
}
void GameBoard::CurrentSet() {
	try {
		cout << "set current X: ";
		SetKey(currentPosition.X);
		cout << "set current Y: ";
		SetKey(currentPosition.Y);
	}
	catch (int ex) {
		cout << ex << endl;
	}
	cout << currentPosition.X << endl;
	cout << currentPosition.Y << endl;
}
void GameBoard::TargetSet() {
	try {
		cout << "set target X: ";
		SetKey(targetPosition.X);
		cout << "set target Y: ";
		SetKey(targetPosition.Y);
	}
	catch (int ex) {
		cout << ex << endl;
	}
	cout << targetPosition.X << endl;
	cout << targetPosition.Y << endl;
}
void GameBoard::SetKey(int& coordinate) {
	while (true) {
		
		if (!(cin >> coordinate)) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "please use only numbers, try again: ";
		}
		else {
			break;
		}
	}
}

GameBoard::~GameBoard() {
	cout << "game ended" << endl;
	if (turn) {
		cout << "black is the winner";
	}
	else {
		cout << "white is the winner";
	}
}