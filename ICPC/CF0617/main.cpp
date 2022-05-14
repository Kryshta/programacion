#include <iostream>

using namespace std;

int main()
{
    int x,
        steps=0;

    cin>>x;

    while(x-5>0){
        steps+=1;
        x-=5;
    }

    if (x!=0)
        steps+=1;

    cout << steps << endl;
    return 0;
}
