#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int const n=200;

int main(int argc, char** argv) {
	ifstream we("C:/cpp/liczby.txt");
	int A[n];
	int i=0, j=0, k=0, licznik=0, liczba=0, najw=0, d=2, m=0;
	vector <int> rozne_dzielniki;

	for(i=0; i<n; i++){
		we>>A[i];
	}
	
	for(i=0; i<n; i++){
		licznik=0;
		d=2;
		m=A[i];
		
		while(d*d<=m)
			if(m%d==0){
				licznik++;
				m=m/d;
			}
			else d++;
		licznik++;
		
		if(licznik>najw){
			najw=licznik;
			liczba=A[i];
		}
				
	}
	
	cout<<liczba<<" "<<najw<<" ";
	
	najw=0;
	for(i=0; i<n; i++){
		rozne_dzielniki.clear();
		d=2;
		m=A[i];
		
		while(d*d<=m)
			if(m%d==0){
				rozne_dzielniki.push_back(d);	
				m=m/d;
			}
			else d++;
		rozne_dzielniki.push_back(m);
		
		for(j=0; j<rozne_dzielniki.size()-1; j++){
			k=j+1;
			while(k<rozne_dzielniki.size()){
				if(rozne_dzielniki[j]==rozne_dzielniki[k]){
					rozne_dzielniki.erase(rozne_dzielniki.begin()+k);
				}
				else k++;	
			}
		}
		
		licznik=rozne_dzielniki.size();
		
		if(licznik>najw){
			najw=licznik;
			liczba=A[i];
		}			
	}
	
	cout<<liczba<<" "<<najw;
	
	return 0;
}
