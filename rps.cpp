
/* Name: Andrew Stade
Date: 3/1/2019
Section: 0004
Assignment: Homework #4 (Practice with Random Number Generation)
Due Date: 3/1/2019
About this project: It will consist of writing a couple functions and allowing 
the student to gain practice and understanding of random number generation, 
pass by reference, and general coding skills dealing with functions, loops, 
and conditionals.
Assumptions: The user will only input variables.

All work below was performed by Andrew Stade */

#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;


void playRPS (char choice, char& result);
bool GameResults (int w, int l, int t);

int main()
{
	int numWINS = 0; int numLOSES = 0; int numTIES = 0;
	char input = 'a';
	char result = '\0';
	srand( time(0) );
	
	
	cout << "\nWelcome to COP 3363 ROCK PAPER SCISSORS!" << endl;
	cout << endl;
	
	do
	{
		cout << "Please select:" << endl;
		cout << "Rock(r), Paper(p), or Scissors(s)?" << endl;
		cout << "Or enter q to quit --> ";
		
		cin >> input; // This users choice of rock paper or scissors.
		
		
		
		if (input != 'q' && input != 'Q')
		{
			playRPS (input,result); // The function runs the computers answer.
			
			if (result == 'w') /* Eric it took me 4 hours to realize
				           I missed the double equals signs.  */
			{
				numWINS++;
			}		
		
			if (result == 'l')
			{
				numLOSES++;
			}
		
			if (result == 't')
			{
				numTIES++;
			}
		}
		else if (input != 'r' && input != 's' && input != 'p')
		{
			cout << "Please enter r,p, or s" << endl;
			cout << endl;
		} // Enables the user to keep playing.
	

	
	} while (input != 'q' && input != 'Q'); /* Keeps the user in the function
						unless q is stated. */
	

	GameResults (numWINS,numLOSES,numTIES);

	return 0;
}

