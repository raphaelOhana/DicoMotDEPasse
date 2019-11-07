#pragma once
#include<iostream>
#include<time.h>
#include<ctime>
#include<string>
#include<time.h>
using namespace std;
//prototype fonction
//void CREATPASSEWORD(int n) { creatPasseword(n); }

//-------------create one passeword and print it-----------------//
void creatPasseword(int n /*give number of element in password*/);


//-------------print one passeword-----------------//
void printPasseword(int* n,int x);

//-------------change int -> char whith own dictionary-----------------//
//_________________A=10 .....Z=35 ,a=36....z=62_______________________//

char changeIntToChar(int x/*number to cast*/);
//_______________________________________________________________________//
//____________________NE PAS TOUCHER PLEASE______________________________//
//_______________________________________________________________________//

char changeIntToChar(int x) 
{
	if (x < 10 || x>62)
		throw "error 01";
	if (x >= 10 && x<36)
		return 'A' + x - 10;
	if (x >= 36 && x < 63)
		return 'a' + x - 36;
}

void printPasseword(int* n,int x)
{
	for (int i = 0; i < x; i++)
	{
			if (n[i] >= 0 && n[i] < 10)
				cout << n[i];
			else
				cout << changeIntToChar(n[i]);
	}
	cout << endl;
}

void creatPasseword(int n)
{
	int* charOfPasseword = new int[n];
	for (int i = 0; i < n; i++)
	{
		
		charOfPasseword[i] = rand() % 63;
	}
	printPasseword(charOfPasseword, n);
}
//_______________________________________________________________________//
//_______________________________________________________________________//
//_______________________________________________________________________//
