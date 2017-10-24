/********************************************************************* 
 *** Program name: Lab1 - readMatrix
 *** Author: Emmet Cooke
 *** Date: 9/23/2017
 *** Description: This program asks the user to choose a matrix size
 *** and then fill in the values within. It then prints the matrix and
 *** it's determinant.
 **********************************************************************/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include "readMatrix.hpp"
#include "determinant.hpp"
#include "validateInput.hpp"

int main()
{
	int **matrix = NULL;
	int choice;
	string inputCheck;

	// This do-while loop checks to make sure that a valid array size
	// has been chosen. Otherwise, it loops and asks them to choose
	// again
	do
	{
		cout << "What size matrix would you like?" << endl;
		cout << "1. 2x2" << endl;
		cout << "2. 3x3" << endl;
		getline(cin, inputCheck);

		if (checkStringToInt(inputCheck))
		{
			choice = stoi(inputCheck) + 1;
		}
		else
		{
			choice = 0;
		}

		if (choice == 2 || choice == 3)			// Creates the dynamic array based
		{										// upon the chosen size
			matrix = new int*[choice];
			for (int i = 0; i < choice; i++)
			{
				matrix[i] = new int[choice];
			}
			readMatrix(matrix, choice);
			cout << "Determinant: ";
			cout << determinant(matrix, choice) << endl;
		}
		else									// If the correct size is not chosen
		{										// display an error message
			cout << "Please choose either a 2x2 or 3x3 array." << endl << endl;
		}
	} while ((choice != 2) && (choice != 3));	// Continue looping until a valid choice is chosen

	// Free the allocated memory
	for (int i = 0; i < choice; i++)
	{
		delete[] matrix[i];
	}
	delete[] matrix;

	return 0;
}
