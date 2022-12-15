//20200302
//S9
//abdallah saleh
#include <iostream>
#include <string>
using namespace std;
int kilo(int x)
{

	return x * 0.775;
}
int main()

{
	int num_of_days, Start_time, End_time, Trip_expenses, pay_of_Ytravel, transport, kilometer, cost_of_barking, c_conference, Residence, pay_of_meal;
	int barking, y_Residence, breakfast, cost_b, cost_l, cost_d;
	int cost_total = 0;
	int cost_food = 0;
	int total = 0;
	int conference, departure, departure1, lunch, y_day, departure2, dinner;


	cout << "please enter number of day" <<"\n";    // the day
	cin >> num_of_days;
	if (num_of_days < 1) {
		cout << "please enter valid value" << "\n";            //if -number
		cin >> num_of_days;
	}


	cout << "please enter the time of the journey began" << "\n";
	cin >> Start_time;
	if (Start_time < 1 && Start_time>12) {
		cout << "please enter valid value" <<"\n";
		cin >> Start_time;
	}


	cout << "please enter the time the journey ended" <<"\n";
	cin >> End_time;
	if (End_time < 1 && End_time>12) {
		cout << "please enter the valid value" <<"\n";
		cin >> End_time;
	}


	cout << "choose your transportation  1- own car  2- taxi  3- plan  4- another car" <<"\n";   
	cin >> transport;
	if (transport == 1)
	{
		cout << "please enter number of kilometer" << "\n";
		cin >> kilometer;
		cout << "you pay:" << kilo(kilometer) << "\n";
	}
	else if (transport == 2) {
		cout << "enter the cost" << "\n";
		cin >> pay_of_Ytravel;

		if (pay_of_Ytravel < 1) {
			cout << "please enter valid value" << "\n";
			cin >> pay_of_Ytravel;
		}



		else if (pay_of_Ytravel > 100)
		{

			int cost_differenece = 0;
			cost_differenece = pay_of_Ytravel - 100;
			cost_total += cost_differenece;
		}
	}

	else
	{
		cout << "enter the cost of your travel" <<"\n";
		cin >> pay_of_Ytravel;
	}


	cout << "have you entered the parking lot or not? 1-yes  2-no:" << "\n";
	cin >> barking;
	
	if (barking == 1)
	{
		cout << "enter the cost" << "\n";
		cost_of_barking = 25;
		int cbarking_y;
		cin >> cbarking_y;
		if (cbarking_y > 25) {
			int cost_differenece2 = 0;
			cost_differenece2 = cbarking_y - cost_of_barking;
			cost_total += cost_differenece2;
		}
		total = pay_of_Ytravel + cbarking_y;
	}


	cout << "did you attend a conference or not?  1-yes  2-no:" << "\n";
	cin >> conference;
	if (conference == 1)
	{
		cout << "enter the cost" << "\n";
		cin >> c_conference;
		total += c_conference;

		cout << "what is the price of the accommodation?:" << "\n";
		cin >> y_Residence;
		Residence = 500;
		if (y_Residence > 500) {
			int cost_difference3 = 0;
			cost_difference3 = y_Residence - Residence;
			cost_total += cost_difference3;
		}
		total += y_Residence;
	}
	cout << "what day are you on?  1-the first day  2-the last day:" << "\n";
	cin >> y_day;
	//the loop op day
	if (y_day == 1)
	{
		cout << "did you departure before 8 am ? 1-yes  2-no:" << "\n";
		cin >> departure;
		if (departure == 1)
		{
			cout << "did you take your breakfast? 1-yes  2-no:" <<"\n";
			cin >> breakfast;
			if (breakfast == 1)
			{
				cout << "enter the cost:" << endl;
				cin >> cost_b;
				if (cost_b > 40)

				{
					int cost_difference4 = 0;

					cost_difference4 = cost_b - 40;
					cost_food += cost_difference4;
				}
				total += cost_b;
			}
		}
		else if (departure == 2)
		{
			cout << "did you departure before 12 pm? 1-yes  2-no:" << endl;
			cin >> departure1;
			if (departure1 == 1)

			{
				cout << "did you take your lunch? 1-yes  2-no:" << endl;
				cin >> lunch;
				if (lunch == 1)
				{
					cout << "enter the cost" << endl;
					cin >> cost_l;
					if (cost_l > 60)
					{
						int cost_difference5 = 0;
						cost_difference5 = cost_l - 60;
						cost_food += cost_difference5;
					}
					total += cost_l;
				}
			}
		}
		else
		{
			cout << "did you departure before 6 pm?  1-yes  2-no:" << endl;
			cin >> departure2;
			if (departure2 == 1)
			{
				cout << "did you take your dinner? 1-yes  2-no:" << endl;
				cin >> dinner;
				if (dinner == 1)
				{
					cout << "enter the cost" << endl;
					cin >> cost_d;
					if (cost_d > 80)
					{
						int cost_difference6;
						cost_difference6 = cost_d - 80;
						cost_food += cost_difference6;


					}
					total += cost_d;
				}
			}
		}
	}
	if (y_day == 2)

	{
		cout << "did you departure after 9 am and before 1 pm ? 1-yes  2-no:" << endl;
		cin >> departure;
		if (departure == 1)
		{
			cout << "did you take your breakfast? 1-yes  2-no:" << endl;
			cin >> breakfast;
			if (breakfast == 1)
			{
				cout << "enter the cost:" << endl;
				cin >> cost_b;
				if (cost_b > 40)

				{
					int cost_difference4 = 0;
					int cost_food = 0;
					cost_difference4 = cost_b - 40;
					cost_food += cost_difference4;
				}
				total += cost_b;
			}
		}
		else if (departure == 2)
		{
			cout << "did you departure after 1 pm and before 7 pm? 1-yes  2-no:" << endl;
			cin >> departure1;
			if (departure1 == 1)

			{
				cout << "did you take your lunch? 1-yes  2-no:" << endl;
				cin >> lunch;
				if (lunch == 1)
				{
					cout << "enter the cost" << endl;
					cin >> cost_l;
					if (cost_l > 60)
					{
						int cost_difference5 = 0;
						cost_difference5 = cost_l - 60;
						cost_food += cost_difference5;
					}
					total += cost_l;
				}
			}
		}
		else
		{
			cout << "did you departure after 7 pm?  1-yes  2-no:" << endl;
			cin >> departure2;
			if (departure2 == 1)
			{
				cout << "did you take your dinner? 1-yes  2-no:" << endl;
				cin >> dinner;
				if (dinner == 1)
				{
					cout << "enter the cost" << endl;
					cin >> cost_d;
					if (cost_d > 80)
					{
						int cost_difference6;
						cost_difference6 = cost_d - 80;
						cost_food += cost_difference6;


					}
					total += cost_d;
				}
			}
		}
	}
	cout << "total expenses=" << total << endl << "total refund amount=" << cost_total << endl << "the price of the meals you eat=" << cost_food << endl;












	return 0;
}
