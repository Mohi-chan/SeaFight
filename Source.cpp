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
void Four() {

}
int main() {
	// заполнение
	char player1[11][11] = {' '}, player2[11][11] = { ' ' };
	BeforeGame(player1,player2);
	char a, b, c;
	cin >> a >> b >> c;
	player1[a - 'a'+1][b - 'a'+1] = c;
	for (int i = 0; i < 11; i++) {
		for (int j = 0; j < 11; j++) {
			cout << player1[i][j] << ' ';
		}
		cout << endl;
	}
	


	return 0;
}