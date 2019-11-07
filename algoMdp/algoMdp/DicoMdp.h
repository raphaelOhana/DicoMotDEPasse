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

bool checkQuadruplon(int* tab,int n); //verifie quil ny est pas 4 charactere identique dans un mdp 

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
	if (checkQuadruplon(int* tab, int n))   //si moins de 4 characters les meme j'imprime
	printPasseword(charOfPasseword, n);
}
//_______________________________________________________________________//
//_______________________________________________________________________//
//_______________________________________________________________________//

bool checkQuadruplon(int* tab,int n)       // n = taille du mdp
{
	int compteur(0);
	char ch;                           // je rentre le character dans ch 
	for (int i = 0; i < n; i++)
	{
		ch = tab[i];
	
		for (int j = 0; j < n; j++)
		{
			if (tab[j] == ch)          // je compare ch avec tte les case du mdp
				compteur++;

		}
		if (compteur >= 4)             // si il y a 4 character identique je stope la boucle
			break;
		else
			compteur = 0;
	}
	if (compteur >= 4)             // si il y a 4 character identique
		return false;
	return true;
}