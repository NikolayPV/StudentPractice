#include <iostream>
#include <stdint.h>
#include <cstdlib>
#include <cmath>
#include <cstring>

using namespace std;

//-----------------------------------------------------------------------------------------
void numberAsBinary( unsigned int number, char *_result, int indexLocationInMass);

//-----------------------------------------------------------------------------------------
int main() 
{
	const int MAX_BIN_NUMBER_LENGTH = 10;
	const int QUANTITY_DEC_DIGITS = 10;
	
	char result[MAX_BIN_NUMBER_LENGTH];
	
	unsigned int randomDecimalNamber;
	uint16_t counterBitInDec;
	
	int cleanMass;
	
	for(int j = 0; j < QUANTITY_DEC_DIGITS; ++j)
	{
		randomDecimalNamber = 1 + rand() % 512;
		
		counterBitInDec = static_cast<uint16_t>(log2(randomDecimalNamber) + 1);
		result[counterBitInDec] = '\0';
		
		numberAsBinary(randomDecimalNamber, result, counterBitInDec);
		
		cout << "This namber in Bin = " << result << endl << endl;
		
		cleanMass = MAX_BIN_NUMBER_LENGTH*sizeof(int);
		memset(result, 0, cleanMass); 
	}
	return 0;
}

//-----------------------------------------------------------------------------------------
void numberAsBinary(unsigned int number, char *result, int indexLocationInMass)
{
	cout << "Dec namber = " << number << endl;
	int changes;
	int oneOrZero;
	
	--indexLocationInMass;
	
	for( indexLocationInMass; indexLocationInMass >= 0; --indexLocationInMass)
	{	
		changes = number / 2;
		oneOrZero = number - changes*2;
		if ( 0 == oneOrZero)	
		{
			result[indexLocationInMass] = '0';
		}
		else
		{
			result[indexLocationInMass] = '1';
		}
		number = changes;
	}

}

