//StudentID A00050585
#include <iostream>
#include<string>
#include<iomanip>
#include<conio.h>
#include<time.h>
#include<fstream>
using namespace std;

int checkwin(char[]);
void board(char[]);
class TicTacToe {
public:
	int flag;
	char x = 'X';
	char square[10] = { 'o','A','B','C','D','E','F','G','H','I' };
	int player = 1, i, j;
	char choice;
	int count = 0;
	char mark;
	//Man vs Computer
	//Comp focuses on first stopping the mean from winning
	//Than focuses on winning itself
	void ManvsComp() {

		do
		{
			int j = 0;

			board(square);

			if (player % 2 == 1)
				player = 1;
			else
				player = 2;


			// player 2
			if (player == 2)
			{
				cout << "Players  " << player << endl;
				cout << "Press Enter for CPU" << endl;
				mark = 'O';
				choice = rand() % 9 + 1;

				int turn = 1;
				int placed = 0;

				if (placed == 0) {
					//all the checks that first focus on not letting the user win than focus on winning itself when there is no point in stopping the user
					//checks to not let the opponent win
					//checks to win the game if opponent plays a bad move
					if (square[1] == mark && square[2] == mark && square[3] != x && placed == 0) {
						square[3] = mark;
						placed++;
					}

					else if (square[2] == mark && square[3] == mark && square[1] != x && placed == 0) {
						square[1] = mark;
						placed++;
					}

					else if (square[1] == mark && square[3] == mark && square[2] != x && placed == 0) {
						square[2] = mark;
						placed++;
					}
					//row2
					else if (square[4] == mark && square[5] == mark && square[6] != x && placed == 0) {
						square[6] = mark;
						placed++;
					}

					else if (square[5] == mark && square[6] == mark && square[4] != x && placed == 0) {
						square[4] = mark;
						placed++;
					}

					else if (square[4] == mark && square[6] == mark && square[5] != x && placed == 0) {
						square[5] = mark;
						placed++;
					}
					//row3
					else if (square[7] == mark && square[8] == mark && square[9] != x && placed == 0) {
						square[9] = mark;
						placed++;
					}

					else if (square[8] == mark && square[9] == mark && square[7] != x && placed == 0) {
						square[7] = mark;
						placed++;
					}

					else if (square[7] == mark && square[9] == mark && square[8] != x && placed == 0) {
						square[8] = mark;
						placed++;
					}
					//col 1
					else if (square[1] == mark && square[4] == mark && square[7] != x && placed == 0) {
						square[7] = mark;
						placed++;
					}

					else if (square[4] == mark && square[7] == mark && square[1] != x && placed == 0) {
						square[1] = mark;
						placed++;
					}

					else if (square[1] == x && square[7] == x && square[4] != x && placed == 0) {
						square[4] = mark;
						placed++;
					}
					//COL 2
					else if (square[2] == mark && square[5] == mark && square[8] != x && placed == 0) {
						square[8] = mark;
						placed++;
					}

					else if (square[5] == mark && square[8] == mark && square[3] != x && placed == 0) {
						square[3] = mark;
						placed++;
					}

					else if (square[2] == mark && square[8] == mark && square[5] != x && placed == 0) {
						square[5] = mark;
						placed++;
					}
					//COL 3
					else if (square[3] == mark && square[6] == mark && square[9] != x && placed == 0) {
						square[9] = mark;
						placed++;
					}

					else if (square[6] == mark && square[9] == mark && square[3] != x && placed == 0) {
						square[3] = mark;
						placed++;
					}

					else if (square[3] == mark && square[9] == mark && square[6] != x && placed == 0) {
						square[6] = mark;
						placed++;
					}
					//diag 1
					else if (square[1] == mark && square[5] == mark && square[9] != x && placed == 0) {
						square[9] = mark;
						placed++;
					}

					else if (square[5] == mark && square[9] == mark && square[1] != x && placed == 0) {
						square[1] = mark;
						placed++;
					}

					else if (square[1] == mark && square[9] == mark && square[5] != x && placed == 0) {
						square[5] = mark;
						placed++;
					}
					//diag 2
					else if (square[3] == mark && square[5] == mark && square[7] != x && placed == 0) {
						square[7] = mark;
						placed++;
					}

					else if (square[5] == mark && square[7] == mark && square[3] != x && placed == 0) {
						square[3] = mark;
						placed++;
					}

					else if (square[3] == mark && square[7] == mark && square[5] != x && placed == 0) {
						square[5] = mark;
						placed++;
					}

					//row1 defend
					if (square[1] == 'X' && square[2] == 'X' && square[3] != mark && placed == 0) {
						square[3] = mark;
						placed++;
					}

					else if (square[2] == 'X' && square[3] == 'X' && square[1] != mark && placed == 0) {
						square[1] = mark;
						placed++;
					}

					else if (square[1] == 'X' && square[3] == 'X' && square[2] != mark && placed == 0) {
						square[2] = mark;
						placed++;
					}
					//row2
					else if (square[4] == 'X' && square[5] == 'X' && square[6] != mark && placed == 0) {
						square[6] = mark;
						placed++;
					}

					else if (square[5] == 'X' && square[6] == 'X' && square[4] != mark && placed == 0) {
						square[4] = mark;
						placed++;
					}

					else if (square[4] == 'X' && square[6] == 'X' && square[5] != mark && placed == 0) {
						square[5] = mark;
						placed++;
					}
					//row3
					else if (square[7] == 'X' && square[8] == 'X' && square[9] != mark && placed == 0) {
						square[9] = mark;
						placed++;
					}

					else if (square[8] == 'X' && square[9] == 'X' && square[7] != mark && placed == 0) {
						square[7] = mark;
						placed++;
					}

					else if (square[7] == 'X' && square[9] == 'X' && square[8] != mark && placed == 0) {
						square[8] = mark;
						placed++;
					}
					//col 1
					else if (square[1] == 'X' && square[4] == 'X' && square[7] != mark && placed == 0) {
						square[7] = mark;
						placed++;
					}

					else if (square[4] == 'X' && square[7] == 'X' && square[1] != mark && placed == 0) {
						square[1] = mark;
						placed++;
					}

					else if (square[1] == x && square[7] == x && square[4] != mark && placed == 0) {
						square[4] = mark;
						placed++;
					}
					//COL 2
					else if (square[2] == 'X' && square[5] == 'X' && square[8] != mark && placed == 0) {
						square[8] = mark;
						placed++;
					}

					else if (square[5] == 'X' && square[8] == 'X' && square[3] != mark && placed == 0) {
						square[3] = mark;
						placed++;
					}

					else if (square[2] == 'X' && square[8] == 'X' && square[5] != mark && placed == 0) {
						square[5] = mark;
						placed++;
					}
					//COL 3
					else if (square[3] == 'X' && square[6] == 'X' && square[9] != mark && placed == 0) {
						square[9] = mark;
						placed++;
					}

					else if (square[6] == 'X' && square[9] == 'X' && square[3] != mark && placed == 0) {
						square[3] = mark;
						placed++;
					}

					else if (square[3] == 'X' && square[9] == 'X' && square[6] != mark && placed == 0) {
						square[6] = mark;
						placed++;
					}
					//diag 1
					else if (square[1] == 'X' && square[5] == 'X' && square[9] != mark && placed == 0) {
						square[9] = mark;
						placed++;
					}

					else if (square[5] == 'X' && square[9] == 'X' && square[1] != mark && placed == 0) {
						square[1] = mark;
						placed++;
					}

					else if (square[1] == 'X' && square[9] == 'X' && square[5] != mark && placed == 0) {
						square[5] = mark;
						placed++;
					}
					//diag 2
					else if (square[3] == 'X' && square[5] == 'X' && square[7] != mark && placed == 0) {
						square[7] = mark;
						placed++;
					}

					else if (square[5] == 'X' && square[7] == 'X' && square[3] != mark && placed == 0) {
						square[3] = mark;
						placed++;
					}

					else if (square[3] == 'X' && square[7] == 'X' && square[5] != mark && placed == 0) {
						square[5] = mark;
						placed++;
					}

					//When you have nothing to choose random value will be selected itself
					else if (placed == 0) {
						while (placed == 0)
						{

							if (choice == 1 && square[1] == 'A') {
								square[1] = mark;
								placed = 1;
							}
							else if (choice == 2 && square[2] == 'B') {

								square[2] = mark;
								placed = 1;
							}
							else if (choice == 3 && square[3] == 'C') {

								square[3] = mark;
								placed = 1;
							}
							else if (choice == 4 && square[4] == 'D') {

								placed = 1;
								square[4] = mark;
							}
							else if (choice == 5 && square[5] == 'E') {

								square[5] = mark;
								placed = 1;
							}
							else if (choice == 6 && square[6] == 'F') {

								square[6] = mark;
								placed = 1;
							}
							else if (choice == 7 && square[7] == 'G') {

								square[7] = mark;
								placed = 1;
							}
							else if (choice == 8 && square[8] == 'H') {

								square[8] = mark;
								placed = 1;
							}
							else if (choice == 9 && square[9] == 'I') {

								square[9] = mark;
								placed = 1;
							}

							else
							{
								choice = rand() % 9 + 1;
							}
						}
					}

					//self
					//when there is no need to prioritize x 
				}





				count++;
				i = checkwin(square);
				player++;
				getchar();
				board(square);
			}

			// player 1
			else if (player == 1)
			{
				cout << "Players  " << player << ", enter an Alphabet within 10 second,Press Z for exit,R to restart:  ";

				clock_t start = clock();

				while (!_kbhit()) //Check for keyboard hit
				{
					//Check if 10 sec timer expired or not
					if (((clock() - start) / CLOCKS_PER_SEC) >= 10)
					{

						if (CLOCKS_PER_SEC >= 10) {
							cout << "\n	Man has lost " << endl;
							break;
						}

					}
				}

				cin >> choice;
				if (choice == 'Z')
					exit(1);
				else if (choice == 'R') {
					return;
				}
				mark = 'X';

				if (choice == 'A' && square[1] == 'A')

					square[1] = mark;
				else if (choice == 'B' && square[2] == 'B')

					square[2] = mark;
				else if (choice == 'C' && square[3] == 'C')

					square[3] = mark;
				else if (choice == 'D' && square[4] == 'D')

					square[4] = mark;
				else if (choice == 'E' && square[5] == 'E')

					square[5] = mark;
				else if (choice == 'F' && square[6] == 'F')

					square[6] = mark;
				else if (choice == 'G' && square[7] == 'G')

					square[7] = mark;
				else if (choice == 'H' && square[8] == 'H')

					square[8] = mark;
				else if (choice == 'I' && square[9] == 'I')

					square[9] = mark;
				else
				{
					cout << "Invalid move ";
					flag = getc(stdin);
					player--;
					getchar();
				}
				i = checkwin(square);

				player++;
			}
		} while (i == -1);
		board(square);
		if (i == 1)

			cout << "Congratulation! \nPlayer " << --player << " win ";
		else
			cout << "  OOps!\nGame draw";

		if (player == 2) {

			//reading file
			fstream readfile("CW.txt");
			if (readfile.is_open()) {
				readfile >> j;
				j++;
				readfile.close();
			}
			else {
				cout << "File cant be reached . Data remains unchanged in the file" << endl;
			}

			//writing in file

			fstream file("CW.txt");
			if (file.is_open()) {
				j++;
				file << j;
				file.close();
				cout << "File has been updated" << endl;

			}
			else {
				cout << "File cant be reached" << endl;
			}
		}

		system("pause");
	}
	//Computer vs Computer
	//Both players will focus on first not letting opponent win than winning itself
	//will result in draw
	void CompvsComp() {

		do
		{
			board(square);

			if (player % 2 == 1)
				player = 1;
			else
				player = 2;



			cout << " Press Enter Players  " << player << endl;

			choice = rand() % 9 + 1 + 1;

			int turn = 1;
			int placed = 0;
			if (player == 1)
				mark = 'X';
			else
				mark = 'O';
			while (placed == 0)
			{

				if (choice == 1 && square[1] == 'A') {
					square[1] = mark;
					placed = 1;
				}
				else if (choice == 2 && square[2] == 'B') {

					square[2] = mark;
					placed = 1;
				}
				else if (choice == 3 && square[3] == 'C') {

					square[3] = mark;
					placed = 1;
				}
				else if (choice == 4 && square[4] == 'D') {

					placed = 1;
					square[4] = mark;
				}
				else if (choice == 5 && square[5] == 'E') {

					square[5] = mark;
					placed = 1;
				}
				else if (choice == 6 && square[6] == 'F') {

					square[6] = mark;
					placed = 1;
				}
				else if (choice == 7 && square[7] == 'G') {

					square[7] = mark;
					placed = 1;
				}
				else if (choice == 8 && square[8] == 'H') {

					square[8] = mark;
					placed = 1;
				}
				else if (choice == 9 && square[9] == 'I') {

					square[9] = mark;
					placed = 1;
				}

				else
				{
					choice = rand() % 9 + 1 + 1;
				}
			}
			i = checkwin(square);
			player++;
			getchar();
			board(square);




		} while (i == -1);
		board(square);
		if (i == 1)

			cout << "Congratulation! \nPlayer " << --player << " win ";
		else
			cout << "  OOps!\nGame draw";

		system("pause>0");

	}

