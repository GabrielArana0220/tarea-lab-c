#include <iostream>
#include <string>
using namespace std;

int tamano_recursivo(string x, int y=0)
{
    if(x[y]==NULL)
        return 0;
    return 1 + tamano_recursivo(x,++y);
}

int tamano(string x)
{
    int t=0;

    while(x[t]!=NULL){
        t++;
    }
    return t;
}


int main()
{
    string x = "ciencia de la computacion 2";
    cout << tamano_recursivo(x);
}
