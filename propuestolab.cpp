#include <iostream>
#include <cmath>

using namespace std;


int main(){
    float horas;

    cout<<"DIME QUE HROAS SON Y DAME EN FORMATO 24 HORAS "<<endl;
    cin>>horas;
    
    if (horas>=19 && horas<=23 ){

        cout<<"Es de noche";
    } 
    else if (horas>=12 && horas<=18 ){


    cout<<"Es de tarde";
        }
        else if (horas>=6 && horas<=11 ) 
        
        
        {
            cout<<"Es de mañana";


            }else if (horas>=0 && horas<=5 )
            {
                cout<<"ES DE MADRUGADA";

            }else
            {
                cout<<"INGRESA UNA HORA VALIDA";
            }

            





















    return 0;
}