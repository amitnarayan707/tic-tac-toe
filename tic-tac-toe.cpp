#include<iostream>
#include<string>

using namespace std;

char square[9] = { '1','2','3','4','5','6','7','8','9' };
char p1, p2;
void player();
void board();
int winner();
int main()
{
	cout << "\t\t===========================================================\n";
	cout << "\t\t||                ----- Tic Tac Toe -----                ||\n";
	cout << "\t\t===========================================================\n";
	player();
	int a[9] = { 1,2,3,4,5,6,7,8,9 };
	int i, n , choice,b;
	int player = 1;
	string turn = "First";
	i = winner();
	do {
		board();
		cout<<turn<<" Player turn: ";
		cin >> n;
		
		for (choice = 0; choice != 9; choice++) {
			if (a[choice] == n) {
				b = a[choice];
				a[choice] = 9;
				break;
			}
			else {
				continue;
			}
		}
		if(b == n){
			if (player % 2 == 0) {
				square[n - 1] = p2;
				turn = "First";
			}
			else {
				square[n - 1] = p1;
				turn = "Second";
			}
			player++;
		}
		else {
			cout << "Invaid Input";
		}
		winner();
	} while (i == 1);
	board();
	return 0;
}

				/********************************************
				*      ---- Board for tic tac toe ----      *
				********************************************/

void board()
{
	system("cls");
	cout << "\t\t===========================================================\n";
	cout << "\t\t||                ----- Tic Tac Toe -----                ||\n";
	cout << "\t\t===========================================================\n";
	cout << "1st Player = " << p1 << "   and   2nd Player = " << p2 << endl << endl;
	cout << "\t\t\t\t  ___________________\n";
	cout << "\t\t\t\t |      |     |      |\n";
	cout << "\t\t\t\t |  "<<square[0]<<"   |  "<< square[1] <<"  |  " << square[2] << "   |\n";
	cout << "\t\t\t\t |______|_____|______|\n";
	cout << "\t\t\t\t |      |     |      |\n";
	cout << "\t\t\t\t |  " << square[3] << "   |  " << square[4] << "  |  " << square[5] << "   |\n";
	cout << "\t\t\t\t |______|_____|______|\n";
	cout << "\t\t\t\t |      |     |      |\n";
	cout << "\t\t\t\t |  " << square[6] << "   |  " << square[7] << "  |  " << square[8] << "   |\n";
	cout << "\t\t\t\t |______|_____|______|\n";
}


				/***************************
				*                          *
				*     ________________     *
				*    |     |    |     |    *
				*    |  0  |  1 |  2  |    *
				*    |_____|____|_____|    *
				*    |     |    |     |    *
				*    |  3  |  4 |  5  |    *
				*    |_____|____|_____|    *
				*    |     |    |     |    *
				*    |  6  |  7 |  8  |    *
				*    |_____|____|_____|    *
				*                          *
				*                          *
				***************************/



				/*****************************************
				*      ----- Player Selection -----      *
				*****************************************/

void player()
{
	do {
		cout << "\n\t\t1st Player = ";
		cin >> p1;
		cout << "\n";
	} while (p1=='x' && p1=='o');
	if (p1 == 'x')
	{
		p2 = 'o';
		cout << "\t\t2nd Player = " << p2 << "\n";
	}
	else
	{
		p2 = 'x';
		cout << "\t\t2nd Player = " << p2 << "\n";
	}
}

				/************************************************
				*           ----- Winner section -----          *
				*************************************************/

int winner() {
	if (square[0] == square[1] && square[1] == square[2]) {  //Row 1
		if (square[0] == p1) {
			cout << "Player 1st is Winner";
			exit(0);
		}
		else {
			cout << "Player 2nd is winner";
			exit(0);
		}
	}
	else if (square[3] == square[4] && square[4] == square[5]) { //row 2
		if (square[4] == p1) {
			cout << "Player 1st is Winner";
			exit(0);
		}
		else {
			cout << "Player 2nd is winner";
			exit(0);
		}
	}
	else if (square[6] == square[7] && square[7] == square[8]) {//row 3
		if (square[0] == p1) {
			cout << "Player 1st is Winner";
			exit(0);
		}
		else {
			cout << "Player 2nd is winner";
			exit(0);
		}
	}
	else if (square[0] == square[3] && square[3] == square[6]) { //col 1
		if (square[0] == p1) {
			cout << "Player 1st is Winner";
			exit(0);
		}
		else {
			cout << "Player 2nd is winner";
			exit(0);
		}
	}
	else if (square[1] == square[4] && square[4] == square[7]) { //col 2
		if (square[4] == p1) {
			cout << "Player 1st is Winner";
			exit(0);
		}
		else {
			cout << "Player 2nd is winner";
			exit(0);
		}
	}
	else if (square[2] == square[5] && square[5] == square[8]) { //col 3
		if (square[2] == p1) {
			cout << "Player 1st is Winner";
			exit(0);
		}
		else {
			cout << "Player 2nd is winner";
			exit(0);
		}
	}
	else if (square[0] == square[4] && square[4] == square[8]) { //d 1
		if (square[0] == p1) {
			cout << "Player 1st is Winner";
			exit(0);
		}
		else {
			cout << "Player 2nd is winner";
			exit(0);
		}
	}
	else if (square[2] == square[4] && square[4] == square[6]) {//d 2
		if (square[2] == p1) {
			cout << "Player 1st is Winner";
			exit(0);
		}
		else {
			cout << "Player 2nd is winner";
			exit(0);
		}
	}
	else if(square[0] !='1' && square[1] != '2' && square[2] != '3' && square[3] != '4'&& square[4] != '5' && square[5] != '6' && square[6] != '7' && square[7] != '8' && square[8]!='9') {
		cout << "Match Draw";
		exit(0);
	}
	else {
		return 1;
	}
}


				/*************************************************
				*            ----- Project End -----             *
				*************************************************/