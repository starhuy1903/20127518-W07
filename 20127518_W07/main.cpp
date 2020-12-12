// 20127518
// Nguyen Quoc Huy
// CLC-03

//P02
//Test case 1
//Input: 4
//2 4 6 8
//Output: 5.00
//Test case 2
//Input: 4
//1 3 6 10
//Output: 8.00
//Test case 3
//Input: 4
//10 2 5 2
//Output: 4.67

//P04
//Test case 1
//Input: 5
// 1 2 3 4 5
//Output: 3
//2 3 5
//Test case 2
//Input: 3
//16 20 82
//Output: There is no prime. 
//Test case 3
//Input: 4
// 0 -10 8 13
//Output: 1
//13

//P06
//Test case 1
//Input: 5
// 5 8 5 1 1
//Output: Mang khong tang khong giam.
//Test case 2
//Input: 3
// 3 2 1
//Output: Mang la mang giam. 
//Test case 3
//Input: 4
// 0 2 4 6
//Output: Mang la mang tang.

//P12
//Test case 1
//Input: 8
// 5 12 5 45 87 678 5 1
//Output: 87
//Test case 2
//Input: 2
// 1 2
//Output: 1
//Test case 3
//Input: 4
// 1 2 2 3
//Output: 2

//P23
//Test case 1
//Input: 4
// 1 3 5 7
//Output: 3
//Test case 2
//Input: 5
// 5 8 5 1 1 
//Output: 2
//Test case 3
//Input: 4
// 111 222 333 444
//Output: There is no prime.

//P28
//Test case 1
//Input: 3 4
// 1 2 3
// -6 0 -3 2
//Output: (2, 2)
//Test case 2
//Input: 4 4
// -1 -2 -3 4 
// -1 0 -4 3
//Output:(2, 3) (3, 2) 
//Test case 3
//Input: 3 4
// -50 0 3
// 6 9 0 2
//Output: (1, 3)

//P09
//Test case 1
//Input: 4
// 1 2 3 4
//Output: 4
//
//Test case 2
//Input: 5
// 2 2 3 3 4
//Output: 3
//
//Test case 3
//Input: 3
// 0 0 0 
//Output: There is no different elements.
//

//P26
//Test case 1
//Input: 3 5
// 7 8 9  - 3 6 1 5 8
//Output: 8
//
//Test case 2
//Input: 5 5
// 5 8 4 1 2  - 2 4 1 0 6
//Output: 4 1 2
//
//Test case 3
//Input: 4 1
// 100 200 333 555 - 100
//Output: 100
//

//P38
//Test case 1
//Input: 4
// 1 2 3 4
//Output: (3,4)
//
//Test case 2
//Input: 8
//5 2 4 6 0 1 9 5 
//Output: (6,9)
//Test case 3
//Input: 12
// 1 9 0 3 2 0 0 2 1 5 1 2 2 0 0 2
//Output: (9,5)
//

//P01
//Test case 1
//Input: 4
// 1 2 3 4
//Output: 4 1
//
//Test case 2
//Input: 5
// 2 7 9 13 8
//Output: 8 7
//
//Test case 3
//Input: 3
// 10 12 11
//Output: 12 11
//

#include "array.h"

int main() {
	int choise;
	do {
		menu();

			cin >> choise; cout << "\n";
			system("cls");
			switch (choise)
			{
			case 1: mainP02(); break;

			case 2: mainP04(); break;

			case 3: mainP06(); break;

			case 4: mainP12(); break;
				
			case 5: mainP23(); break;

			case 6: mainP28(); break;

			case 7: mainP09(); break;

			case 8: mainP26(); break;

			case 9: mainP38(); break;
				
			case 10: mainP01(); break;

			case 0: exit(0);
			} 
			do cout << "-Nhan Enter de tro ve Menu-";
			while (cin.get() != '\n');
			cin.get();
			system("cls");
			} while (choise != 0);
	return 0;
}