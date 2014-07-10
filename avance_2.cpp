#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <time>


 struct evento
{
  char nombreevento[30], descripcionevento[200];
  char ano1[5], mes1 [2], dia1[2];
  char hora1[2], minutos1[2];
  char anof[5], mesf [2], diaf[2];
  char horaf[2], minutosf[2];
 }
;

struct tiempo
{
  char hora1[2], minutos1[2];
  char horaf[2], minutosf[2];

  }
  ;
  int ingresar_evento()
  {

  }
   ;

  int 	eventos_del_dia()
  {

  }
  ;
  int eventos_semana()
  {

  }
   ;

main()
{

  int op;

		cout<<" \t ESCUELA SUPERIOR POLITECNICA DEL CHIMBORAZO"<<endl;
		cout<<endl;
		cout<<" \t ------LENGUAJES DE PROGRAMACION----------"<<endl;
		cout<<" \t -----------------------------------------"<<endl;
		cout<<" \t -                                       -"<<endl;
		cout<<" \t -   INTEGRANTES:                        -"<<endl;
		cout<<" \t -                                       -"<<endl;
		cout<<" \t -   Erick Gustavo Carre๑o Remache       -"<<endl;
		cout<<" \t -                                       -"<<endl;
		cout<<" \t -   Pablo Marcelo Nieto Moreno          -"<<endl;
      cout<<" \t -                                       -"<<endl;
      cout<<" \t -   Carlos Danilo Tonato Tuquinga       -"<<endl;
		cout<<" \t -----------------------------------------"<<endl;
		cout<<endl;
		system("pause");
		system("cls");
	do
	{

		cout<<" \t ESCUELA SUPERIOR POLITECNICA DEL CHIMBORAZO"<<endl;
		cout<<endl;
		cout<<" \t บบบบบบCALENDARIO DE EVENTOS ESPOCHบบบบบ"<<endl;
		cout<<" \t บบบบบบบบบบบบบMENU PRINCIPALบบบบบบบบบบบบ"<<endl;
		cout<<" \t บ                                     บ"<<endl;
		cout<<" \t บ   1.- INGRESAR EVENTO               บ"<<endl;
		cout<<" \t บ                                     บ"<<endl;
		cout<<" \t บ   2.- EVENTOS DEL DIA               บ"<<endl;
		cout<<" \t บ                                     บ"<<endl;
		cout<<" \t บ   3.- EVENTOS DE LA SEMANA          บ"<<endl;
		cout<<" \t บ                                     บ"<<endl;
		cout<<" \t บ   4.- SALIR                         บ"<<endl;
		cout<<" \t บบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบบ"<<endl;
		cout<<endl;
		cout<<"Ingrese la opcion que desea ejecutar:  "<<ends;
		cin>>op;
		switch(op)
		{
		case 1:
			{
				system ("cls");
            evento carlos_evento;
				ingresar_evento();
            ofstream evento ("C:/Users/erguss/Documents/GitHub/ProyLP_Equipo8/evento.txt");
             evento<<" \t   nombre corto \t  descripcion del evento \t  fecha|hora de inicio  \t fecha|hora fin \n ";
             cout<<"ingrese el nombre del evento \n";
             gets(carlos_evento.nombreevento);
             cout<<"ingrese la descripcion del evento \n";
             gets (carlos_evento.descripcionevento);
             cout<<"ingrese la fecha y hora de inicio \n";
             cin>> carlos_evento.ano1;
             cin>> carlos_evento.mes1;
             cin>> carlos_evento.dia1;
             cin>> carlos_evento.hora1;
             cin>> carlos_evento.minutos1;
             cout<<"ingrese la fecha y hora de finalizacion \n" ;
             cin>> carlos_evento.anof;
             cin>> carlos_evento.mesf;
             cin>> carlos_evento.diaf;
             cin>> carlos_evento.horaf;
             cin>> carlos_evento.minutosf;

             evento<<carlos_evento.nombreevento;
             evento<<carlos_evento.descripcionevento;
             evento<<carlos_evento.ano1;
             evento<<carlos_evento.mes1;
             evento<<carlos_evento.dia1;
             evento<<carlos_evento.hora1;
             evento<<carlos_evento.minutos1;
             evento<<carlos_evento.anof;
             evento<<carlos_evento.mesf;
             evento<<carlos_evento.diaf;
             evento<<carlos_evento.horaf;
             evento<<carlos_evento.minutosf;

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
	cout<<"  GRACIAS...... LINDO DIA c:"<<endl;
	cout<<endl;

getch();
 }