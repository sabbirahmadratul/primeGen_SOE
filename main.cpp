#include <bits/stdc++.h>
using namespace std;

void primeGen_SOE(int n){
    bool prime[n+1];
    memset(prime,1,sizeof(prime));
    for(int i=2;i*i<=n;i++){
        if(prime[i]){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=0;
            }
        }
    }
    for(int k=2;k<=n;k++){
        if(prime[k])
            cout << k << " ";
    }
    cout << "\n";
}

int main()
{
    int n;
    cin >> n;
    cout << "\nPrime numbers in " << n << ": ";
    primeGen_SOE(n);
    return 0;
}
