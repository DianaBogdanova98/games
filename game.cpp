
#include "stdafx.h"
#include <iostream>
#include <cstdlib> 
using namespace std;
void func_turn(char start) {
	cout << "Нажми q, затем Enter, чтобы сделать ход! ";
	cin >> start;
	if (start == 'q') {}

}

int main()
{
	int turn[2] = {};
	int counter = rand()%2+1;
	int sumI;
	int sumC;
	char start=0;
	int sum_resI=0;
	int sum_resC=0;
	
	
	setlocale(LC_ALL, "rus");

	
	for (int j = 0; j < 4; j++) {
		
			for (int k = 0; k < 2; k++) {
				
				if (counter % 2 != 0) {
					sumI = 0;
					
					cout << "Tвой ход! Удачи! " << endl;
					func_turn(start);


				}


				else {
					sumC = 0;
					cout << "Ходит компьютер!" << endl;
					func_turn(start);
				}
				
				for (int i = 0; i < 2; i++)
				{
					turn[i] = rand() % 6 + 1;
					switch (turn[i]) {
					case 1: cout << " _____" << endl;
						cout << "|     |" << endl;
						cout << "|  *  |" << endl;
						cout << "|_____|" << endl;
						break;
					case 2: cout << " _____" << endl;
						cout << "|*    |" << endl;
						cout << "|     |" << endl;
						cout << "|____*|" << endl;
						break;
					case 3: cout << " _____" << endl;
						cout << "|*    |" << endl;
						cout << "|  *  |" << endl;
						cout << "|____*|" << endl;
						break;
					case 4: cout << " _____" << endl;
						cout << "|*   *|" << endl;
						cout << "|     |" << endl;
						cout << "|*___*|" << endl;
						break;
					case 5: cout << " _____" << endl;
						cout << "|*   *|" << endl;
						cout << "|  *  |" << endl;
						cout << "|*___*|" << endl;
						break;
					case 6: cout << " _____" << endl;
						cout << "|*   *|" << endl;
						cout << "|*   *|" << endl;
						cout << "|*___*|" << endl;
						break;
					}
					if (counter % 2 != 0) {
						sumI += turn[i];
					}
					else {
						sumC += turn[i];
					}

				}
				counter++;
				if (counter % 2 != 0) {
					cout << "Всего очков: " << sumC << endl << endl;

				}
				else {
					cout << "Всего очков: " << sumI << endl << endl;

				}
				

				
			}

			cout << "Промежуточный результат: " << endl << "Ты:" << sumI << "  |||  Компьютер: " << sumC << endl;
			if (sumI > sumC) {
				cout << "Ты побеждаешь!" << endl << endl;
			}
			else {
				cout << "Побеждает компьютер!" << endl << endl;
			}
			sum_resI += sumI;
			sum_resC += sumC;
		}
	if (sum_resI > sum_resC) {
		cout << "В этой игре ты победил!"<<endl;
	}
	else cout << "В этой игре ты  проиграл!" << endl;
	}
	

