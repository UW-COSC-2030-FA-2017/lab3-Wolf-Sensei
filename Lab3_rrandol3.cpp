// Sum.cpp
// Robert Randolph
// COSC 2030, Section 10
// Lab03
// September 25, 2017

// Lab Questions/Answers
// 2) You can detect an overflow if the number is smaller then it should be, or if the value turns negative.
//		Values 256 and above for 'n' for type 'short' produce an overflow.
// 3) Values 65536 and above for 'n' for type 'long' produce an overflow.
// 4) You can detect an overflow if the number is smaller then it should be, if the value turns negative, or
//		if the value that is retuned is "inf".
//		Values 35 and above for 'n' for type 'float' produce an overflow.
// 5) Values 171 and above for 'n' for type 'double' produce an overflow.
// 6) Values 10 and above for 'n' for type 'float' produce an overflow.
//		Values facterable by 4 above 6 up to 20 for 'n' for type 'double' produce an overflow.
// 7) The error occurs when i = 4.4 and the condition results as true and prints out i even though it shouldn't
//		because floats aren't exact enough.
//		When the float was changed into a double the condition worked and the 4.4 wasn't printed.

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

// Functions
long computeSum(long n);
double computeFactoral(long n);
double computeInverseSum(double n);

int main()
{
	long sum(0);
	long sumN(0);

	double factoral(0);
	long factoralN(0);

	double inverseSum(0);
	double inverseSumN(0);

	// Sum Function
	cout << "===================================" << endl;
	cout << "Give me a number for the sum 1 to n" << endl;
	cin >> sumN;

	sum = computeSum(sumN);

	cout << "\nSum from 1 to " << sumN << " is: " << sum << endl << endl;

	// Factoral Function
	cout << "===================================" << endl;
	cout << "Give me a number for the factoral n" << endl;
	cin >> factoralN;

	factoral = computeFactoral(factoralN);

	cout << "\nFactoral " << factoralN << "! is: " << factoral << endl << endl;

	// Inverse Sum Function
	cout << "===================================" << endl;
	cout << "Give me a number for the sum inverse 1/n n times -1" << endl;
	cin >> inverseSumN;

	inverseSum = computeInverseSum(inverseSumN);

	cout << "\nInverse sum of 1/n " << inverseSumN << " times -1 is: " << inverseSum << endl << endl;

	// 7) Puzzle Function
	cout << "===================================" << endl;
	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl;
	}

	return 0;
}

// 1) Sum Function from 1 to n
long computeSum(long n)
{
	long sum(0);

	for (long i(1); i <= n; i++)
	{
		sum += i;
	}

	return sum;
}

// 4) Factoral function from 1 to n
double computeFactoral(long n)
{
	double sum(1);

	for (long i(1); i <= n; i++)
	{
		sum *= i;
	}

	return sum;
}

// 6) Inverse Sum of 1/n n times
double computeInverseSum(double n)
{
	double sum(0);
	double ratio(1 / n);

	for (int i(0); i < n; i++)
	{
		sum += ratio;
	}

	return (sum - 1);
}