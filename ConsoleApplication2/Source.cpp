#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<time.h>

using namespace std;


void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");
	int x;
	cout << "Выберите номер задания: " << endl;
	cin >> x;

	if (x == 1) {
		//Массив предназначен для хранения значений весов двадцати человек.С помощью датчика случайных чисел заполнить массив целыми значениями, лежащими в диапазоне от 50 до 100 включительно

		int x[20];


		for (int i = 0; i < 20; i++) {

			x[i] = 50 + rand() % 50;
			cout << x[i] << endl;

		}




	}

	else if (x == 2) {
		/*Заполнить массив из восьми элементов таким образом, чтобы значения элементов при просмотре массива слева направо образовывали :
		убывающую последовательность;
		возрастающую последовательность*/

		int x[8];

		for (int i = 0; i < 8; i++) {

			x[i] = 1 + rand() % 99;
			cout << x[i] << endl;
		}

		int a, c = 0;
	back:
		cout << "Выберите последовательность: " << endl;
		cout << "1) убывающую последовательность" << endl;
		cout << "2) возрастающую последовательность" << endl;
		cin >> a;

		if (a == 1) {
			int j, h;
			for (j = 7; j > 0; j--) {
				for (h = 1; h <= j; h++) {

					if (x[h] > x[h - 1]) {
						c = x[h];
						x[h] = x[h - 1];
						x[h - 1] = c;
					}

				}

			}
			for (int f = 0; f < 8; f++) {
				cout << x[f] << endl;
			}

			cout << "Хотите выбрать другую последовательность? 1)да  2) нет" << endl;
			cin >> a;
			if (a == 1) {

				goto back;

			}
		}

		else {

			for (int j = 0; j < 7; j++) {
				for (int h = 6; h >= j; h--) {

					if (x[h] > x[h + 1]) {
						c = x[h];
						x[h] = x[h + 1];
						x[h + 1] = c;


					}

				}

			}
			for (int f = 0; f < 8; f++) {
				cout << x[f] << endl;
			}



		}
	}

	else if (x == 3) {

		//Ввести целочисленный массив, состоящий из 10 элементов.Поменять местами максимальный и первый элементы.

		int x[10], max = 0, per;

		for (int i = 0; i < 10; i++) {

			x[i] = 1 + rand() % 99;

		}

		for (int j = 0; j < 10; j++) {

			if (x[j] > max) {

				max = x[j];
				cout << x[0] << " : " << max << endl;
			}

		}

		per = x[0];
		x[0] = max;
		max = per;
		cout << "<------------------------->" << endl;
		cout << x[0] << " : " << max << endl;


	}

	else if (x == 4) {

		//Задан массив, состоящий из 15 элементов вещественного типа.Определить количество элементов, значения которых больше первого элемента.

		int x[15];
		x[0] = 52;
		int count = 0;
		for (int i = 1; i < 15; i++) {

			x[i] = 1 + rand() % 99;

			if (x[i] > x[0]) {

				cout << i << ": число " << x[0] << " меньше чем " << x[i] << endl;
				count++;
			}

		}

		cout << count << " чисел больше первого числа" << endl;


	}

	else if (x == 5) {
		//Ввести целочисленный массив, состоящий из 15 элементов.Определить сумму и разность максимального и минимального  элементов
	
		int x[15];
		int max = 0, min = 100;

		for (int i = 0; i < 15; i++) {
		
			x[i] = 1 + rand() % 99;
           
			if (x[i] > max) {
			
				max=x[i];
				
			}

			if (min>x[i]) {
			
				min=x[i];
				
				
			}
		
		}

		int sum, raz;

		sum = max + min;
		raz = max - min;
		cout << "max = " << max << " min = " << min << endl;
		cout << "Сумма равна :" << sum << endl;
		cout << "Разность равна: " << raz << endl;

		
	}
}

