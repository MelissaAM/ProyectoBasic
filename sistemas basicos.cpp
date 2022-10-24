#include <iostream>
#include <stdlib.h>
#include<conio.h>
#include<cmath>
#include<stdio.h>
#include<windows.h>

using namespace std;
void gotoxy(int x1, int y1){

		HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD dwPos;
		dwPos.X=x1;
		dwPos.Y=y1;
		SetConsoleCursorPosition(hcon,dwPos);
}
int main(){
	double num1, num2, num3, num4, num5;
	char res;
	int dato;
	//menu
	do{
	
	cout<<"Bienvenido al sistema matematico de Astrid Alvarez"<<endl;
	cout<<"Se le presentaran a continuacion una serie de opciones, ingrese el numero de la opcion que desea"<<endl;
	cout<<"________________________________________________________________________________________________"<<endl;	
	cout<<"0- Desea terminar el programa"<<endl;
	cout<<"1- Suma, Resta, Multiplicacion y Division de dos numeros"<<endl;
	cout<<"2- Determinar si un numero es par o impar"<<endl;
	cout<<"3- Conversiones"<<endl;
	cout<<"4- Saber si una palabra o un numero es palindromo"<<endl;
	cout<<"5- Conversion de numeros arabigos a romanos"<<endl;
	cout<<"6- Conversion de numeros enteros a letras"<<endl;
	cout<<"8- Una tabla de multiplicar especifica"<<endl;
	cout<<"9- Tablas de multiplicar del 1 al 10"<<endl;
	cout<<"10- Forma grafica una multiplicacion"<<endl;
	cout<<"11- Conversion de numeros decimales a binario"<<endl;
	cout<<"12- Conversion de numeros decimales a hexadecimales"<<endl;
	cout<<"13- Creacion de figuras Geometricas"<<endl;
	cout<<"14- Mover un punto en toda la pantalla"<<endl;
	cout<<"15- Simulacion de un Cajero Automatico"<<endl;
	cout<<"16- Calcular la hipotenusa"<<endl;
	cout<<"________________________________________________________________________________________________"<<endl;
	cout<<"Que opcion desea seleccionar?"<<endl;
	cin>>dato;

	//cuerpo de los programas
	switch(dato)
	{
	case 0:
		cout<<"Programa finalizado, gracias por utilizarlo. :)"<<endl;
		return 0;
		break;
	case 1:
		double suma, resta, mult, div;
		cout<<"Usted desea saber la suma, resta, multiplicacion y division de dos numeros"<<endl;
		cout<<"Ingrese el primer numero";
		cin>>num1;
		cout<<"Ingrese el segundo numero";
		cin>>num2;
	
		suma=num1+num2;
		resta=num1-num2;
		mult=num1*num2;
		div=num1/num2;
	
		cout<<"la suma de "<<num1<<" mas "<<num2<<"es:"<<suma<<endl;
		cout<<"la resta de "<<num1<<" menos "<<num2<<" es:"<<resta<<endl;
		cout<<"la multiplicacion de "<<num1<<" por "<<num2<<" es:"<<mult<<endl;
		cout<<"la division de "<<num1<<" entre "<<num2<<" es:"<<div<<endl;
		break;
	
	case 2:
		int numero;
		cout<<"Usted desea saber si un numero es par o impar"<<endl;
		cout<<"_____________________________________________"<<endl;
		cout<<"Ingrese el numero";
		cin>>numero;
		
		if(numero%2==0){
			cout<<"El numero es par"<<endl;
		}
		else{
			cout<<"El numero es impar"<<endl;
		}
		break;
		
	case 3:
		int conversion; 
		cout<<"Usted desea realizar conversiones"<<endl;
		cout<<"__________________________________"<<endl;
		cout<<"1- kilometros a millas"<<endl;
		cout<<"2- Millas a kilometros"<<endl;
		cout<<"3- metros a pulgadas"<<endl;
		cout<<"4- pulgadas a metros"<<endl;
		cout<<"5- libras a kilos"<<endl;
		cout<<"6- kilos a libras"<<endl;
		cout<<"Que desea convertir?"<<endl;
		cin>>conversion;
		switch(conversion){
			float millas, km;
		case 1:
			cout<<"Escriba cuantos kilometros desea convertir"<<endl;
			cin>>km;
			millas=km*0.6213;
			cout<<km<<" kilometros son "<<millas<<" millas"<<endl;
		break;
		case 2:
			cout<<"Escriba las millas que desea convertir"<<endl;
			cin>>millas;
			km = millas * 1.6093;
			cout<<millas<<" millas son "<<km<<" km"<<endl;
		break;
		
			float mts, pulg;	
		case 3:
			cout<<"Escriba los metros a convertir:"<<endl;
			cin>>mts;
			pulg=mts*39.3701;
			cout<<mts<<" mts son "<<pulg<<" pulgadas:"<<endl;
		break;
		case 4:
			cout<<"Escriba las pulgadas a convertir:"<<endl;
			cin>>pulg;
			mts=pulg*0.0254;
			cout<<pulg<<" pulgadas son "<<mts<<" metros"<<endl;
		break;
		
			float lb, kg;
		case 5:
			cout<<"Escriba las libras que desea convertir:"<<endl;
			cin>>lb;
			kg=lb*0.4536;
			cout<<lb<<" libras son "<<kg<<" kilogramos"<<endl;
		break;
		case 6:
			cout<<"Escriba los kilogramos que desea convertir:"<<endl;
			cin>>kg;
			lb=kg*2.2046;
			cout<<kg<<" kilogramos son "<<lb<<" libras"<<endl;
		break;
	}
	break;
	case 4:
	{
	string p;
	cout<<"Usted quiere saber si una palabra o numero es palindromo "<<endl;
	cout<<"Escriba la palabra: "<<endl;
	cin>>p;
	bool comprobar;
	for(int i=0; i<p.length();i++)
	{
		if(i==p.length()||0>p.length()-1-i){
			break;
		}
		if(p[i]==p[p.length()-1-i]){
			comprobar=true;
		}
		else{
			comprobar=false;
			break;
		}	
	}
	if(comprobar==true){
		cout<<"Es palindromo"<<endl;
	}
	else{
		cout<<"No es palindromo"<<endl;
	}

	}	
	break;
	
	case 5:{
		int num, uni, dec, cen, mil;
		cout<<"Usted desea convertir numeros arabigos(cotidianos)  a romanos."<<endl;
		cout<<"Que numero desea convertir? "<<endl;
		cin>>num;
		uni = num%10; num /=10;
		dec = num%10; num/=10;
		cen = num%10; num/=10;
		mil = num%10; num/=10;
		switch(mil){
			case 1: cout<<"M"; break;
			case 2: cout<<"MM"; break;
			case 3: cout<<"MMM"; break;
		}
		switch(cen){
			case 1: cout<<"C"; break;
			case 2: cout<<"CC"; break;
			case 3: cout<<"CCC"; break;
			case 4: cout<<"CD"; break;
			case 5: cout<<"D"; break;
			case 6: cout<<"DC"; break;
			case 7: cout<<"DCC"; break;
			case 8: cout<<"DCCC"; break;
			case 9: cout<<"DM"; break;
		}
		switch(dec){
			case 1: cout<<"X"; break;
			case 2: cout<<"XX"; break;
			case 3: cout<<"XXX"; break;
			case 4: cout<<"XL"; break;
			case 5: cout<<"L"; break;
			case 6: cout<<"LX"; break;
			case 7: cout<<"LXX"; break;
			case 8: cout<<"LXX"; break;
			case 9: cout<<"XC"; break;
		}
		switch(uni){
			case 1: cout<<"I"; break;
			case 2: cout<<"II"; break;
			case 3: cout<<"III"; break;
			case 4: cout<<"IV"; break;
			case 5: cout<<"V"; break;
			case 6: cout<<"VI"; break;
			case 7: cout<<"VII"; break;
			case 8: cout<<"VII"; break;
			case 9: cout<<"IX"; break;
		}
		break;
}

		case 6:
		{
	int E,D, i;
 int U,d,C;
 int d1,d2;
 double a, Q=500.00;
 
 inicio:
 	
 cout<<"Ingrese el numero que desea convertir del 1 al 999:"<<endl;
 cin>>a;
 if(a>=0 && 0<=a)
 {
 	Q=(a);}
	 else 
	 goto intentar;
	 
	 E=a;
	
	 cout<<"El numero convertido a letras es: "<<endl;
	 U=E%10; E=E/10;
	 d=E%10;  E=E/10;
	 C=E%10;  E=E/10;
	 
	 d1=D%10;  D=D/10;
     d2=D%10;	
     
     switch(C){
     	case 0: cout<<""; break;
     	case 1: if(d==0 && U==0)
     	{cout<<"Cien ";}
     	else{cout<<"Ciento ";}break;
     	case 2: cout<<"Doscientos ";break;
     	case 3: cout<<"Trescientos";break;
     	case 4: cout<<"Cuatrocientos ";break;
     	case 5: cout<<"Quinientos ";break;
     	case 6: cout<<"Seiscientos ";break;
     	case 7: cout<<"Setecientos ";break;
     	case 8: cout<<"Ochocientos ";break;
     	case 9: cout<<"Novecientos ";break;
     	
	 }
	 switch(d){
	 	case 1: switch (U){
	 	case 0: cout<<"Diez ";break;
		case 1: cout<<"Once ";break;
		case 2: cout<<"Doce ";break;
		case 3: cout<<"Trece ";break;
		case 4: cout<<"Catorce ";break;
		case 5: cout<<"Quince ";break;
		case 6: cout<<"Dieciseis ";break;
		case 7: cout<<"Diecisiete ";break;
		case 8: cout<<"Dieciocho ";break;
		case 9: cout<<"Diecinueve ";break;
		}
		  break;
		 case 2: if(U==0){
		 	cout<<"veinte";
			 }
		 	else
		 	{cout<<"veinti ";}break;
		 case 3: if(U==0)
		 	{cout<<"treinta ";}
		 	else
		 	{cout<<"treinta y ";}break;
		 case 4: if(U==0)
		 	{cout<<"Cuarenta ";}
		 	else
		   	{cout<<"cuarenta y ";}break;
		 case 5: if(U==0)
		 	{cout<<"cincuenta ";}
		 	else
		 	{cout<<"cincuenta y ";}break;
		 case 6: if(U==0)
		 	{cout<<"sesenta ";}
		 	else
		   	{cout<<"sesenta y ";}break;
		 case 7: if(U==0)
		 	{cout<<"setenta ";}
		 	else
		 	{cout<<"setenta y ";}break;	
		 case 8: if(U==0)
		 	{cout<<"ochenta ";}
		 	else
		   	{cout<<"ochenta y ";}break;
		 case 9: if(U==0)
		 	{cout<<"noventa ";}
		 	else
		 	{cout<<"noventa y ";}break;	
	 }
	switch(U)
	{
	case 0: if(C==0 && d==0 && d1==0 && d2==0)
		{cout<<"cero ";}
		else
		{cout<<" ";}break;
	case 1:	if(C==0 && d==0 && d1==0 && d2==0)
		{cout<<"uno ";}
		else
		if(C==0 && d>=3 && d1==0 && d2==0)
		{cout<<"uno ";}
		else
		if(C>=1 && d>=3 || d==0 && d1==0 && d2==0)
		{cout<<"uno ";}
		else
		{cout<<" ";}break;
	case 2:	if(C==0 && d==0 && d1==0 && d2==0)
		{cout<<"dos ";}
		else
		if(C==0 && d>=3 && d1==0 && d2==0)
		{cout<<"dos ";}
		else
		if(C>=1 && d>=3 || d==0 && d1==0 && d2==0)
		{cout<<"dos ";}
		else
		{cout<<" ";}break;
	case 3:	if(C==0 && d==0 && d1==0 && d2==0)
		{cout<<"tres ";}
		else
		if(C==0 && d>=3 && d1==0 && d2==0)
		{cout<<"tres ";}
		else
		if(C>=1 && d>=3 || d==0 && d1==0 && d2==0)
		{cout<<"tres ";}
		else
		{cout<<" ";}break;
	case 4:	if(C==0 && d==0 && d1==0 && d2==0)
		{cout<<"cuatro ";}
		else
		if(C==0 && d>=3 && d1==0 && d2==0)
		{cout<<"cuatro ";}
		else
		if(C>=1 && d>=3 || d==0 && d1==0 && d2==0)
		{cout<<"cuatro ";}
		else
		{cout<<" ";}break;
	case 5:	if(C==0 && d==0 && d1==0 && d2==0)
		{cout<<"cinco ";}
		else
		if(C==0 && d>=3 && d1==0 && d2==0)
		{cout<<"cinco ";}
		else
		if(C>=1 && d>=3 || d==0 && d1==0 && d2==0)
		{cout<<"cinco ";}
		else
		{cout<<" ";}break;
	case 6:	if(C==0 && d==0 && d1==0 && d2==0)
		{cout<<"seis ";}
		else
		if(C==0 && d>=3 && d1==0 && d2==0)
		{cout<<"seis ";}
		else
		if(C>=1 && d>=3 || d==0 && d1==0 && d2==0)
		{cout<<"seis ";}
		else
		{cout<<" ";}break;
	case 7:	if(C==0 && d==0 && d1==0 && d2==0)
		{cout<<"siete ";}
		else
		if(C==0 && d>=3 && d1==0 && d2==0)
		{cout<<"siete ";}
		else
		if(C>=1 && d>=3 || d==0 && d1==0 && d2==0)
		{cout<<"siete ";}
		else
		{cout<<" ";}break;
	case 8:	if(C==0 && d==0 && d1==0 && d2==0)
		{cout<<"ocho ";}
		else
		if(C==0 && d>=3 && d1==0 && d2==0)
		{cout<<"ocho ";}
		else
		if(C>=1 && d>=3 || d==0 && d1==0 && d2==0)
		{cout<<"ocho ";}
		else
		{cout<<" ";}break;	
	case 9:	if(C==0 && d==0 && d1==0 && d2==0)
		{cout<<"nueve ";}
		else
		if(C==0 && d>=3 && d1==0 && d2==0)
		{cout<<"nueve ";}
		else
		if(C>=1 && d>=3 || d==0 && d1==0 && d2==0)
		{cout<<"nueve ";}
		else
		{cout<<" ";}break;						
	}
	
cout<<" ";

cout<<""<<endl;

goto ok;
intentar:
{cout<<"El monto requerido no se encuentra"<<endl;}
cout<<"Intentar nuevamente"<<endl;
op:
cout<<"1. si"<<endl;
cout<<"2. no"<<endl;
cin>> i;

system("cls");
if (i==1)
{goto inicio;}
else
if (i==2)
{goto final;}
else
cout<<"La opcion ingresada no es valida"<<endl;
cout<<"Por favor ingrese una de las dos opciones"<<endl;
goto op;
ok:
	
op2:
cout<<""<<endl;
cout<<"Desea convertir nuevamente? "<<endl;
cout<<"[1]  SI"<<endl;
cout<<"[2]  NO"<<endl;
cout<<"Escriba la opcion: ";
cin>>i;
system("cls");
if(i==1)
{goto inicio;}
else
if(i==2)
{goto final;}

else
cout<<"la opcion ingresada no valida"<<endl;
cout<<"por favor ingrese de nuevo"<<endl;
goto op2;
final:
	{cout<<"Gracias por preferirnos, vuelva pronto";}

	system("pause");
	system("cls");	
}
	break;

	case 8:{
		cout<<"Usted desea saber una tabla de multiplicar"<<endl;
		cout<<"___________________________________________"<<endl;
		int num;
		do{
		cout<<"Digite la tabla que desea saber: "<<endl;
		cin>>num;
		}while((num<1)||(num>10));
		
		for(int i=1;i<=10;i++){
			cout<<num<<" * "<<i<<" = "<<num*i<<endl;;
		}
	break;
}
	case 9:
	cout<<"Usted quiere saber las tablas de multiplicar del 1 al 10"<<endl;
	cout<<"__________________________________________________________"<<endl;
	for(int i = 1; i<=10; i++){
		cout<<"------------------------------------"<<endl;
		cout<<"Tabla del "<<i<<endl;
		
		for(int n=1; n<=10; n++){
			cout<<i<<" * "<<n<<" = "<<i*n<<endl;
		}	
	}
	
	break;
	
	case 10:
		cout<<"Usted va a ver la forma grafica de una multiplicacion"<<endl;
		cout<<"-----------------------------------------------------"<<endl;
	int n1, n2, multi;
	cout<<"Escriba su primer numero: "<<endl;
	cin>>n1;
	cout<<"Escriba su segundo numero: "<<endl;
	cin>>n2;
	multi=n1*n2;
	 
	cout<<"     "<<n1<<endl;
	cout<<"x      "<<n2<<endl;
	cout<<"---------"<<endl;
	cout<<"    "<<multi<<endl; 
	break;
	
	case 11:
	int decimal;
	short binario[8];
	cout<<"Usted quiere convertir un decimal a binario"<<endl;
	cout<<"-------------------------------------------"<<endl;
	cout<<"Escriba el decimal que desea convertir: "<<endl;
	cin>>decimal;
	for(int i=0; i<8; i++){
		binario[i]=decimal %2;
		decimal/= 2;
	}	
	cout<<"El numero "<<decimal<<" a binario es: "<<endl;
	for(int i=7; i>=0; i--){
		cout<<binario[i];
	}
	cout<<endl;
	break;
	
	case 12:{
	cout<<"Usted desea convertir numeros decimales a hexadecimales"<<endl;
	cout<<"--------------------------------------------------------"<<endl;
	int digitoex[20];
	int decimal, residuo, resultado, i=0;
	
	cout<<"introduce el numero decimal a convertir: "<<endl;
	cin>>decimal;
	do
	{ 
	residuo = decimal % 16;
	resultado = decimal / 16;
	digitoex[i] = residuo;
	decimal = resultado;
	i++;
	} while(resultado > 15);
	digitoex[i] = resultado;
	cout<<"El hexadecimal es equivalente a: ";
	for(int j = i; j >= 0; j--){
		if(digitoex[j]==10){
			cout<<"A";
			}
			else if (digitoex[j]==11){
			cout<<"B";	
			}
			else if (digitoex[j]==12){
			cout<<"C";
			} 
			else if(digitoex[j]==13){
				cout<<"D";
			}
			else if(digitoex[j]==14){
				cout<<"E";
			}
			else if(digitoex[j]==15){
				cout<<"F";
			}
			else
			{
				cout<<digitoex[j];
			}
		
	}
	cout<<endl;	
	}
	break;
	
	case 13:
		cout<<"Usted desea ver algunas figuras geometricas."<<endl;
		cout<<"--------------------------------------------"<<endl;
		cout<<"De cuantas filas quiere sus figuras?"<<endl;
		int n;
		cin>>n;
		cout<<"----------CUADRADO---------------"<<endl;
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n;j++)
			{
				cout<<"& ";
			}
			cout<<endl;
		}
		cout<<"---------TRIANGULO---------"<<endl;
		for(int i=0; i<n; i++)
		{
			for(int j=i; j<n; j++)
			{
				cout<<" ";
			}
			for(int j=0; j<=i; j++)
			{
				cout<<"& ";
			}
			cout<<endl;
		}
		cout<<"------------ROMBO------------"<<endl;
			for(int i=0; i<n; i++)
			{
			for(int j=i; j<n; j++)
			{
				cout<<" ";
			}
			for(int j=0; j<=i; j++)
			{
				cout<<"& ";
			}
			cout<<endl;
		}
		for(int i=1; i<n; i++)
			{
			for(int j=0; j<=i; j++)
			{
				cout<<" ";
			}
			for (int j=i; j<n; j++){
			cout<<"& ";
		}
		cout<<endl;
	}
		cout<<"------------FLECHA------------"<<endl;
			for(int i=0; i<n; i++)
			{
			for(int j=i; j<n; j++)
			{
				cout<<" ";
			}
			for(int j=0; j<=i; j++)
			{
				cout<<"& ";
			}
			cout<<endl;
		}
			for(int i=0; i<n; i++)
			{
			for(int j=0; j<(n*2)/3; j++)
			{
				cout<<" ";
			}
			for(int j=0; j<(n*2)/3; j++)
			{
				cout<<"& ";
			}
			cout<<endl;
		}		
	break;
	case 14:{
	cout<<"Puede mover el punto con las teclas a, s, w, d"<<endl;
	cout<<"NOTA: debe cerrar el programa para realizar alguna otra accion (presentamos fallas tecnicas)"<<endl;
	char oppcion;
	int x=10, y=10;
		while(oppcion!='z'){
			system("cls");
		gotoxy(x,y); cout<<"*";
		oppcion=getch();
		switch(oppcion)
		{
			case 'w': y--; break;
			case 's': y++; break;
			case 'a': x--; break;
			case 'd': x++; break;
			}	
		}

		
		}

	break;
	case 15:{
	string banco; 
	char resp;
	int saldo_in=0, opc, respuesta, monto, contra1=0, contra2=0, multi;
	double extra, saldo=0;
	
	cout<<"\tBienvenido a la simulacion de un cajero virtual :D"<<endl;
	cout<<"Para poder realizar la simulacion, llene la siguiente informacion: "<<endl;
	cout<<"Cuanto dinero tiene su cuenta bancaria? "<<endl;
	cin>>saldo_in;
	cout<<"De que banco le gustaria su cajero? "<<endl;
	cin>>banco;
	do{
	cout<<"CAJERO AUTOMATICO "<<banco<<endl;
	cout<<"-------Que desea realizar---------"<<endl;
	cout<<"1- Consultar dinero en cuenta:"<<endl;
	cout<<"2- Retirar dinero en la cuenta"<<endl;
	cout<<"3- Cambiar pin"<<endl;
	cout<<"4- Salir"<<endl;
	cout<<"Opcion:";
	cin>>opc;
	
		switch(opc){
			case 1:
				cout<<"1. cuenta monetaria \n2. cuenta de ahorro"<<endl;
				cin>>respuesta;	
				if(respuesta==1){
					cout<<"Su dinero actual es: Q."<<saldo_in<<endl;
				}
				if(respuesta==2){
				cout<<"Su dinero actual es de: "<<saldo_in<<endl;
			}
			
			break;
			case 2:
				cout<<"1. cuenta monetaria \n2. cuenta de ahorro"<<endl;
				cin>>respuesta;	
				if(respuesta==1){
					cout<<"1. Q.50.00 \n2. Q.100.00 \n3. Q.200.00\n4. Q.500.00\n5. Q.1000.00\n6. monto variable"<<endl;
					cin>>monto;
					switch(monto){
		
					case 1:
					cout<<"-------tome su dinero------"<<endl;
					break;
					case 2:
					cout<<"-------tome su dinero------"<<endl;
					break;
					case 3:
					cout<<"-------tome su dinero------"<<endl;
					break;
					case 4:
					cout<<"-------tome su dinero------"<<endl;
					break;
					case 5:
					cout<<"-------tome su dinero------"<<endl;
					break;
					case 6:
					cout<<"Que cantidad en multiplos de 50 desea retirar "<<endl;
					cin>>multi;
					cout<<"-------tome su dinero------"<<endl;
					break;
					}
					break;
				}
				if(respuesta==2){
					cout<<"1. Q.50.00 \n2. Q.100.00 \n3. Q.200.00\n4. Q.500.00\n5. Q.1000.00\n6. monto variable"<<endl;
					cin>>monto;
					
					switch(monto){
					case 1:
					cout<<"-------tome su dinero------"<<endl;
					break;
					case 2:
					cout<<"-------tome su dinero------"<<endl;
					break;
					case 3:
					cout<<"-------tome su dinero------"<<endl;
					break;
					case 4:
					cout<<"-------tome su dinero------"<<endl;
					break;
					case 5:
					cout<<"-------tome su dinero------"<<endl;
					break;
					case 6:
					cout<<"Que cantidad en multiplos de 50 desea retirar "<<endl;
					cin>>multi;
					cout<<"-------tome su dinero------"<<endl;
					break;
					}
					break;
	
			}
			case 3:
			cout<<"Digite su contraseña anterior: "<<endl;
			cin>>contra1;
			cout<<"Digite su contraseña nueva: "<<endl;
			cin>>contra2;
			break;
		
			case 4:
				cout<<"Gracias por utilizar nuestro servicio"<<endl;
				break;
		}
			cout<<"Desea otra accion? (s/n)"<<endl;
			cin>>resp;
			
			}while(resp=='s'||resp=='S');

}
	break;
		
	case 16:{
		
	int cat1, cat2;
	float res1, res2;
		cout<<"Usted desea sacar la hipotenusa de un triangulo:"<<endl;
		cout<<"------------------------------------------------"<<endl;
		cout<<"Ingrese el cateto -a- del triangulo: "<<endl;
		cin>>cat1;
		cout<<"Ingrese el cateto -b- del triangulo: "<<endl;
		cin>>cat2;
		res1=((cat1*cat1)+(cat2*cat2));
		res2=sqrt(res1);
		cout<<"La hipotenusa o lado -c- es: "<<res2<<endl;
		break;
		}
}
cout<<endl;
cout<<"Desea ejecutar otro programa? (S/N)"<<endl;
cin>>res;
cout<<"--------------------------------------"<<endl;
}
while(res=='S'|| res=='s');
}




