#include <iostream>
#include <string>
using namespace std;

int main(){


	string a; cin>>a;
	string b; cin>>b;

	int arr[a.length()];

	for(int i = 0; i < a.length(); i++){

		if(a[i] != b[i]){
			arr[i] = 1;
		}

			else{
				arr[i] = 0;
			}
	}
	
	for(int i = 0; i < a.length(); i++){
		cout<<arr[i];
	}

	return 0;
}
