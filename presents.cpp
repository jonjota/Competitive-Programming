#include <iostream>
using namespace std;

int main(){

	int c;

	cin>>c;

	int arr[c];

	for(int i = 0; i < c; i++){
		
		cin>>arr[i];
	}

	int new_arr[c];

	for(int i = c; i > 0; i--){

		new_arr[arr[i-1]-1] = i;

	}

	for(int i = 0; i < c; i++){

		cout<<new_arr[i]<<" ";
	}

	return 0;
}
