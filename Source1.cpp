#include <iostream>
#include <string>
using namespace std;
void BeforeGame(char (&player1)[11][11], char (&player2)[11][11]) { // готовит поля до расставления кораблей.
	char k = 'a';
	for (int i = 1; i < 11; i++) {
		player1[i][0] = k;
		player2[i][0] = k;
		player1[0][i] = k;
		player2[0][i] = k;
		k++;
	}	
}
void Four(char(&sometable)[11][11], char a, char b, char c) {
	switch (c) {
	case 'r': {
		for (int j = 0; j <4; j++) {
			sometable[a - 'a' + 1][b - 'a' + 1 + j] = '*';
		}
		break;
	}
	case 'd': {
		for (int i = 0; i <4; i++) {
			sometable[a - 'a' + 1 + i][b - 'a' + 1] = '*';
		}
		break;
	}
	}
}
void Three(char(&sometable)[11][11], char a, char b, char c) {
	switch (c) {
	case 'r': {
		for (int j = 0; j <3; j++) {
			sometable[a - 'a' + 1][b - 'a' + 1 + j] = '*';
		}
		break;
	}
	case 'd': {
		for (int i = 0; i <3; i++) {
			sometable[a - 'a' + 1 + i][b - 'a' + 1] = '*';
		}
		break;
	}
	}
}
void Two(char(&sometable)[11][11], char a, char b, char c) {
	switch (c) {
	case 'r': {
		for (int j = 0; j <2; j++) {
			sometable[a - 'a' + 1][b - 'a' + 1 + j] = '*';
		}
		break;
	}
	case 'd': {
		for (int i = 0; i <2; i++) {
			sometable[a - 'a' + 1 + i][b - 'a' + 1] = '*';
		}
		break;
	}
	}
}
void One(char(&sometable)[11][11], char a, char b, char c) {
	switch (c) {
	case 'r': {
		for (int j = 0; j <1; j++) {
			sometable[a - 'a' + 1][b - 'a' + 1 + j] = '*';
		}
		break;
	}
	case 'd': {
		for (int i = 0; i <1; i++) {
			sometable[a - 'a' + 1 + i][b - 'a' + 1] = '*';
		}
		break;
	}
	}
}
void ShowBoard(char(&player1)[11][11]) {
	for (int i = 0; i < 11; i++) {
		for (int j = 0; j < 11; j++) {
			cout << player1[i][j] << ' ';
		}
		cout << endl;
	}
	cout << endl;

}
void Filling(char(&player1)[11][11]) {
	char a, b, c;
	ShowBoard(player1);
	cout << "Enter coordinates and directons for 4 size(r for right and d for down)"<< endl;
	cin >> a >> b >> c;
	Four(player1,a,b,c);
	ShowBoard(player1);
	cout << "Enter coordinates and directons for 3 size(r for right and d for down)" << endl;
	cin >> a >> b >> c;
	Three(player1, a, b, c);
	ShowBoard(player1);
	cout << "Enter coordinates and directons for 3 size(r for right and d for down)" << endl;
	cin >> a >> b >> c;
	Three(player1, a, b, c);

}

int main() {
	// заполнение
	char player1[11][11] = {' '}, player2[11][11] = { ' ' };
	BeforeGame(player1,player2);
	Filling(player1);
	
	
	for (int i = 0; i < 11; i++) {
		for (int j = 0; j < 11; j++) {
			cout << player1[i][j] << ' ';
		}
		cout << "    ";
		for (int j = 0; j < 11; j++) {
			cout << player2[i][j] << ' ';
		}
		cout << endl;
	}
	


	return 0;
}