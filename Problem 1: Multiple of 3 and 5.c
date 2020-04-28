#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long long int n;
        cin >> n;
        n--;
        long long int sum=0;
        
        long long int n3=n/3;
        long long int n5=n/5;
        long long int n15=n/15;
        
        long long int val3=3*(n3*(n3+1))/2;
        long long int val5=5*(n5*(n5+1))/2;
        long long int val15=15*(n15*(n15+1))/2;

        sum = val3 + val5 - val15;

        cout<<sum<<endl;
    }
    return 0;
}
