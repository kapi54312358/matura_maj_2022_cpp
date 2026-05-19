#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int const n=200;

int main(int argc, char** argv) {
	ifstream we("C:/cpp/liczby.txt");
	string A[n];
	string liczba="", pierwsza_liczba="";
	int i=0, licznik=0;
	bool flaga=true;
	
	for(i=0; i<n; i++){
		we>>A[i];
		liczba=A[i];
		if(liczba[0]==liczba[liczba.size()-1]) licznik++;
	}
	
	for(i=0; i<n; i++){
		if(flaga){
			liczba=A[i];
			if(liczba[0]==liczba[liczba.size()-1]) flaga=false;
			pierwsza_liczba=A[i];	
		}	
	}
	
	cout<<licznik<<endl<<pierwsza_liczba;
	
	return 0;
}
