#include <iostream>

using namespace std;

int main() {
	int decimal;
	int binario[8], binario2 ;
	int resultado, resto = 0;
	int digito[8];
	int opc;
	while (1 == 1) {

		cout << "\nbienvenido que desea hacer hoy\n" << endl;
		cout << "decimal a binarios: 1 " << endl;
		cout << "binarios a decimales: 2 " << endl;
		cout << "terminar programa: 3 " << endl;
		cin >> opc;


		switch (opc) {
		case 1:
			cout << "escribe numero decimal a binaria" << endl;
			cin >> decimal;
			for (int i = 0; i < 8; i++)
			{
				binario[i] = decimal % 2;
				decimal /= 2;
			}
			cout << "numero binario: ";
			for (int i = 7; i >= 0; i--)
			{
				cout << binario[i];
			}
			cout << endl;
			break;

		case 2:
			cout << "escribe numero binario a decimal" << endl;
			cin >> binario2;

			for (int i = 0; i < 8; i++)
			{
				digito[i] = binario2 % 10;
				binario2 /= 10;
			}

			for (int i = 7; i >= 0; i--)
			{
				resultado = (resto * 2) + digito[i]; 
			}
			cout <<resultado<<endl;
			break;

		case 3:
			cout << "salir" << endl;
			exit(EXIT_SUCCESS);

		default:
			cout << "opcion no valida" << endl;
			break;

		}


	}
	system("pause");
	return 0;
}
