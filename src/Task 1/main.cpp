#include <iostream>
#include <stdio.h>
#include <climits>

using namespace std;
//-----------------------------------------------------------------------------------------
void numberAsBinary( const unsigned int number, char* result);
//-----------------------------------------------------------------------------------------
typedef unsigned int UInt;
static const UInt MAX_NUMBER = 512u;

int main() 
{
	const int MAX_BIN_NUMBER_LENGTH = 10;
	unsigned int randomDecimalNamber;

	char* result;
	result = new char[sizeof( unsigned int) * CHAR_BIT];

	for(int j = 0; j < MAX_BIN_NUMBER_LENGTH; ++j)
	{
		cin >> randomDecimalNamber;
		numberAsBinary(randomDecimalNamber, result);
	}
	delete [] result;
	return 0;
}

//-----------------------------------------------------------------------------------------
void numberAsBinary( const unsigned int number, char* _result)
{
	UInt bitMask = MAX_NUMBER;
		
	if(0 != _result && number <= bitMask)
	{
		while (bitMask > 0)
		{
			if(number >= bitMask)
			{
				*(_result++) = (number & bitMask) > 0 ? '1' : '0';
			}	
			bitMask >>= 1;
		}
		*_result = '\0';
	}		
}
	
