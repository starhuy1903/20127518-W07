#include "array.h"

void menu() {
	cout << "1 - P02 - Trung binh cong so chan\n";
	cout << "2 - P04 - Tim cac so nguyen to\n";
	cout << "3 - P06 - Kiem tra thu tu cac phan tu cua mang\n";
	cout << "4 - P12 - Tim phan tu lon thu hai cua mang\n";
	cout << "5 - P23 - Dem so nguyen to thuoc mang\n";
	cout << "6 - P28 - Tim tong bang 0 tren 2 mang\n";
	cout << "7 - P09 - Dem cac phan tu khac nhau trong mang\n";
	cout << "8 - P26 - Cac phan tu cung xuat hien tren 2 mang\n";
	cout << "9 - P38 - Tich lon nhat cua 2 phan tu trong mang\n";
	cout << "10 - P01 - Tim so chan lon nhat va so le nho nhat\n";
	cout << "0 - Ket thuc chuong trinh\n";
	cout << "Nhap lua chon: ";
}

void inputArray(int a[], int &n){
	while (1) {
		cout << "Nhap n = ";
		cin >> n;
		if (n < 0 || n > Max) cout << "Enter again." << endl;
		else break;
	}

	for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		
	}
void inputArrayPositiveIntegers(int a[], int& n) {
	while (1) {
		cout << "Nhap N = ";
		cin >> n;
		if (n < 0 || n > Max) cout << "Enter again." << endl;
		else break;
	}

	for (int i = 0; i < n; i++) {
		while (1) {
			cin >> a[i];
			if (a[i] < 0) cout << "Enter again." << endl;
			else break;
		}
	}
}
void outputArray(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i];
	}
	cout << "\n";
}

void inputArrayP02(int a[], int& n) {
	while (1) {
		cout << "Nhap n = ";
		cin >> n;
		if (n < 0 || n > Max) cout << "Enter again." << endl;
		else break;
	}

	for (int i = 0; i < n; i++) {
		while (1) {
			cin >> a[i];
			if (a[i] > 100 || a[i] < 1)cout << "Enter again.";
			else break;
		}

	}
}
void evenAverageP02(int a[], int& n, double &sum) {
		int k = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] % 2 == 0) {
				k++;
				sum += a[i];
			}

		}
		sum /= k;
	}
void outputP02(double sum) {
	cout << "Even numbers average: "<<setprecision(2) << fixed << sum<<endl;
}
void mainP02() {
	int a[Max], n;
	double sum = 0;
	inputArrayP02(a, n);
	evenAverageP02(a, n, sum);
	outputP02(sum);
}

void outputP04(int b[Max], int count){
	if (count != 0) {
		cout << "There is(are) " << count << " prime(s).\n";
		for (int i = 0; i < count; i++) {
			cout << b[i] << " ";
		}
		cout << "\n";
	}
	else cout << "There is no prime.\n";
}
bool checkPrimeP04(int a[Max], int i) {
	bool flag = true;
	if (a[i] >= 2) {
		for (int j = a[i] - 1; j > 1; j--) {
			if (a[i] % j == 0) {
				flag = false;
				break;
			}
		}
	}
	else flag = false;
	return flag;
}
void primeP04(int a[], int n) {
	int count(0);
	int b[Max];
	bool flag;
	for (int i = 0; i < n; i++) {
		if (checkPrimeP04(a, i)) b[count++] = a[i];
	}
	outputP04(b, count);
}
void mainP04() {
	int a[Max], n;
	inputArray(a, n);
	primeP04(a, n);
}

bool arrayIncreaseP06(int a[Max], int n) {
	bool flag = true;
	for (int i = 0; i < n - 1; i++) {
		if (a[i] < a[i + 1]);
		else {
			flag = false;
			break;
		}
	}
	return flag;
}
bool arrayDecreaseP06(int a[Max], int n) {
	bool flag = true;
	for (int i = 0; i < n - 1; i++) {
		if (a[i] > a[i + 1]);
		else {
			flag = false;
			break;
		}
	}
	return flag;
}
void outputP06(int a[Max], int n) {
	if (arrayIncreaseP06(a, n)) {
		cout << "Mang la mang tang.\n";
	}
	else if (arrayDecreaseP06(a, n)) {
		cout << "Mang la mang giam.\n";
	}
	else cout << "Mang khong tang khong giam.\n";
}
void mainP06() {
	int a[Max], n;
	inputArray(a, n);
	outputP06(a, n);
}

int maxValueP12(int a[Max], int n) {
	int max = 0;
	for (int i = 0; i < n; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}
	return max;
}
int secondMaxValueP12(int a[Max], int n) {
	int secondMax = 0;
	for (int i = 0; i < n; i++) {
		if (maxValueP12(a, n) == a[i])
			continue;
		else if (secondMax < a[i]) {
			secondMax = a[i];
		}
	}
	return secondMax;

}
void outputP12(int a[Max], int n) {
	cout << "Second Max Value:  " << secondMaxValueP12(a, n) << endl;
}
void mainP12() {
	int a[Max], n;
	inputArrayPositiveIntegers(a, n);
	outputP12(a, n);
}

