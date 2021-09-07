
#include <iostream>
using namespace std;

union Valorat {
	int ru;
	float eu;
	char hu;
};


struct Valorant {
	Valorat ChoEtoTakoe;
	unsigned int Hueta : 1;          // 3 битых поля.
	unsigned int Blyatstvo : 1;
	unsigned int Soqa : 1; 

};


int main()
{

	{   
		/*HomeWork1
		  Создать и инициализировать переменные пройденных типов данных.
		*/

		short int si_var{ 66 };
		cout << si_var << endl;

		int i_var{ 6666 };
		cout << i_var << endl;

		long long ll_var{ 666'666'666'666'666 };
		cout << ll_var << endl;

		char c_var{ 'X' };
		cout << c_var << endl;

		bool xv{ true };        //>1
		xv = false;             //=0
		cout << xv << endl;

		float xs = 3.14f;
		cout << xs << endl;

		double d_var = 1.7E-308;
		cout << d_var << endl;

		cout << "tiktak" << endl;
	}

	{   setlocale(LC_ALL, "Russian");
	/*HomeWork2
	  Создать перечисление (enum) с возможными вариантами символов для игры в крестики-нолики.
	*/
	enum XBOXКРЕСТИКИНОЛИКИ { X, O, пустота };

	/*HomeWork3
	  Создать массив, способный содержать значения такого перечисления и инициализировать его.
	*/
	XBOXКРЕСТИКИНОЛИКИ magix_arr[9] = { пустота, пустота, пустота,  пустота,  пустота,  пустота,  пустота,  пустота,  пустота, };

	/*HomeWork4
	Создать структуру (struct) данных «Для игры в крестики-нолики» и снабдить его всеми необходимыми свойствами (подумайте что может понадобиться).
	*/
	struct HushXOGAME
	{
		XBOXКРЕСТИКИНОЛИКИ magix_line1[3] = { пустота, пустота, пустота };
		XBOXКРЕСТИКИНОЛИКИ magix_line2[3] = { пустота, пустота, пустота };
		XBOXКРЕСТИКИНОЛИКИ magix_line3[3] = { пустота, пустота, пустота };
	};

	}
	/*HomeWork5
	Создать структуру (struct MyVariant) объединяющую: union MyData (int, float, char) и 3-и битовых поля (флага) 
	указывающими какого типа значение в данный момент содержится в объединении (isInt, isFloat, isChar).
	Продемонстрировать пример использования в коде этой структуры.
	*/
	Valorant Earth;
	Earth.ChoEtoTakoe.hu = 'X';
	Earth.Blyatstvo = 1;
	cout << Earth.ChoEtoTakoe.hu << endl;
	cout << Earth.ChoEtoTakoe.ru << endl;
	cout << Earth.ChoEtoTakoe.eu << endl;

	return 0;
}