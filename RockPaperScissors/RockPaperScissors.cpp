

#include <iostream>
#include <ctype.h>
#define RPS ;;

using namespace std;

int main ()
{
	enum Options { Rock, Paper, Scissors };
	char choice, playAgain;
	int compChoice;
	bool quit = false;
	
	for(RPS)
	{
        if (quit)
        break;
		{
			cout << "\n Pick your weapon: \n (R) Rock \n (P) Paper \n (S) Scissors \n (Q) Quit ";
			cin >> choice;
			choice = tolower(choice);
			compChoice = rand() % 3;
            
			if (choice == 'q')
			{
				quit = true;
				break;
			}
            
			switch(compChoice)
			{
                case Rock:
                    if (choice == 'r')
                        cout << "Computer chose Rock. It's a tie." << endl;
                    if (choice == 'p')
                        cout << "Computer chose Rock. You win!" << endl;
                    if (choice == 's')
                        cout << "Computer chose Rock. You lose." << endl;
                    
                    break;
                case Paper:
                    if (choice == 'r')
                        cout << "Computer chose Paper. You lose" << endl;
                    if (choice == 'p')
                        cout << "Computer chose Paper. It's a tie." << endl;
                    if (choice == 's')
                        cout << "Computer chose Paper. You win!" << endl;
                    
                    break;
                case Scissors:
                    if (choice == 'r')
                        cout << "Computer chose Scissors. You win!" << endl;
                    if (choice == 'p')
                        cout << "Computer chose Scissors. You lose." << endl;
                    if (choice == 's')
                        cout << "Computer chose Scissors. It's a tie." << endl;

                    break;
                    }
            
			cout << "Would you like to play again? \n (Y) for Yes, or (N) for No.: ";
			cin >> playAgain;
			playAgain = tolower(playAgain);
			
			switch(playAgain)
			{
                case 'y':
                    break;
                case 'n':
                    quit = true;
                    break;
                default:
                    cout << "Invalid choice! Restarting game.";
                    for(RPS)
                    break;
			}
			}
		}
        return 0 ;
	}

