#include<iostream>
#include<time.h>
#include<iomanip>
using namespace std ;
int main()
{
	int num[10] ;
	cout << "Element Value Histogram\n\n" ;
	srand(time(NULL)) ;
	for(int n = 0 ; n < 10 ; n++)
	{
		num[n] = 1+rand()%30 ;
	}
	for(int n = 0 ; n < 10 ; n++)
	{
		cout << n << "\t" << num[n] << "\t" ;
		for(int i = 1 ; i <= num[n] ; i++)
			cout << '*' ;
		cout << endl ;
	}
	
	return 0 ;
}
