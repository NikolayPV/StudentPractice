#include <iostream>
#include <stdio.h>

using namespace std;

//-----------------------------------------------------------------------------------------
void numberAsBinary( unsigned int number, char* result);

//-----------------------------------------------------------------------------------------
int main() 
{
	const int MAX_BIN_NUMBER_LENGTH = 10;
	const int QUANTITY_DEC_DIGITS = 10;
	unsigned int randomDecimalNamber;

	char* result;
	result = new char[MAX_BIN_NUMBER_LENGTH];

	for(int j = 0; j < QUANTITY_DEC_DIGITS; ++j)
	{
		cin >> randomDecimalNamber;
		numberAsBinary(randomDecimalNamber, result);
		printf("Result = %s \n", result);
	}
	return 0;
}

//-----------------------------------------------------------------------------------------
void numberAsBinary(unsigned int number, char* result)
{
	int bitMask = 512;
		
	if(0 != result && number <= bitMask)
	{
		while (bitMask > 0)
		{
			if(number >= bitMask)
			{
				*(result++) = (number & bitMask) > 0 ? '1' : '0';
			}	
			bitMask >>= 1;
		}
		*result = '\0';
	}		
}
	
