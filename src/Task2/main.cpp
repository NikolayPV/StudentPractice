#include <bits/stdc++.h>
#include <vector>

/*******************************************************************
* 
*   Note this task is loaded from 
*   https://www.hackerrank.com/challenges/insertionsort1/problem
*
********************************************************************/ 

using namespace std;

void insertionSort1(int size, vector <int> arr);

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
//   for(int j = 0; j < ARRAY_SIZE; ++j) // Не понимаю почему он не выводит здесь.
//		cout << array[j] << ' ';
   return 0;
}

void insertionSort1(int vectorSize, vector <int> arr) 
{
	for (int i = 0; i < vectorSize; ++i)
	{
		int currentElemet = i;
		while (currentElemet > 0 && arr[currentElemet - 1] > arr[currentElemet]) 
		{
			swap(arr[currentElemet], arr[currentElemet - 1]);
			--currentElemet;
		}
		
	} 
//	for(int j = 0; j < vectorSize; ++j) 	// Если доваить вывод в этом месте выводится отсортированный массив. 
//		cout << arr[j] << ' ';
}

