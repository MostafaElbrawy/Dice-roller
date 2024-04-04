#include <iostream>
#include <cstdlib>
#include <ctime>
#include<limits>
using namespace std;


bool AnotherGame() {


    char again;

    cout << "\nDo you want to play again? (Y/N) : ";
    cin >> again;

    do {


        if (again == 'y' || again == 'Y')
        {
            system("cls");
            return true;
        }

        else if (again == 'n' || again == 'N')
        {
            cout << "\nSee you in the next game :) " << endl;
            exit(0);
        }

        else
        {
            do {
                cout << "\nWrong choice, please choose (Y/N) : ";
                cin >> again;

            } while (again != 'y' && again != 'Y' && again != 'n' && again != 'N');

        }

    } while (true);

}


void Game() {

	bool again;
	int face1, face2;
	srand(time(0));

	do {

		cout << "Press enter to roll two dice\n";
		while (cin.get() != '\n');

		
		face1 = rand() % 6 + 1;
		face2 = rand() % 6 + 1;

		cout << "DICE 1 FACE = " << face1 << " !\n";
		cout << "DICE 2 FACE = " << face2 << " !\n";

		again = AnotherGame();

		cin.ignore(numeric_limits<streamsize>::max(), '\n');

	} while (again);

}


void StartGame() {

	cout << "WELCOME TO DICE ROLLER GAME :) \n";
	cout << "***********************************************\n";
	Game();

}


int main()
{
	StartGame();
	return 0;


}

