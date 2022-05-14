#include <iostream>

using namespace std;

int main()
{
    int n,
        i=0;

    cin>>n;

    long vect[n],
         acum=0;

    while(n--){
        cin>>vect[i];
        acum+= vect[i];
        i++;
    }

    cout << acum << endl;
    return 0;
}
