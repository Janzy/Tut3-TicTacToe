
#include <iostream>
using namespace std;
#include "TicTacToe.h"

//------------------------------------------

TicTacToe::TicTacToe()
{
	Reset();
}

//------------------------------------------

TicTacToe:: ~TicTacToe()
{
}

//------------------------------------------

void TicTacToe::PrintBoard()
{
	cout << "   |   |   " << endl;
	cout << " " << blocknumbers[0][0] << " | " << blocknumbers[0][1] << " | " << blocknumbers[0][2] << endl;
	cout << "___|___|___" << endl;
	cout << "   |   |   " << endl;
	cout << " " << blocknumbers[1][0] << " | " << blocknumbers[1][1] << " | " << blocknumbers[1][2] << endl;
	cout << "___|___|___" << endl;
	cout << "   |   |   " << endl;
	cout << " " << blocknumbers[2][0] << " | " << blocknumbers[2][1] << " | " << blocknumbers[2][2] << endl;
	cout << "___|___|___" << endl << endl;
}

//------------------------------------------

bool TicTacToe::IsValidMove(int row, int column)
{
	if (blocknumbers[row][column] == ' ')
	{
		return true;
	}

	return true;
}

//------------------------------------------

void TicTacToe::GetMove(int number, char symbol)
{
	switch (number)
	{
	case 1:
	{
		if (IsValidMove(0, 0))
		{
			blocknumbers[0][0] = symbol;
		}
		break;
	}
	case 2:
	{
		if (IsValidMove(0, 1))
		{
			blocknumbers[0][1] = symbol;
		}
		break;
	}
	case 3:
	{
		if (IsValidMove(0, 2))
		{
			blocknumbers[0][2] = symbol;
		}
		break;
	}
	case 4:
	{
		if (IsValidMove(1, 0))
		{
			blocknumbers[1][0] = symbol;
		}
		break;
	}
	case 5:
	{
		if (IsValidMove(1, 1))
		{
			blocknumbers[1][1] = symbol;
		}
		break;
	}
	case 6:
	{
		if (IsValidMove(1, 2))
		{
			blocknumbers[1][2] = symbol;
		}
		break;
	}
	case 7:
	{
		if (IsValidMove(2, 0))
		{
			blocknumbers[2][0] = symbol;
		}
		break;
	}
	case 8:
	{
		if (IsValidMove(2, 1))
		{
			blocknumbers[2][1] = symbol;
		}
		break;
	}
	case 9:
	{
		if (IsValidMove(2, 2))
		{
			blocknumbers[2][2] = symbol;
		}
	}
	}
}

//------------------------------------------

bool TicTacToe::DetermineWinner(char symbol)
{
	int row;
	int column;
	int count = 0;

	for (row = 0; row <= 3; row++)
	{
		count = 0;

		for (column = 0; column <= 3; column++)
		{
			if (blocknumbers[row][column] == symbol)
			{
				count++;
			}
			if (count >= 3)
			{
				return true;
			}
		}
	}

	for (column = 0; column <= 3; column++)
	{
		count = 0;
		for (row = 0; row <= 3; row++)
		{
			if (blocknumbers[row][column] == symbol)
			{
				count++;
			}
			if (count >= 3)
			{
				return true;
			}
		}
	}

	if (blocknumbers[0][0] == symbol &&
		blocknumbers[1][1] == symbol &&
		blocknumbers[2][2] == symbol)
	{
		return true;
	}

	return false;
}

//------------------------------------------

void TicTacToe::Reset()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			blocknumbers[i][j] = ' ';
		}
	}
}

//------------------------------------------