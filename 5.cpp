#include <iostream>
using namespace std;

void concatenar(char a[], char b[])
{
    int i=0;
    int y=0;
    while(b[i]!=' ')
        i++;
    while(a[y]!=NULL)
    {
        b[i]=a[y];
        i++;
        y++;
    }
}

int main()
{
    char a[] = "computacion";
    char b[] = "ciencia_de_la_            ";
    int i = 0;
    //b[14]='r';
    concatenar(a,b);
    //int i = 0;

    while(b[i]!=NULL){
        cout<<b[i];
        i++;}
}
