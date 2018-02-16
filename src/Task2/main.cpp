#include <bits/stdc++.h>
#include <vector>

/*******************************************************************
* 
*   Note this task is loaded from 
*   https://www.hackerrank.com/challenges/insertionsort1/problem
*
********************************************************************/ 

using namespace std;

void insertionSort1(int size, vector <int> &arr);

int main() 
{
	unsigned int ARRAY_SIZE;
   cin >> ARRAY_SIZE;
   vector<int> array(ARRAY_SIZE);
   for(int i = 0; i < ARRAY_SIZE; ++i)
	{
		cin >> array[i];
   }
   insertionSort1(ARRAY_SIZE, array);
   for(int j = 0; j < ARRAY_SIZE; ++j) 
		cout << array[j] << ' ';
   return 0;
}

void insertionSort1(int vectorSize, vector <int> &arr) 
{
	int cutedElement = arr.back();
	int currentElemet = vectorSize - 2;
	while(cutedElement <= arr.at(currentElemet))
	{
		arr[currentElemet + 1] = arr[currentElemet];
		--currentElemet;
		for(int j = 0; j < vectorSize; ++j) 	
		cout << arr[j] << ' ';
		cout << endl;
	}
	arr[currentElemet + 1] = cutedElement;
}

