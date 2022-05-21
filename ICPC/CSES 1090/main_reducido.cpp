//https://cses.fi/problemset/task/1090

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
        if (nenes.back() + nenes.front() <= maxPeso){
            nenes.erase(nenes.begin());
            n--;
        }
            nenes.pop_back();
            n--;
            acumulador+=1;
            if ( (nenes[0]+nenes[1]) > maxPeso){
                acumulador += n;
                n=0;
            }
    }

    if (n==1)
        acumulador+=1;

    cout << acumulador << endl;
    return 0;
}
