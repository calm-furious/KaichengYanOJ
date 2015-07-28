#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(0 < t--){
		int n;
		int a = 1,b = 0;
		cin >> n;
		if(n == 0){
			cout << 1 << " " << 0 << endl;
			continue;
		}else{
				 
			
			for(int i = 0; i < n-1; i++){
				b = b + a;
				a = b - a;
			}
			cout << b ;
			a = 0;
			b = 1;
			for(int i = 0; i < n-1; i++){
				b = b + a;
				a = b - a;
			} 
			cout << " " << b << endl;
		}
		
	}
	return 0;
}
