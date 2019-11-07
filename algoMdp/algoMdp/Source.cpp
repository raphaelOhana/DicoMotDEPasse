#include<iostream>
#include"DicoMdp.h"
using namespace std;
#define EX 2
#if EX==1

	int main()
	{
		char tab[8];

		for (char i = 48; i < 122; i++)
		{
			if (i > 57 && i < 65)
				i = 64 + i - 57;
			else if (i > 90 && i < 97)
				i = 96 + i - 90;
			tab[0] = i;
			for (char j = 48; j < 122; j++)
			{
				if (j > 57 && j < 65)
					j = 64 + j - 57;
				else if (j > 90 && j < 97)
					j = 96 + j - 90;
				tab[1] = j;
				for (char k = 48; k < 122; k++)
				{
					if (k > 57 && k < 65)
						k = 64 + k - 57;
					else if (k > 90 && k < 97)
						k = 96 + k - 90;
					tab[2] = k;
					for (char l = 48; l < 122; l++)
					{
						if (l > 57 && l < 65)
							l = 64 + l - 57;
						else if (l > 90 && l < 97)
							l = 96 + l - 90;
						tab[3] = l;
						for (char m = 48; m < 122; m++)
						{
							if (m > 57 && m < 65)
								m = 64 + m - 57;
							else if (m > 90 && m < 97)
								m = 96 + m - 90;
							tab[4] = m;
							for (char n = 48; n < 122; n++)
							{
								if (n > 57 && n < 65)
									n = 64 + n - 57;
								else if (n > 90 && n < 97)
									n = 96 + n - 90;
								tab[5] = n;
								for (char o = 48; o < 122; o++)
								{
									if (o > 57 && o < 65)
										o = 64 + o - 57;
									else if (o > 90 && o < 97)
										o = 96 + o - 90;
									tab[6] = o;
									for (char p = 48; p < 122; p++)
									{
										if (p > 57 && p < 65)
											p = 64 + p - 57;
										else if (p > 90 && p < 97)
											p = 96 + p - 90;
										tab[7] = p;

										cout << tab[0] << tab[1] << tab[2] << tab[3]
											<< tab[4] << tab[5] << tab[6] << tab[7] << endl;

									}
								}
							}
						}
					}
				}
			}
		}

	}

#elif EX ==2

	int main() 
	{
		//init number of passwords that you want
		int numberOfPasseword = 200;
		srand(time(NULL));
		for (int i = 0; i < numberOfPasseword; i++)
			creatPasseword(8);
		
		system("pause");
	}

#endif