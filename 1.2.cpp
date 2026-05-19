#include <iostream>

using namespace std;

int perm(int *A, int n){
	int i=0, a=0, j=0, k=0;
	
	for(i=0; i<n-1; i++){
		for(j=0; j<n; j++){
			if(A[i]>A[j]){
				a=A[i];
				A[i]=A[j];
				A[j]=a;
			}
		}
	}
	
	for(i=0; i<n-1; i++){
		if(A[i]==A[i+1] || A[i]>n)
			k++;		
	}
	if(A[n]>n)
		k++;
	return k;
}

int main(int argc, char** argv) {
	int a=0, i=0, k=0, n=0;
	
	cout<<"Podaj rozmiar tablicy: ";
	cin>>n;
	
	int A[n];
	
	cout<<"Dodaj liczby do tablicy"<<endl;
	for(i=0; i<n; i++){
		cin>>a;
		A[i]=a;	
		
	}	
	
	k=perm(A, n);
	
	cout<<"Rozwiazanie: "<<k;
	
	return 0;
}
