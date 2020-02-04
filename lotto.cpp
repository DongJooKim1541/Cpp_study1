#include <iostream>
#include <time.h>
using namespace std;
void Input_value(int *p1, int*p2, int size);
void swap_com(int* p1, int size);
void compare(int* p1, int*p2, int size);

int main() {

	int user[6], computer[6];

	Input_value(user, computer, 6);
	swap_com(computer, 6);
	compare(user, computer, 6);
	return 0;
}

void Input_value(int* p1, int* p2, int size) {

	cout << "���ϴ� ���� 6���� �Է��Ͻÿ� : ";
	for (int i = 0; i < size; i++) {
		cin >> p1[i];
	}
	srand(time(NULL));
	while (1) {
		int count = 0;
		for (int i = 0; i < size; i++) {
			p2[i] = rand() % 45 + 1;
		}
		for (int i = 0; i < size - 1; i++) {
			for (int j = i + 1; j < size; j++) {
				if (p2[i] == p2[j]) count++;
			}
		}
		if (count == 0)break;
	}
}

void swap_com(int* p1, int size) {
	int temp;

	for (int i = 0; i < size - 1;i++) {
		for (int j = i + 1; j < size; j++) {
			if (p1[i] > p1[j]) {
				temp = p1[j];
				p1[j] = p1[i];
				p1[i] = temp;
			}
		}
	}
}

void compare(int* p1, int*p2, int size) {

	int count = 0;
	cout << "�� ���� : ";
	for (int i = 0; i < size; i++) {
		cout << p1[i] << " ";
	}
	cout << endl;
	cout << "��ǻ�� ���� : ";
	for (int i = 0; i < size; i++) {
		cout << p2[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (p1[i] == p2[j]) {
				count++;
			}
		}
	}
	cout << "���� ��ǻ�Ͱ� ���� ��ġ�ϴ� ���ڴ� " << count << "�� �Դϴ�." << endl;
}