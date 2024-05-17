#include <iostream>

using namespace std;

/*int suma(int numero1, int numero2)
{
    return numero1 + numero2;
}*/
/*void saludar()
{
    cout<<"Bienvenidos";
}

int mayor(int numero1, int numero2)
{
    if(numero1>numero2)
    {
        cout<<"Numero"<<numero1<<"Es el mayor"<<endl;
    }
    else
    {
      cout<<"Numero"<<numero2<<"Es el mayor"<<endl;
    }
}

double calcular(double radio)
{
     return 3.14159*(radio*radio);

}*/

void semana(string dia)
{
    if(dia=="Lunes" || dia=="LUNES" || dia=="lunes")
    {
        cout<<"Buena Semana"<<endl;
    }
    else if(dia=="Viernes" || dia=="VIERNES" || dia=="viernes")
    {
        cout<<"Buen finde"<<endl;
    }
    else
    {
        cout<<"Buen dia"<<endl;
    }
}


int main()
{
    /*int num1=5;
    int num2=3;

    int resultado= suma(num1,num2);
    int num3=4;
    int num4=9;

    resultado=suma(num3, num4);

    cout<<resultado;*/
/*saludar();
int num1=9;
int num2=7;

mayor(num1,num2);

double radio2=0;
cout<< "Ingrese radio del circulo: "<<endl;
cin>>radio2;

double area=calcular(radio2);

cout<<"El area del circulo es: " <<area<<endl;*/

string dia2;
cout<<"Ingrese dia de la semana: " <<endl;
cin>>dia2;

semana(dia2);



    return 0;
}
