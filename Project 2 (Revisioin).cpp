// Program Name:		GuessingGame.cpp
// Course:				CSE1311/001
// Name:				Christopher Dennis
// Assignment:			Guessing Game
// Date:				October 3, 2017
/* This program plays the Hi-Lo guessing game with numbers 1 to 100 while telling the user if they have the answer right or wrong. */

#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;
int main()

{
	srand(time(0));
	int guess;
	string answer;
	
	cout<<"Welcome to the Guessing Game"<<endl;
	
	do
	{
		int count=0;
		int computer = (rand()%100+1);
		cout<<"Enter a number between 1 and 100 OR enter -1 to quit: ";
		cin>>guess;
	
		do
		{
			count ++;
			if (guess==-1)
				break;
			else if (guess<=0||guess>100)
			{
				cout<<"Out of range. \nEnter a number between 1 and 100 OR enter -1 to quit: " <<endl;
			}
			else if (guess>computer)
			{
				cout<<"This number is too high. Try again: " <<endl;
				cin>> guess;
			}
			else 
			{
				cout<<"This answer is too low. Try again: "<<endl;
				cin >> guess;
			}
		}
		while (guess!=computer);
		
		if (guess==-1)
		{
			cout<<"You have choosen to exit the game early"<<endl;
			cout<<"You tried "<<count<<" times"<<endl;
		}
		else
			cout<<"Congradualtions, you got it "<<computer<<" in "<<count<<" tries!"<<endl;
	cout<<"To continue playing or quit, type 'Yes' OR 'No'- ";
		cin>>answer;
	}
	while(answer=="yes"||answer=="Yes"||answer=="YES");
	
	cout << "This program was coded by Christopher Dennis" << endl;	// Christopher Dennis

	cin.get(); 
	return 0;
}

