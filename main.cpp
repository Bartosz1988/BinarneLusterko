#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

void naBinarne(unsigned long long int liczba, vector<int>&bin)
{
    while(liczba!=0)
    {
        if(liczba%2==1)bin.push_back(1);
        else bin.push_back(0);
        liczba/=2;
    }
}

void lusterko(vector<int>&bin)
{
    unsigned long long int wynik = 0;
    unsigned long long int potega = 1;

    for(int i=bin.size()-1; i>=0; i--)
    {
        wynik+=bin[i]*potega;
        potega*=2;
    }
    cout<<wynik<<endl;
}

int main()
{
    unsigned long long int liczba;
    while(cin>>liczba)
    {
        vector<int>bin;

        naBinarne(liczba, bin);

        unsigned long long int wynik = 0;
        unsigned long long int potega = 1;

        lusterko(bin);
    }
}
