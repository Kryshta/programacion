#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int main()
{
    int n, peso, maxPeso, i, acumulador=0;

    cin >> n >> maxPeso;

    vector <int> nenes;

    for (i=0;i<n;i++){
        cin >> peso;
        nenes.push_back(peso);
    }

    sort(nenes.begin(), nenes.end());

    while (n>1){
        if (nenes.back() + nenes.front() >maxPeso){
            nenes.pop_back();
            acumulador+=1;
            n--;
        }
        else{
            nenes.pop_back();
            nenes.erase(nenes.begin());
            acumulador+=1;
            n-=2;
        }
    }

    if (n==1)
        acumulador+=1;

    cout << acumulador << endl;
    return 0;
}
