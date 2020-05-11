#include <iostream>
using namespace std;

void inver(int &x, int &y)
{
    int f;
    f = x;
    x=y;
    y=f;

}

void invertir(int x[], int t)
{
    t--;
    for(int i = 0; i<t; inver(x[i++],x[t--]))
    continue;
}

void invertir_recursiva(int x[], int t, int m)
{
    if((t+t)<= m)
        return;
    cout << x[m-t]<< " "<<x[t-1]<< endl;
    inver(x[m-t],x[t-1]);
    cout << x[m-t]<< " "<<x[t-1]<< endl;
    return invertir_recursiva(x,--t,m);
}

int main()
{
    int p[12]={1,2,3,4,5,6,7,8,9,10,11,34};

    //invertir(p,10);
    invertir_recursiva(p,12,12);
    for(int i = 0; i<12;i++)
        cout << p[i]<<" ";
}
