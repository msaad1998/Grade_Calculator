#include<iostream>
#include<string>
using namespace std;
int main()
{
	string name;



	int c;
	cout << "enter your name" << endl;
	cin >> name;
	cout << "enter your Course how many you studied " << endl;
	cin >> c;
	string crs[c];
	int marks[c];
	for (int i = 0; i < c; i++)
	{
		cout << "enter your cousre name " << i + 1 << endl;
		cin >> crs[i];
		cout << "Enter marks of this cousre:" << crs[i] << endl;
		cin >> marks[i];



	}
	for (int i = 0; i < c; i++)
	{

		if (marks[i] >= 86 && marks[i] <= 100)
		{
			cout << crs[i] << " your grade is A and grade point is 4.00" << endl;
		}
		if (marks[i] >= 82 && marks[i] < 85)
		{
			cout << crs[i] << " your grade is A- and grade point is 3.67" << endl;
		}
		if (marks[i] >= 78 && marks[i] < 81)
		{
			cout << crs[i] << " your grdae is B+ and grade point is 3.33" << endl;
		}
		if (marks[i] >= 74 && marks[i] <= 77)
		{
			cout << crs[i] << " your grade is B and grade point is 3.00" << endl;
		}
		if (marks[i] >= 70 && marks[i] < 73)
		{
			cout << crs[i] << " your grade is B- and grade point is 2.67" << endl;
		}
		if (marks[i] >= 66 && marks[i] < 69)
		{
			cout << crs[i] << " your grdae is C+ and grade point is 2.33" << endl;
		}
		if (marks[i] >= 62 && marks[i] <= 65)
		{
			cout << crs[i] << " your grade is C and grade point is 2.00" << endl;
		}
		if (marks[i] >= 58 && marks[i] < 61)
		{
			cout << crs[i] << " your grade is c- and grade point is 1.67" << endl;
		}
		if (marks[i] >= 54 && marks[i] < 57)
		{
			cout << crs[i] << " your grdae is D+ and grade point is 1.33" << endl;
		}
		if (marks[i] >= 50 && marks[i] < 53)
		{
			cout << crs[i] << " your grdae is D+ and grade point is 1.33" << endl;
		}
		if (marks[i] < 50)
		{
			cout << crs[i] << " Your Marks is Below Average F and 0.00 \n " << endl;
		}
	}
	int max = 0;
	int min = 0;
	int avg = 0;
	int sum = 0;
	for (int i = 0; i < c; i++)
	{
		if (marks[i] >= max)
		{
			max = marks[i];
		}
		if (marks[i] <= min)
		{
			min = marks[i];
		}
		sum = sum + marks[i];

	}
	avg = sum / c;
	cout << "Highest marks " << max << endl;
	cout << "Lowest marks " << min << endl;
	cout << "Average marks " << avg << endl;



	system("pause");
	return 0;
}