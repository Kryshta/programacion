#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n, valor, i, acumulador=0;
    cin >> n;

    vector <int> arr;

    for (i=0; i<n; i++){
        cin >> valor;
        arr.push_back(valor);
    }

    sort(arr.begin(), arr.end());

    while(i--){
        if(arr[i] != arr[i-1])
        acumulador+=1;
    }

    cout << acumulador << endl;
    return 0;
}
