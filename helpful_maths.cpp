#include <iostream>
#include <bits/stdc++.h>

using namespace std;



int sol(){
	
	
	string s;
	
	cin>>s;
	vector<int> vec;
	
	for ( int i = 0, inc=2; i < s.size(); i+=inc){
		
		//int vec[s.size()];
		
		
		vec.push_back(s[i]);
		
	
}
	
	sort(vec.begin(), vec.end());
	
		for ( int i = 0, inc=2; i < s.size(); i+=inc){
		
		//int vec[s.size()];
		
		
		s[i]=vec[i/2];
	
}
	
	cout <<s<<endl;
}





int main(){
	
	
	
	
	sol();
	
	
	return 0;
}
