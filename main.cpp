#include <iostream>
#include <string.h>
using namespace std;

/* Criando um exemplo de código com classes internas no programa */

class exemplo
{
	public:
		exemplo()
		{
			cout << "\nClasse externa sendo chamada...\n";
			data = 5;
		}
		~exemplo()
		{
			cout << "\nClasse sendo destruída...";
		}
			class class_interna
			{
				public:
					class_interna()
					{
						cout << "\nChamando classe interna...\n";
						datai = 20;
					}
					~class_interna()
					{
						cout << "\nClasse interna sendo destruída...\n";
					}
					void exibe_interna()
					{
						cout << "\nDados da interna: "
								<< datai;
					}
				private:
					int datai;
			}objInt;
		void exibe()
		{
			objInt.exibe_interna();
			cout << "\nDados da classe externa: "
					<< data;
		}
	private:
		int data;
};

int main()
{
	exemplo obj_exemplo;
	obj_exemplo.exibe();
}
