#include <iostream>
#include <stdint.h>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <bitset>

using namespace std;

//-----------------------------------------------------------------------------------------
void numberAsBinary( unsigned int number, char *_result);

//-----------------------------------------------------------------------------------------
int main() 
{
	const int MAX_BIN_NUMBER_LENGTH = 10;
	const int QUANTITY_DEC_DIGITS = 10;
	unsigned int randomDecimalNamber;
	int cleaningArray;
	
	char *FindFirstUsed1;
	char result[MAX_BIN_NUMBER_LENGTH];

	for(int j = 0; j < QUANTITY_DEC_DIGITS; ++j)
	{
		randomDecimalNamber = 1 + rand() % 512;
		
		numberAsBinary(randomDecimalNamber, result);
		result[MAX_BIN_NUMBER_LENGTH] = '\0';
		
		FindFirstUsed1 = strchr(result, '1');
		cout << "This number in Bin = " << FindFirstUsed1 << endl;

		cleaningArray = MAX_BIN_NUMBER_LENGTH*sizeof(int);
		memset(result, 0, cleaningArray); 
	}
	return 0;
}

//-----------------------------------------------------------------------------------------
void numberAsBinary(unsigned int number, char *result)
{
	int mask = 512;
	
	cout << "Dec number = " << number << endl;
	for ( int i = 0; i <= 9; ++i )
	{
		if ((number & mask) > 0)
		{
			result[i] = '1';
		}
		else
		{
			result[i] = '0';
		}
		mask = (mask >> 1);
	}

}

