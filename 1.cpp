#include <iostream>
using namespace std;

int suma_elementos_iterativa(int *x,int t)
{
    int suma=0;
    for (int i = 0;i<t;i++)
        suma+=*(x+i);
    return suma;
}

int suma_elementos_recursiva(int *x,int t)
{
    if (t==0)
        return *x;
    return *(x+t) + suma_elementos_recursiva(x,t-1);
}

int main()
{
    int *p;
    for (int i = 0;i<10;i++)
        cin>>*(p+i);
    //cout << "la suma es "<<suma_elementos_iterativa(p,10);
    cout << "la suma es "<<suma_elementos_recursiva(p,10);
}

