//20200302
//S9
//abdallah saleh

#include <iostream>
#include<string>
using namespace std;

void welcome(string Massage)
{
	cout << "############################" << endl;
	cout << Massage << endl;
	cout << "########################### " << endl; ;
}


string OldSystem(string FristCandidate, string SecondCandidate, string ThirdCandidate, int VoterNumber)
{
	welcome("welcome to the the national teams program");
	//welcome massege
	string name;
	int sum1 = 0, sum2 = 0, sum3 = 0;


	for (int i = 0; i < VoterNumber; i++)
	{
		cout << "please enter the elector you want to give him your vote \n";
		cin >> name;
		if (name == FristCandidate)
		{
			sum1 = sum1 + 1;
		}
		else if (name == SecondCandidate)
		{

			sum2 = sum2 + 1;
		}
		else if (name == ThirdCandidate)
		{
			sum3 = sum3 + 1;
		}

	}
	if (sum3 > sum1 && sum3 > sum2)
	{
		cout << "the winner in the election by the old System is :" << ThirdCandidate << endl;
	}
	else if (sum2 > sum1 && sum2 > sum3)
	{
		cout << "the winner in the election by the old System  is :" << SecondCandidate << endl;
	}
	else if (sum1 > sum3 && sum1 > sum2)
	{
		cout << "the winner in the election by the old System  is :" << FristCandidate << endl;
	}
	return name;
}


string NewSystem(string FristCandidate, string SecondCandidate, string ThirdCandidate, int VoterNumber)
{
	welcome("welcome to the the national teams program by New system ");
	//welcome in new system
	string name1, name2, name3;
	int sum1 = 0, sum2 = 0, sum3 = 0;


	for (int i = 0; i < VoterNumber; i++)
	{
		cout << "please enter 3 candidates you want to give him your vote in order " << endl;
		cin >> name1 >> name2 >> name3;
		if (name1 == FristCandidate && name2 == SecondCandidate && name3 == ThirdCandidate)
		{
			sum1 = sum1 + 3;
			sum2 = sum2 + 2;
			sum3 = sum3 + 1;
		}
		else if (name2 == FristCandidate && name1 == SecondCandidate && name3 == ThirdCandidate)
		{

			sum1 = sum1 + 2;
			sum2 = sum2 + 3;
			sum3 = sum3 + 1;
		}
		else if (name2 == FristCandidate && name3 == SecondCandidate && name1 == ThirdCandidate)
		{
			sum1 = sum1 + 2;
			sum2 = sum2 + 1;
			sum3 = sum3 + 3;
		}
		else if (name1 == FristCandidate && name3 == SecondCandidate && name2 == ThirdCandidate)
		{
			sum1 = sum1 + 3;
			sum2 = sum2 + 1;
			sum3 = sum3 + 2;
		}
		else if (name3 == FristCandidate && name2 == SecondCandidate && name1 == ThirdCandidate)
		{
			sum1 = sum1 + 1;
			sum2 = sum2 + 2;
			sum3 = sum3 + 3;
		}
		else if (name3 == FristCandidate && name1 == SecondCandidate && name2 == ThirdCandidate)
		{
			sum1 = sum1 + 1;
			sum2 = sum2 + 3;
			sum3 = sum3 + 2;
		}

	}
	if (sum3 > sum1 && sum3 > sum2)
	{
		cout << "the winner in the election by the New System is :" << ThirdCandidate << endl;
	}
	else if (sum2 > sum1 && sum2 > sum3)
	{
		cout << "the winner in the election by the New System  is :" << SecondCandidate << endl;
	}
	else if (sum1 > sum3 && sum1 > sum2)
	{
		cout << "the winner in the election by the New System  is :" << FristCandidate << endl;
	}
	return "";
}


int main()
{
	// welcome to the user 
	welcome("welcome to the the national teams program the new election");




	char key = 'x';
	while (key != 'a')
	{
		//ask user to enter three name 
		cout << "-please enter the three name of the candidates: " << endl;
		//clear the name 
		string FristCandidate, SecondCandidate, ThirdCandidate;

		cin >> FristCandidate >> SecondCandidate >> ThirdCandidate;


		//ask user to enter the number of the voter 
		cout << "please enter the number of voter that Participate in the elections: " << endl;
		//clear number of the voter
		int VoterNumber;
		//enter the number   
		cin >> VoterNumber;



		//ask the user if he want to inter by OldSystem or NewSystem
		welcome("if you want to calculate by NewSystem press 1");
		welcome("if you want to calculate by OldSystem press 0");

		int name$;
		cin >> name$;
		if (name$ == 0)
		{
			OldSystem(FristCandidate, SecondCandidate, ThirdCandidate, VoterNumber);
		}
		else if (name$ == 1)
		{
			NewSystem(FristCandidate, SecondCandidate, ThirdCandidate, VoterNumber);
		}
		welcome("please if you want to continue press any key but if you want to end the program press 'x':");

		cin >> key;


	}
}