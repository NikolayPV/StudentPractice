#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cstring>

using namespace std;

//-----------------------------------------------------------------------------------------
void numberAsBinary( unsigned int number, char *_result, int looper);

//-----------------------------------------------------------------------------------------
int main() 
{
	const int MAX_SIZE_BIN_NAMB = 10;
	char result[MAX_SIZE_BIN_NAMB];
	unsigned int randDecNamb;
	
	double counterBitInDec;

	for(int j = 0; j < 10; ++j)
	{
		randDecNamb = 1 + rand() % 512;
		counterBitInDec = log2(randDecNamb);
		
		numberAsBinary(randDecNamb, result, counterBitInDec);
		
		cout << "This namber in Bin = " << result << endl << endl;
		
		memset(result, 0, MAX_SIZE_BIN_NAMB*sizeof(int)); 
	}
	return 0;
}

//-----------------------------------------------------------------------------------------
void numberAsBinary(unsigned int number, char *_result, int looper)
{
		cout << "Dec namber = " << number << endl;
		 
		while(looper >= 0)
		{	
			int changes = number / 2;
			int oneOrZero = number - changes*2;
			if ( 0 == oneOrZero)	
			{
				*(_result + looper) = '0';
			}
			else
			{
				*(_result + looper) = '1';
			}
			number = changes;
			--looper;
		}

}

