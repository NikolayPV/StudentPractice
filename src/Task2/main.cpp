#include <iostream>
#include <vector>

/*******************************************************************
* 
*   Note this task is loaded from 
*   https://www.hackerrank.com/challenges/insertionsort1/problem
*
********************************************************************/ 

using namespace std;
//-----------------------------------------------------------------------------------------
void insertionSort(vector <int>& _array);
//-----------------------------------------------------------------------------------------
int main() 
{
	unsigned int arraySize;
   cin >> arraySize;
   vector<int> array(arraySize);
   
   for(int i = 0; i < arraySize; ++i)
	{
		cin >> array[i];
   }
   insertionSort(array);
   for(int j = 0; j < arraySize; ++j) 
   {
		cout << array[j] << ' ';
	}
   return 0;
}

//-----------------------------------------------------------------------------------------
void insertionSort (vector <int>& _array) 
{
	int cutedElement = _array.back();
	int currentElemet = _array.size() - 2;
	
	if(_array.size() > 1)
	{
		for(currentElemet; _array[currentElemet] > cutedElement && currentElemet >= 0; --currentElemet)
		{
			_array[currentElemet + 1] = _array[currentElemet];
			
			for(int i = 0; i < _array.size(); ++i) 
			{
				cout << _array[i] << ' ';
			}
			cout << endl;
		}
		currentElemet < 0 ?	_array[0] = cutedElement: _array[currentElemet + 1] = cutedElement;
	}
}

