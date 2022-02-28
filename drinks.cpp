#include <iostream>
using namespace std;

int main(){


	int n;
	cin>>n;
	int n_aux = n;
	float sum = 0, aux;
	while(n--){
		cin>>aux;
		sum = sum + aux;
	}

	cout<<sum/n_aux;
	return 0;
}
