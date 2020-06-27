#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int opt, size, j = 0;
	char retry;
	start:
	system("cls");	
	cout<< "Que figura quieres: \n1-Piramide \n2-Triangulo recto al lado izquierdo \n3-Triangulo recto al lado derecho \n4-Triangulo recto al lado izquierdo boca abajo \n5-Triangulo recto al lado derecho boca abajo \n6-Diamante \n7-Cuadrado \n8-Piramide boca abajo \n";
	cin>> opt;
	if(opt < 1 || opt > 8)
		goto start;
	cout << "De que tamano quieres la figura: ";
	cin >> size;
	switch(opt)
	{
		case 1:
			{
				for(int x = 1; x <= size; x++)
				{
					j = size;
					for(j; j >= x; j--)
					cout << " ";
					for(int y=1; y <= x; y++)
					cout << "* ";
					cout << endl;	
				}
				break;
			}
		case 2:
			{
				for(int x = 1; x <= size; x++)
				{
					for(int y=1; y <= x; y++)
					cout << "* ";
					cout << endl;	
				}
				break;
			}
		case 3:	
			{
				for(int x = 1; x <= size; x++)
				{
					j = size;
					for(j; j > x; j--)
					cout << "  ";
					for(int y=1; y <= x; y++)
					cout << "* ";
					cout << endl;	
				}
				break;
			}
		case 4:
			{
				for(size; size >= 1; size--)
				{
					for(int y=1; y <= size; y++)
					cout << "* ";
					cout << endl;	
				}
				break;
			}	
		case 5:
			{
				int x = 1;
				for(size; size >= x; size--)
					{
						for(int z = 1; z <= j; z++)
							cout << "  ";
						for(int y=1; y <= size; y++)								
							cout << "* ";
						cout << endl;
						j++;
					}
					break;
			}	
		case 6:
		{
			for(int a = 1; a <= size; a++)
			{
				for(int c = size-1; c >= a; c--)
					cout << " ";
				for(int b = 1; b <= a; b++)
					cout << "* ";
				cout << endl;		
			}	
			for(int a = size-1; a >= 1; a--)
			{
				for(int c = size-1; c >=a; c--)
					cout << " ";
				for(int b = a; b >= 1; b--)	
					cout << "* ";
				cout << endl;	
				
			}	
			break;
		}
		case 7:
		{
			for (int x = 1; x < size; x++)
			{
				for (int y = 1; y < size; y ++)
					cout << "* ";
				cout << endl;	
			}
			break;
		}	
		case 8:
			{
				for(int a = size; a >= 1; a--)
			{
				for(int c = size; c >=a; c--)
					cout << " ";
				for(int b = a; b >= 1; b--)	
					cout << "* ";
				cout << endl;	
			}
			}
		}
	oops:	
	cout << "Quieres volver a intentarlo?{n/s}\n";
	cin >> retry;
	if((retry != 'n') && (retry != 'N') && (retry != 's') && (retry != 'S'))
		goto oops;
	if(retry == 's' || retry == 'S')
		goto start;		
	system("pause");	
	return 0;
}
