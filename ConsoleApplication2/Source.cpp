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
	cout << "�������� ����� �������: " << endl;
	cin >> x;

	if (x == 1) {
		//������ ������������ ��� �������� �������� ����� �������� �������.� ������� ������� ��������� ����� ��������� ������ ������ ����������, �������� � ��������� �� 50 �� 100 ������������

		int x[20];


		for (int i = 0; i < 20; i++) {

			x[i] = 50 + rand() % 50;
			cout << x[i] << endl;

		}




	}

	else if (x == 2) {
		/*��������� ������ �� ������ ��������� ����� �������, ����� �������� ��������� ��� ��������� ������� ����� ������� ������������ :
		��������� ������������������;
		������������ ������������������*/

		int x[8];

		for (int i = 0; i < 8; i++) {

			x[i] = 1 + rand() % 99;
			cout << x[i] << endl;
		}

		int a, c = 0;
	back:
		cout << "�������� ������������������: " << endl;
		cout << "1) ��������� ������������������" << endl;
		cout << "2) ������������ ������������������" << endl;
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

			cout << "������ ������� ������ ������������������? 1)��  2) ���" << endl;
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

		//������ ������������� ������, ��������� �� 10 ���������.�������� ������� ������������ � ������ ��������.

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

		//����� ������, ��������� �� 15 ��������� ������������� ����.���������� ���������� ���������, �������� ������� ������ ������� ��������.

		int x[15];
		x[0] = 52;
		int count = 0;
		for (int i = 1; i < 15; i++) {

			x[i] = 1 + rand() % 99;

			if (x[i] > x[0]) {

				cout << i << ": ����� " << x[0] << " ������ ��� " << x[i] << endl;
				count++;
			}

		}

		cout << count << " ����� ������ ������� �����" << endl;


	}

	else if (x == 5) {
		//������ ������������� ������, ��������� �� 15 ���������.���������� ����� � �������� ������������� � ������������  ���������
	
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
		cout << "����� ����� :" << sum << endl;
		cout << "�������� �����: " << raz << endl;

		
	}
}

