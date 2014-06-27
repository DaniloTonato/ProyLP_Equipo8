#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

 struct evento
{
  char nombreevento[30], descripcionevento[200];
  int ano[5], mes [2], dia[2];

}
;

struct tiempo
{
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  }
  ;
  int ingresar_evento()
  {

  }


  int 	eventos_del_dia()
  {

  }
  int eventos_semana()
  {

  }


main()
{

  int op;

		cout<<"ESCUELA SUPERIOR POLITECNICA DEL CHIMBORAZO"<<endl;
		cout<<endl;
		cout<<"  -----------SISTEMAS OPERATIVOS-----------"<<endl;
		cout<<"  -----------------------------------------"<<endl;
		cout<<"  -                                       -"<<endl;
		cout<<"  -   INTEGRANTES:                        -"<<endl;
		cout<<"  -                                       -"<<endl;
		cout<<"  -   Erick Gustavo Carreño Remache       -"<<endl;
		cout<<"  -                                       -"<<endl;
		cout<<"  -   Pablo Marcelo Nieto Moreno          -"<<endl;
      cout<<"  -                                       -"<<endl;
      cout<<"  -   Carlos Danilo Tonato Tuquinga       -"<<endl;
		cout<<"  -----------------------------------------"<<endl;
		cout<<endl;
		system("pause");
		system("cls");
	do
	{

		cout<<"ESCUELA SUPERIOR POLITECNICA DEL CHIMBORAZO"<<endl;
		cout<<endl;
		cout<<"  ººººººCALENDARIO DE EVENTOS ESPOCHººººº"<<endl;
		cout<<"  ºººººººººººººMENU PRINCIPALºººººººººººº"<<endl;
		cout<<"  º                                     º"<<endl;
		cout<<"  º   1.- INGRESAR EVENTO               º"<<endl;
		cout<<"  º                                     º"<<endl;
		cout<<"  º   2.- EVENTOS DEL DIA               º"<<endl;
		cout<<"  º                                     º"<<endl;
		cout<<"  º   3.- EVENTOS DE LA SEMANA          º"<<endl;
		cout<<"  º                                     º"<<endl;
		cout<<"  º   4.- SALIR                         º"<<endl;
		cout<<"  ººººººººººººººººººººººººººººººººººººººº"<<endl;
		cout<<endl;
		cout<<"Ingrese la opcion que desea ejecutar:  "<<ends;
		cin>>op;
		switch(op)
		{
		case 1:
			{
				system ("cls");
				ingresar_evento();
				system("pause");
				system ("cls");
				break;
			}
		case 2:
			{
				system ("cls");
				eventos_del_dia();
				system("pause");
				system ("cls");
				break;
			}
		case 3:
			{
				system ("cls");
				eventos_semana();
				system("pause");
				system ("cls");
				break;
			}
		}
	}
   while(op!=4);
	system("cls");
	cout<<endl;
	cout<<" GRACIAS......"<<endl;
	cout<<endl;

getch();
 }
