/*************************************************************
* Author: Emmet Cooke
* Date: 9/24/2017
*************************************************************/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include "validateInput.hpp"
/*************************************************************
 * Description: This function takes in a pointer to an array
 * and the size of the array. It first asks the user to enter
 * values for the different positions of the array, and then
 * it prints them out.
 *************************************************************/
void readMatrix(int **array, int size)
{
	for (int i = 0; i < size; i++)
	{
		// Requests the data for the internal arrays
		for (int j = 0; j < size; j++)
		{
			bool goodInput = true;
			do
			{
				string inputCheck;
				cout << "Please enter a number for position ";
				cout << "(" << i << ", " << j << ")" << ": ";
				cin >> inputCheck;
				if (checkStringToInt(inputCheck))
				{
					goodInput = true;
					array[i][j] = stoi(inputCheck);
				}
				else
				{
					cout << "Please enter an integer." << endl;
					goodInput = false;
				}
			} while (!goodInput);
		}
	}

	// Prints out the array
	for (int i = 0; i < size; i++)
	{
		cout << "[";
		for (int j = 0; j < size; j++)
		{
			// Removes the space and comma from the final number in the row
			if (j == size - 1)
			{
				cout << array[i][j];
			}
			// Prints out the number in the array
			else
			{
				cout << array[i][j] << ", ";
			}
			
		}
		cout << "]" << endl;
	}
}