void outputP23(int count){
	if (count != 0) {
		cout << "There is(are) " << count << " prime(s).\n";
		
	}
	else cout << "There is no prime.\n";
}
void countPrimesP23(int a[Max], int n){
	int count(0);
	int b[Max];
	bool flag;
	for (int i = 0; i < n; i++) {
		if (checkPrimeP04(a, i)) count++;
	}
	outputP23(count);
}
void mainP23() {
	int a[Max], n;
	inputArrayPositiveIntegers(a, n);
	countPrimesP23(a, n);
}

void outputP28(int i, int j) {
	cout << "(" << i << ", " << j << ") ";
}
void checkSumP28(int a[Max], int i, int b[Max], int m) {
	int j;
	for (j = 0; j < m; j++) {
		if (a[i] + b[j] == 0) {
			outputP28(i, j);
			break;
		}
	}
	
}
void checkP28(int a[Max], int n, int b[Max], int m) {
	for (int i = 0; i < n; i++) {
		checkSumP28(a, i, b, m);
	}
}
void mainP28() {
	int a[Max], n;
	int b[Max], m;
	inputArray(a, n);
	inputArray(b, m);
	checkP28(a, n, b, m);
}

bool checkCompareP09(int a[Max], int i, int b[Max], int x) {
	bool flag = true;
	for (int j = 0; j < x; j++) {
		if (a[i] == b[j])
			flag = false;
	}
	return flag;
}
int countP09(int a[Max], int n) {
	int b[Max];
	int x = 1;
	b[0] = a[0];

	for (int i = 1; i < n; i++) {
		if (checkCompareP09(a, i, b, x)) {
			b[x++] = a[i];
		}
	}
	return x;
}
void outputP09(int a[Max], int n) {
	if (countP09(a, n) == 1)cout << "There is no different elements.\n";
	else cout << "There are " << countP09(a, n) << " different elements.\n";
}
void mainP09() {
	int a[Max], n;
	inputArray(a, n);
	outputP09(a, n);
}

bool conditionInputP26(int a[Max], int n) {
	bool flag = true;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] == a[j]) {
				flag = false;
				break;
			}
		}
		if (!flag) break;
	}
	return flag;
}
void inputP26(int a[Max], int& n) {
	while (1) {
		inputArray(a, n);
		if (conditionInputP26(a, n)) break;
		else cout << "Enter again.\n";
	}
}
void outputP26(int a[Max], int i) {
	cout << a[i] << " ";
}
bool compareElementsP26(int a[Max], int i, int b[Max], int m){
	bool flag = false;
	for (int j = 0; j < m; j++) {
		if (a[i] == b[j]) {
			flag = true;
			break;
		}
		
	}
	return flag;
}
void checkP26(int a[Max], int n, int b[Max], int m) {
	for (int i = 0; i < n; i++) {
		if (compareElementsP26(a, i, b, m)) outputP26(a, i);
	}
}
void mainP26() {
	int a[Max], n;
	int b[Max], m;
	inputP26(a, n);
	inputP26(b, m);
	checkP26(a, n, b, m);
}

void productP38(int a[Max], int n, int b[Max], int &k) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			b[k++] = a[i] * a[j];
		}
	}
}
int maxValueP38(int b[Max], int k) {
	int max = b[0];
	for (int i = 1; i < k; i++) {
		if (max < b[i]) {
			max = b[i];
		}
	}
	return max;
}
void outputP38(int a[Max], int i, int j) {
	cout << "(" << a[i] << "," << a[j] << ") ";
}
void maxProductP38(int a[Max], int n) {
	int b[Max], k(0);
	productP38(a, n, b, k);
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (maxValueP38(b, k) == a[i] * a[j]) {
				outputP38(a, i, j);
			}
		}
	}
}
void mainP38() {
	int a[Max], n;
	inputArray(a, n);
	maxProductP38(a, n);
}

bool evenNumberP01(int a[Max], int i){
	bool flag = false;
	if (a[i] % 2 == 0) flag = true;
	return flag;
}
int maxEvenNumberP01(int even[Max], int k) {
	int maxEven = even[0];
	for (int i = 1; i < k; i++) {
		if (maxEven < even[i]) maxEven = even[i];
	}
	return maxEven;
}
int minOddNumberP01(int odd[Max], int h) {
	int minOdd = odd[0];
	for (int i = 1; i < h; i++) {
		if (minOdd > odd[i]) minOdd = odd[i];
	}
	return minOdd;
}
void devideArrayP01(int a[Max], int n, int even[Max], int& k, int odd[Max], int &h) {
	for (int i = 0; i < n; i++) {
		if (evenNumberP01(a, i)) even[k++] = a[i];
		else odd[h++] = a[i];
	}
}
void outputP01(int even[Max], int k,int odd[Max], int h) {
	cout << maxEvenNumberP01(even, k) << " " << minOddNumberP01(odd, h) << endl;
}
void mainP01() {
	int a[Max], n;
	int even[Max], k(0);
	int odd[Max], h(0);
	inputArray(a, n);
	devideArrayP01(a, n, even, k, odd, h);
	outputP01(even, k, odd, h);
}