	void ManvsMan() {

		do
		{
			int j = 0;

			board(square);

			if (player % 2 == 1)
				player = 1;
			else
				player = 2;





			cout << "Players  " << player << ", enter an Alphabet within 10 second,Press Z for exit,R to restart:  ";

			clock_t start = clock();

			while (!_kbhit()) //Check for keyboard hit
			{
				//Check if 10 sec timer expired or not
				if (((clock() - start) / CLOCKS_PER_SEC) >= 10)
				{

					if (CLOCKS_PER_SEC >= 10) {
						cout << "\nPlayer " << player << " has lost " << endl;
						break;
					}

				}
			}

			cin >> choice;
			if (choice == 'Z')
				exit(1);
			else if (choice == 'R')
				return;

			if (player == 1)
				mark = 'X';
			else
				mark = 'O';

			if (choice == 'A' && square[1] == 'A')

				square[1] = mark;
			else if (choice == 'B' && square[2] == 'B')

				square[2] = mark;
			else if (choice == 'C' && square[3] == 'C')

				square[3] = mark;
			else if (choice == 'D' && square[4] == 'D')

				square[4] = mark;
			else if (choice == 'E' && square[5] == 'E')

				square[5] = mark;
			else if (choice == 'F' && square[6] == 'F')

				square[6] = mark;
			else if (choice == 'G' && square[7] == 'G')

				square[7] = mark;
			else if (choice == 'H' && square[8] == 'H')

				square[8] = mark;
			else if (choice == 'I' && square[9] == 'I')

				square[9] = mark;
			else
			{
				cout << "Invalid move ";

				player--;
				getchar();
			}
			i = checkwin(square);

			player++;

		} while (i == -1);
		board(square);
		if (i == 1)
			cout << "Congratulation! \nPlayer " << --player << " win ";
		else
			cout << "  OOps!\nGame draw";

		system("pause");
	}


