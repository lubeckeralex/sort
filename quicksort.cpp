#include<iostream>
using namespace std;

//http://www.algolist.net/Algorithms/Sorting/Quicksort
//java - https://www.youtube.com/watch?v=PrxjH8R-kE8

void quickSort(int arr[], int left, int right);

int main()
{
	int pivot;
	int arr[10] = {1,4,3,7,5,66,7,8,88,45};
	quickSort(arr, 0, 9);

	for(int i = 0; i<10; i++)
	{
		cout << arr[i] << endl;
	}

}




void quickSort(int arr[], int left, int right) {

	int leftLoc = left;
	int rightLoc = right;
	int tmp;
	
	int pivot = arr[(left + right) / 2];

 

      /* partition */

      while (leftLoc <= rightLoc) {

            while (arr[leftLoc] < pivot)
			{
				leftLoc++;
			}
            while (arr[rightLoc] > pivot)
			{
				rightLoc--;
			}

            if (leftLoc <= rightLoc) {

                  tmp = arr[leftLoc];

                  arr[leftLoc] = arr[rightLoc];

                  arr[rightLoc] = tmp;

                  leftLoc++;

                  rightLoc--;

            }

      }

 

      /* recursion */

	if (left < rightLoc)
	{
		quickSort(arr, left, rightLoc);
	}

	if (leftLoc < right)
	{
	quickSort(arr, leftLoc, right);
	}
	

}
