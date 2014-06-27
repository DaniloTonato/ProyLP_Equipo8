  #include <iostream.h>
#include <conio.h>

main () {
int A,M,D = 1,N,R,G, dias, dias_mes,cont;
char mes;
cout << "Introduce el mes: ";
cin >> M;
cout << "Introduce el año: ";
cin >> A;
if ((M == 1) || (M == 3) || (M == 5) || (M == 7)
|| (M == 8) || (M == 10) ||(M == 12)){
dias = 31;
}
else if ((M == 4) || (M == 6) || (M == 9)
||(M == 11)) dias = 30;
else if ((A%4 == 0) && (M == 2)) dias = 29;
else dias = 28;
if (A > 1582){
G = int(A/100) - int(A/400) -2;
}
if (A < 1582){
G = 0;
}
if (M == 1 || M == 2) {
M = M + 12;
A = A - 1;
}
N = D + 2 * M + int( 3 * (M + 1) / 5) + A + int( A / 4 ) - G;
R = N - 7 * int(N / 7) + 1;
R += 5;
if (R>7) R -= 7;
if (M == 13) cout << "\t\tEnero\t";
if (M == 14) cout << "\t\tFebrero\t";
if (M == 3) cout << "\t\tMarzo\t";
if (M == 4) cout << "\t\tAbril\t";
if (M == 5) cout << "\t\tMayo\t";
if (M == 6) cout << "\t\tJunio\t";
if (M == 7) cout << "\t\tJulio\t";
if (M == 8) cout << "\t\tAgosto\t";
if (M == 9) cout << "\t\tSeptiembre";
if (M == 10) cout << "\t\tOctubre\t";
if (M == 11) cout << "\t\tNoviembre";
if (M == 12) cout << "\t\tDiciembre";
cout << "\t" "\n";
cout << "Lunes" << "\t" << "Martes" << "\t" << "Mierc" << "\t"
<< "Jueves" << "\t" << "Viernes" << "\t" << "Sabado" << "\t"
<< "Domingo" << "\n";
for (cont = 1; cont < R; cont++){
cout << " " << "\t";
}
for (dias_mes = 1; dias_mes <= dias; dias_mes++){
cout << dias_mes << "\t";
if (cont == 7) {
cout << "\n";
cont=0;
}
cont++;
}
getch();
return 0;
}
