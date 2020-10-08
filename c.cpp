#include <iostream>

int n,a=0;

int main()
{
    std::cout << "Podaj liczbe: " ;
    std::cin >> n;
    for(int i=1;i<=n;i++)
    {
       // std::cout << n%i <<"\n";
        if(n%i==0)
        a++;
    }
    if(a==2)
    {
        std::cout << "Liczba pierwsza" ;
    }
    else
    {
        std::cout << "Nie jest to liczba pierwsza" ;
    }
    

}
