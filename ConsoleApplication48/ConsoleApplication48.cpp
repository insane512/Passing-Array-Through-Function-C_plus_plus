// ConsoleApplication48.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;




void g(int arr[], int size)
{
	cout << "This Is From A Function: " << endl;
	for (int i = 0; i < size; i++)
	{
		
		cout << arr[i] << endl;

	}

}



int main()
{

	
	int x[5] = { 1,2,3,4,5 };
	
	

	g(x,5);

	cout << "This Is From Main: " << endl;

	for(int t : x)
	{
		cout << t << endl;
	
	}
	


	
	
	
	
	
	
	
	
}
