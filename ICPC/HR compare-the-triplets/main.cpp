#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> a, b;
    vector <int> resultado (2,0);
    int a0, a1, a2, n;

    cin >> a0 >> a1 >> a2;
    a.push_back(a0);
    a.push_back(a1);
    a.push_back(a2);

    cin >> a0 >> a1 >> a2;
    b.push_back(a0);
    b.push_back(a1);
    b.push_back(a2);

    for (int i=0;i<3;i++){
        n = a[i]-b[i];
        if(n>0)
            resultado[0]+=1;
        if(n<0)
            resultado[1]+=1;
    }

    cout << resultado[0] << ' ' << resultado[1] << endl;
    return 0;
}
