#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
    	for(int i=0;i<a;i++){
    	    for(int i=0;i<b;i++){
    	        cout<<"* ";
    	    }
    	    cout<<"\n";
    	}
    }
	return 0;
}

/*
Input:
Number of Testcases [feg: 1]
Number of Rows [feg: 5]
Number of Columns [feg: 4]

Output:
* * * *
* * * *
* * * *
* * * *
* * * *
*/
