#include <iostream>
#include <time.h>
using namespace std;
int Guess(int);
int main()
{
	int Num,Round;
	srand(time(NULL));
	Num =1 + rand() % 10  ;

	cout<<"###Welcome to guessing number game###"<<endl;
	cout<<"Secret number has been chosen "<< Num <<endl;
	
	Round = Guess(Num);
	cout<<"The secret number is"<<endl;
	cout<<"You made "<<Round<<" guesses"<<endl;

}
int Guess(int Num)
{
	int input, Round = 0;
	while(true)
{
	cout<<"Guess the number (1 to 10):";
	cin>>input;

	if(input < Num) 
		cout<<"The secret number is lower"<<endl;
	
	else if (input > Num)
		cout<<"The secret number is higher"<<endl;

	else
	{
		cout<<"Congratulations!"<<endl;
		break;
	}
	Round++;
}
	return Round;
}
