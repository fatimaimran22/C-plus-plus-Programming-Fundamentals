#include<iostream>
#include<iomanip>
using namespace std;

// Print function
void PrintBoard(int b[][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (b[i][j] == 1)
			{
				cout << setw(3) << "X" << "   ";
			}
			else if (b[i][j] == 2)
			{
				cout << setw(3) << "O" << "   ";
			}
			else
			{
				cout << setw(3) << "_" << "   ";
			}
		}
		cout << endl;
	}	
}
//Update board
void updateBoard(int b[][3], int row, int col, int p)
{
		b[row][col] =p;
}
//CheckWinner
bool checkwinner(int b[][3], int &who)
{
	for (int r = 0; r < 3; r++)
	{
		if (b[r][0] == b[r][1] && b[r][0] == b[r][2] && b[r][0] != 0)
		{
			who = b[r][0];
			return true;
		}
	}
	for (int c = 0; c < 3; c++)
	{
		if (b[0][c] == b[1][c] && b[1][c] == b[2][c] && b[0][c] != 0)
		{
			who = b[0][c];
			return true;
		}
	}
	if (b[0][0]==b[1][1] && b[0][0]==b[2][2] && b[0][0] != 0)
	{
		who = b[2][2];
		return true;
	}
	if (b[0][2] == b[1][1] && b[0][2] == b[2][0] && b[0][2] != 0)
	{
		who = b[0][2];
		return true;
	}
	return false;
}
//calculate function
void calculate(int b[][3], int &row, int &col, int p)
{
	if(b[1][1]==0)
	{
		row=1;
		col=1;
	}
	else if(b[0][0]==0)
	{
		row=0;
		col=0;
	}
	else if(b[0][2]==0)
	{
		row=0;
		col=2;
	}
	else if(b[2][0]==0)
	{
		row=2;
		col=0;
	}
}
int main()
{
	cout << "TIK TAK TOE!" << endl;
	int board[3][3] = { 0 };
	int player = 1, row=0, col=0, who=0;
	bool winner = false;
	PrintBoard(board);
	for (int i = 0; i <=9 && winner==false ; i++)// Total turns are 9
	{
		if (player == 1)
		{
			calculate(board, row, col, 1);
			updateBoard(board, row, col, 1);
			player = 2;
		}
		else
		{
			cout << "Enter row: ";
			cin >> row;
			cout << "Enter column: ";
			cin >> col;
			updateBoard(board, row, col, 2);
			player = 1;
		}
		cout << endl;
		PrintBoard(board);
		winner = checkwinner(board, who);
		cout << endl;
	}
	if (winner == true) //OR if(winner)
	{
		cout << "Winner is " << who;
		cout << endl;
	}
	return 0;
}
