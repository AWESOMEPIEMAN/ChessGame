#include <iostream>
#include <string>
#include "chess.h"

using namespace std;





int main()
{
	Board b;
	string s;
	bool newgame = true;
	cout << "++++++++++++++++++++" << endl;
	cout << "    CHESS GAME" << endl;
	cout << "++++++++++++++++++++" << endl;
	cout << "Press any key to continue " << endl;
	cout << "-->";
	cin >> s;
	while (newgame) {
		b.setBoard();
		while (b.playGame());
		cout << "Do you want to play again? (y for yes, anything else for no) :  ";
		cin >> s;
		if (s != "y")
			newgame = false;
	}


	return 0;
}
