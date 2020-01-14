#include <string>
#include <iostream>
#include <stdlib.h>
//importing librarys to clear console
using namespace std;

class Quizgame {


public:
	// Round Failed class for ending / restarting the game
	void roundFailed(int a) {
		system("cls"); //clear console
		cout << "Congrats, you failed but you made it to round " << a << endl;
		system("pause"); //wait for userinput
		startRound(1); // start from beginning
	}


	// function to check if the result is corrent and go to next round / old one
	void checkResult(int a, int b, int c) {

		if (a == b) { //compare if result is useranswer
			Quizgame quiz; 
			quiz.startRound(c + 1);
		}
		else
		{
			roundFailed(c);
		}

	}

	// function for starting a round / printing everything out
	void startRound(int a) {
		system("cls");
		int rightAnswer;
		int userAnswer;
		int currentRound;
		switch (a) // simple switch statement to identify wich round were in
		{
		case 1:

			rightAnswer = 2;
			currentRound = 1;
			cout << "   The longest river in the world is the ? \n" << endl;
			cout << "   1: Rhein                          2: Niel" << endl;
			cout << "   3. Donau                          4: Elster " << endl;
			cout << "########### Please Enter You answer ###########" << endl;
			cin >> userAnswer;

			checkResult(userAnswer, rightAnswer, currentRound);
		




			break;
		case 2:
			rightAnswer = 2;
			currentRound = 2;
			cout << "   The worlds largest diamond producing country is? \n" << endl;
			cout << "   1: Germany                         2: Africa" << endl;
			cout << "   3. China                           4: Norway" << endl;
			cout << "########### Please Enter You answer ###########" << endl;
			cin >> userAnswer;

			checkResult(userAnswer, rightAnswer, currentRound);

			break;
		case 3:
			rightAnswer = 4;
			currentRound = 3;
			cout << "   The longest highway in the world has a length of ? \n" << endl;
			cout << "   1: About 4600 km                        2: About 1520 km" << endl;
			cout << "   3. About 20000 km                        4: About 8000 km" << endl;
			cout << "########### Please Enter You answer ###########" << endl;
			cin >> userAnswer;

			checkResult(userAnswer, rightAnswer, currentRound);

			break;
		case 4:
			rightAnswer = 3;
			currentRound = 4;
			cout << "   The Worlds oldest known country is? \n" << endl;
			cout << "   1: Sizily                         2: Arizona" << endl;
			cout << "   3. Damascus                       4: Quenzhen" << endl;
			cout << "########### Please Enter You answer ###########" << endl;
			cin >> userAnswer;

			checkResult(userAnswer, rightAnswer, currentRound);

			break;
		case 5:
			
			cout << "   Congratulations! You made it" << endl;
			cout << "   If this would be a gameshow you would have won a million" << endl;
			cout << "   But this is just a little c++ demo" << endl;
			cout << "###############Hope you enjoyed it###############" << endl;
			exit(0);

			break;
		default:

			break;
		}


	}

};


int main()
{


	// simply start round 1
	Quizgame quiz;
	
	quiz.startRound(1);

	return 0;

}

