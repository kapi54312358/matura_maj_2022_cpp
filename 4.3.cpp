#include <iostream>
#include <fstream>

using namespace std;

int const n=200;

int main(int argc, char** argv) {
	ifstream we("C:/cpp/liczby.txt");
	int A[n];
	int i=0, j=0, k=0, m=0, o=0, licznik_t=0, licznik_p=0;	

	for(i=0; i<n; i++){
		we>>A[i];
	}
	
	for(i=0; i<n-2; i++){
		for(j=0; j<n-1; j++){
			if(A[j]%A[i]==0 && A[i]!=A[j]){
				for(k=0; k<n; k++){
					if(A[k]%A[j]==0 && A[j]!=A[k]){
						cout<<A[i]<<" "<<A[j]<<" "<<A[k]<<endl;
						licznik_t++;
					}		
				}
			}
		}
	}
	
	cout<<endl<<licznik_t<<endl;
	
	for(i=0; i<n-4; i++){
		for(j=0; j<n-3; j++)
			if(A[j]%A[i]==0 && A[i]!=A[j])
				for(k=0; k<n-2; k++)
					if(A[k]%A[j]==0 && A[j]!=A[k])
						for(m=0; m<n-1; m++)
							if(A[m]%A[k]==0 && A[m]!=A[k])
								for(o=0; o<n; o++)
									if(A[o]%A[m]==0 && A[o]!=A[m])
										licznik_p++;
										
	}
	
	cout<<licznik_p;
	
	return 0;
}
