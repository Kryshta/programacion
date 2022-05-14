#include <iostream>

using namespace std;

int main()
{
    int i=0,
        n, t, maximo,
        //indiceaevitar,
        ronda = 0,
        contador=0,
        hubosuma=0;

    cin >> t;

    while (t--){

        cin >> n;

        int vec[n];

        while (i<n){
            cin >> vec[i];
            i++;
        }

        maximo=vec[0];

        for(i=0;i<n;i++){
            if(maximo<vec[i]){
                maximo=vec[i];
            }
        }

/* intento pobre de optimizacion

        for(i=0;i<n;i++){
            if(maximo-vec[i]==4){
                indiceaevitar=i;
                contador++;
            }
        }

        if (contador!=0){
            for(i=0;i<n;i++){
                if(i!=indiceaevitar){
                    vec[i]+=1;
                }
            }
            maximo+=1;
        }
*/

        while(ronda<=n-1){

            for(i=0;i<n;i++){
                if(vec[i]<maximo){
                    if(maximo-vec[i]>=5 && (hubosuma==5 || hubosuma==0) ){
                        vec[i]+=5;
                        hubosuma=5;
                    }
                    else if (maximo-vec[i]>=2 && (hubosuma==2 || hubosuma==0) ){
                        vec[i]+=2;
                        hubosuma=2;
                    }
                    else if (maximo-vec[i]!=0 && (hubosuma==1 || hubosuma==0) ){
                        vec[i]+=1;
                        hubosuma=1;
                    }
                }
            }
        if (hubosuma!=0){
            contador++;
        }
        hubosuma=0;
        ronda++;
        }

    }

    cout << contador << endl;
    return 0;
}
