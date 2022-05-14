// www.hackerrank.com/challenges/divisible-sum-pairs
#include <iostream>

using namespace std;

int main()
{
    int n, k, j,
        contador=0,
        i=0;

    cin>> n;
    cin>> k;

    int ar[n];

    while(i<n){
        cin>>ar[i];
        i++;
    }

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if ((ar[i]+ar[j])%k == 0){
                contador+=1;
            }
        }
    }

    cout << contador << endl;
    return 0;
}
