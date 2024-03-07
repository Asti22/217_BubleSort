

#include <iostream>
using namespace std; 

int arr[20];
int n;

void input() {
	while (true) 
	{
		cout << "Masukan banyaknya elemen pada array : ";
		cin >>n;
		if (n <= 20)
		   break;
		else {
			cout << "\nArray dapat mempunyai maksimal 20 elemen. \n";
		}

	}
	cout << endl;
	cout << "===============" << endl;
	cout << "Masukan elemen array" << endl;
	cout << "===============" << endl;

	for (int i = 0; i < n; i++) {
		cout << "data ke_" << (i + 1) << ": ";
		cin >> arr[i];
	}

}

void bubbleSortArray() {  // prosedur untuk mengurutkan array dengan metode bubble sort
	int pass = 1; // step 1

	do {
		for(int j = 0; j <= n - 1 - pass; j++) { //step 2
			if (arr[j] > arr[j + 1]) { //step 3
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
		pass = pass + 1;  //step 4
	} while (pass <=n);  //step 5

}

void display() {
	cout << endl;
	cout << "=================================" << endl;
	cout << "Element Array yang telah tersusun" << endl;
	cout << "=================================" << endl;
	for (int j = 0; j < n;j ++) {
		cout << arr[j] << endl; //output setiap elemen array pada

	}
	cout << "jumlah pass = " << n - 1 << endl; //menampilkan total array
}

int main()
{
	input(); //memanggil prosedur untuk mengimput data
	bubbleSortArray(); //memanggil prosedur bubble
	display(); //memanggil prosedur untuk memanggilkan data yang telah urut
	system("pause");

	return 0;
}







