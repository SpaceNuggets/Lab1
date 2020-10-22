#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main()
{
    double height, mass;
    cout << "Podaj wzrost w metrach"<<endl;
    cin >> height;
    if(height<=0){
        cout <<"wartosc nieprawidlowa";
        return 0;
    }
    cout <<"Podaj wage w kilogramach"<<endl;
    cin >> mass;
    if(mass<=0){
        cout <<"wartosc nieprawidlowa";
        return 0;
    }
    double bmi= mass/height/height;
    cout <<"Twoje BMI wskazuje na: ";
    if(bmi<16)
        cout<<"wyglodzenie";
    else if(bmi<16.99)
        cout <<"wychudzenie";
    else if(bmi<18.49)
        cout<<"niedowage";
    else if(bmi<24.99)
        cout <<"wartosc prawidlowa";
    else if(bmi<29.99)
        cout<<"nadwage";
    else if(bmi<34.99)
        cout<<"I stopien otylosci";
    else if(bmi<39.99)
        cout<<"II stopien otylosci";
    else
        cout<<"otylosc skrajna";
    getch();
   return 0;
}