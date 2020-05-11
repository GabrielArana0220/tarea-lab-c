#include <iostream>
using namespace std;

void agregar(char a[], char b[])
{
    int i=0;
    while (b[i]!=NULL)
    {
        a[i]=b[i];
        i++;
    }
}
int main()
{
    char a[] = "computacion";
    char b[] = "                                         ";
    agregar(b,a);
    int i=0;
    while (b[i]!=NULL)
    {
        cout << b[i];
        i++;
    }
}
