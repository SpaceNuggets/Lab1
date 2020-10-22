#include <iostream>
#include <string>

using namespace std;

int sumaDzielnikow(int a){
    int suma=0;
    for(int i=1;i<a;i++){
        if(a%i==0)
            suma+=i;
    }
    return suma;
}

int main()
{
    int a,b;
    cout << "podaj dwie liczby"<<endl;
    cin >> a >> b;
    if(a==b){
        cout << "Podano 2 takie same liczby";
        return 0;
    }
    if(a<=0||b<=0){
        cout <<"Podano conajmniej jedna liczbe mniejsza badz rowna 0";
        return 0;
    }
    if(sumaDzielnikow(a)-1==b&&sumaDzielnikow(b)-1==a)
        cout<<"liczby sa skojarzone";
    else
        cout <<"liczby nie sa skojarzone";
    return 0;

}