void playRPS (char choice, char& output)
{
	int CPUchoice; 
	
	CPUchoice = rand() % 3 + 1; // The equation only gives values from 1-3
				    // Rock = 1, Paper = 2, and Scissors 3 
		
	if (CPUchoice == 1 && choice == 'r') 
	{
		cout << "The computer chose... ROCK!" << endl;
		cout << "You also chose ROCK!" << endl;
		cout << "You TIED!" << endl;
		cout << endl;
		output = 't';
	}	
	
	if (CPUchoice == 2 && choice == 'r')
	{
		cout << "The computer chose... PAPER!" << endl;
		cout << "You chose ROCK!" << endl;
		cout << "You LOSE!" << endl;
		cout << endl;
		output = 'l';
	}
	
	if (CPUchoice == 3 && choice == 'r')
	{
		cout << "The computer chose... SCISSORS!" << endl;
		cout << "You chose ROCK!" << endl;
		cout << "You WIN!" << endl;
		cout << endl;
		output = 'w'; 	
	}
	
	if (CPUchoice == 1 && choice == 'R') 
	{
		cout << "The computer chose... ROCK!" << endl;
		cout << "You also chose ROCK!" << endl;
		cout << "You TIED!" << endl;
		cout << endl;
		output = 't';
	}	
	
	if (CPUchoice == 2 && choice == 'R')
	{
		cout << "The computer chose... PAPER!" << endl;
		cout << "You chose ROCK!" << endl;
		cout << "You LOSE!" << endl;
		cout << endl;
		output = 'l';
	}
	
	if (CPUchoice == 3 && choice == 'R')
	{
		cout << "The computer chose... SCISSORS!" << endl;
		cout << "You chose ROCK!" << endl;
		cout << "You WIN!" << endl;
		cout << endl;
		output = 'w'; 	
	}
	
	if (CPUchoice == 1 && choice == 'p') 
	{
		cout << "The computer chose... ROCK!" << endl;
		cout << "You chose PAPER!" << endl;
		cout << "You WIN" << endl;
		cout << endl;
		output = 'w';
	}	
	
	if (CPUchoice == 2 && choice == 'p')
	{
		cout << "The computer chose... PAPER!" << endl;
		cout << "You also chose PAPER!" << endl;
		cout << "You TIED!" << endl;
		cout << endl;
		output = 't';
	}
	
	if (CPUchoice == 3 && choice == 'p') 
	{
		cout << "The computer chose... SCISSORS!" << endl;
		cout << "You chose PAPER!" << endl;
		cout << "You LOSE!" << endl;
		cout << endl;
		output = 'l'; 	
	}
	
	if (CPUchoice == 1 && choice == 'P') 
	{
		cout << "The computer chose... ROCK!" << endl;
		cout << "You chose PAPER!" << endl;
		cout << "You WIN" << endl;
		cout << endl;
		output = 'w';
	}	
	
	if (CPUchoice == 2 && choice == 'P')
	{
		cout << "The computer chose... PAPER!" << endl;
		cout << "You also chose PAPER!" << endl;
		cout << "You TIED!" << endl;
		cout << endl;
		output = 't';
	}
	
	if (CPUchoice == 3 && choice == 'P') 
	{
		cout << "The computer chose... SCISSORS!" << endl;
		cout << "You chose PAPER!" << endl;
		cout << "You LOSE!" << endl;
		cout << endl;
		output = 'l'; 	
	}
	
	if (CPUchoice == 1 && choice == 's') 
	{
		cout << "The computer chose... ROCK!" << endl;
		cout << "You chose SCISSORS!" << endl;
		cout << "You LOSE!" << endl;
		cout << endl;
		output = 'l';
	}	
	
	if (CPUchoice == 2 && choice == 's')
	{
		cout << "The computer chose... PAPER!" << endl;
		cout << "You chose SCISSORS!" << endl;
		cout << "You WIN!" << endl;
		cout << endl;
		output = 'w';
	}
	
	if (CPUchoice == 3 && choice == 's') 
	{
		cout << "The computer chose... SCISSORS!" << endl;
		cout << "You also chose SCISSORS!" << endl;
		cout << "You TIED!" << endl;
		cout << endl;
		output = 't'; 	
	}
	
	if (CPUchoice == 1 && choice == 'S') 
	{
		cout << "The computer chose... ROCK!" << endl;
		cout << "You chose SCISSORS!" << endl;
		cout << "You LOSE!" << endl;
		cout << endl;
		output = 'l';
	}	
	
	if (CPUchoice == 2 && choice == 'S')
	{
		cout << "The computer chose... PAPER!" << endl;
		cout << "You chose SCISSORS!" << endl;
		cout << "You WIN!" << endl;
		cout << endl;
		output = 'w';
	}
	
	if (CPUchoice == 3 && choice == 'S') 
	{
		cout << "The computer chose... SCISSORS!" << endl;
		cout << "You also chose SCISSORS!" << endl;
		cout << "You TIED!" << endl;
		cout << endl;
		output = 't'; 	
	}
	
}

bool GameResults (int w, int l, int t)
{
	double wp = 0.00;
	double lp = 0.00;
	double tp = 0.00;
	int games = 0;
	
	games = w+t+l;
	if (games != 0)
	{
	wp = w * 100.00/games; // This equations give the percentage of the wins
	lp = l * 100.00/games; // This equations give the percentage of the loses
	tp = t * 100.00/games; // This equations give the percentage of the ties
	}

	cout << fixed << showpoint << setprecision(2);
	
	cout << endl;
	cout << "                Totals          Percentage" << endl;
	cout << "------------------------------------------" << endl;
	cout << "Wins           " << w << "               " << wp << "%" << endl;
	cout << "Losses         " << l << "               " << lp << "%" << endl;
	cout << "Ties           " << t << "               " << tp << "%" << endl;
	cout << "------------------------------------------" << endl;
	cout << "Total games played: " << games << endl; 
	cout << endl; 
	
	if (w > l)
	{
		cout << "You played great!" << endl;
		cout << "Thanks for playing!" << endl;
		cout << endl;
		return true;
	}
	else 
	{
		cout << "Meh..." << endl;
		cout << "Thanks for playing!" << endl;
		cout << endl;
		return false;
	}
	
}