	void board(char square[])
	{
		system("CLS");
		cout << "\n\n\tTic Tac Toe\n\n";

		cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
		cout << endl;

		cout << "     |     |     " << endl;
		cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

		cout << "_____|_____|_____" << endl;
		cout << "     |     |     " << endl;

		cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

		cout << "_____|_____|_____" << endl;
		cout << "     |     |     " << endl;

		cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

		cout << "     |     |     " << endl << endl;
	}


	int checkwin(char square[])
	{
		if (square[1] == square[2] && square[2] == square[3])

			return 1;
		else if (square[4] == square[5] && square[5] == square[6])

			return 1;
		else if (square[7] == square[8] && square[8] == square[9])

			return 1;
		else if (square[1] == square[4] && square[4] == square[7])

			return 1;
		else if (square[2] == square[5] && square[5] == square[8])

			return 1;
		else if (square[3] == square[6] && square[6] == square[9])

			return 1;
		else if (square[1] == square[5] && square[5] == square[9])

			return 1;
		else if (square[3] == square[5] && square[5] == square[7])

			return 1;
		else if (square[1] != 'A' && square[2] != 'B' && square[3] != 'C'
			&& square[4] != 'D' && square[5] != 'E' && square[6] != 'F'
			&& square[7] != 'G' && square[8] != 'H' && square[9] != 'I')

			return 0;
		else
			return -1;
	}
};


int main() {
	int a;
	char square[10] = { 'o','A','B','C','D','E','F','G','H','I' };
	TicTacToe obj1;
	do {
		for (int i = 0; i < 10; i++)
			obj1.square[i] = square[i];

		system("CLS");
		cout << "\nWelcome to Tick Tack Toe" << endl;
		cout << "1.Man vs Man" << endl;
		cout << "2.Computer vs Computer" << endl;
		cout << "3.Man vs Computer" << endl;
		cout << "4.To print number of games won by computer " << endl;
		cout << "5.To exit" << endl;
		cout << "Which mode you want to play : ";
		cin >> a;
		if (a == 1)
			obj1.ManvsMan();
		else if (a == 2)
			obj1.CompvsComp();
		else if (a == 3)
			obj1.ManvsComp();
		else if (a == 4) {
			int i;
			ifstream readfile("CW.txt");
			if (readfile.is_open()) {
				readfile >> i;
				readfile.close();
				cout << "The number of games won by computer from man are " << i << endl;
			}
			else {
				cout << "File cant be reached." << endl;
			}

		}
		else if (a == 5)
			break;
		else {
			cout << "invalid input" << endl;
		}
	} while (a != 5);



	return 0;
}
