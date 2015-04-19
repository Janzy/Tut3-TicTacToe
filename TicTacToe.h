#include <iostream>
using namespace std;

class TicTacToe
{
public:

	TicTacToe(); //constructor
	~TicTacToe(); //destructor

	void PrintBoard();
	void GetMove(int number, char symbol);
	bool DetermineWinner(char symbol);
	bool determineDraw();
	void Reset();
	bool IsValidMove(int row, int column);

private:
	char blocknumbers[3][3];
};