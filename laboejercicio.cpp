#include <iostream>

using namespace std;

int main()
{
    int nota;
    cout <<"ingresa una nota del 0 al 100: "<<endl;

    cin>>nota;

    if(nota >=90 )

    {
        cout <<"EXCELENTE, HAZ APROBADO CON HONORES";
    }
    else if (nota >=60 && nota <=89)
    {
    cout<<"BUEN TRABAJO, APROBADO";
    }
    else if (nota < 60 && nota>=0)
{

    cout<<"LO SIENTO, NO APROBASTE. ESTUDIA UN POCO MAS";
}
else
{
    cout<<"Ingrese una nota valida";
}













    return 0;
}

