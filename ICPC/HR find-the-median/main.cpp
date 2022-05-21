#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int dato, n, medio;
    cin >> n;

    vector <int> arr;

    for (int i=0; i<n; i++){
        cin >> dato;
        arr.push_back(dato);
    }

    sort(arr.begin(), arr.end());

    medio = (n-1)/2;

    cout << arr[medio] << endl;

    return 0;
}
