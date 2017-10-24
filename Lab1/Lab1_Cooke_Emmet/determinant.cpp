/*************************************************************
* Author: Emmet Cooke
* Date: 9/24/2017
*************************************************************/
/*************************************************************
* Description: This function takes in a pointer to an array 
* and the size of the array. It returns the determinant of the
* passed in matrix as an int.
*************************************************************/
int determinant(int **array, int size)
{
	// returns the determinant if the size of the array is 2x2
	if (size == 2)
		return (array[0][0] * array[1][1]) - (array[1][0] * array[0][1]);
	// returns the determinant if the size of the array is 3x3
	// no other size will be sent to this function from main
	return (array[0][0] * ((array[1][1] * array[2][2]) - (array[2][1] * array[1][2])))
	- (array[0][1] * ((array[1][0] * array[2][2]) - (array[2][0] * array[1][2])))
	+ (array[0][2] * ((array[1][0] * array[2][1]) - (array[2][0] * array[1][1])));
}