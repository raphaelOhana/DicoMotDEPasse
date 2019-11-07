#pragma once
#include<iostream>
//prototype fonction
int * creatPasseword(int n);
void printPasseword(int n);
char changeIntToChar(int x);


char changeIntToChar(int x) 
{
	if (x < 10 || x>62)
		throw "error 01";
	if (x >= 10 || x<36)
		return 'A' + x - 10;
	if (x >= 36 || x < 63)
		return 'a' + x - 36;
}

void printPasseword(int n);


