#include <iostream>
#include <cstdlib>

using namespace std;

char result[11];
int i = 0;

void write_result()
{
		i = i-1;
		cout << "This namber in Bin = ";
		for(i; i >= 0; i--)
		{
			cout << result[i];
		}
		cout << "\n \n";
}	

int main() 
{
	int giveDecNam;
	int showBin;
	int changes;
	int oneOrZero;
	
	for(int j = 0; j < 10; j++)
	{
		giveDecNam = 1 + rand() % 512;
		cout << "Dec namber = " << giveDecNam << endl;
			do
			{
				changes = giveDecNam / 2;
					oneOrZero = giveDecNam - changes*2;
				if ( 0 == oneOrZero)
				{
					result[i] = '0';
				}
				else
				{
					result[i] = '1';
				}
				giveDecNam = changes;
				i++;
			}
		while(giveDecNam != 0);
		
		write_result();	
	}
	
	return 0;
}

