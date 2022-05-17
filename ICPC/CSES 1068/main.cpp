#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int input;
    int i=0;
    cin >> input;

    long long n = (long long) input;

    vector <long long int> vec;
    vec.push_back(n);

    while(n!=1){
        if(n%2==0){
            n = n/2;
            vec.push_back(n);
        }
        else{
            n = (n*3)+1;
            vec.push_back(n);
        }
    }

    for(i=0;i<(int)vec.size();i++){
        cout << vec[i] << ' ';
    }

    return 0;
}
