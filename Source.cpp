#include <iostream>
using namespace std;
int calculatesum(int arr[])
{
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum = sum + arr[i];
	}
	return sum;
}
int main()
{
	int marks[5];
	cout << "enter the marks of 5 subject :" << endl;
	for (int j = 0; j < 5; j++)
	{
		cout << "subject" << "i+1" << ":";
		cin >> marks[j];
	}
	int total = calculatesum(marks);
	cout << "total sum of marks=" << total << endl;
	return 0;
}
