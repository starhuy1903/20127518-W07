#ifndef Array_h
#define Array_h
#include <iostream>
#include <iomanip>
#define Max 100
using namespace std;

void menu();
void inputArray(int a[], int& n);
void inputArrayPositiveIntegers(int a[], int& n);
void outputArray(int a[], int n);

void inputArrayP02(int a[], int& n);
void evenAverageP02(int a[], int& n, double& s);
void outputP02(double s);
void mainP02();


void mainP04();
void primeP04(int a[], int n);
void outputP04(int b[Max], int k);
bool checkPrimeP04(int a[Max], int i);

bool arrayIncreaseP06(int a[Max], int n);
bool arrayDecreaseP06(int a[Max], int n);
void outputP06(int a[Max], int n);
void mainP06();

int maxValueP12(int a[Max], int n);
int secondMaxValueP12(int a[Max], int n);
void outputP12(int a[Max], int n);
void mainP12();

void outputP23(int count);
void countPrimesP23(int a[Max], int n);
void mainP23();

void outputP28(int i, int j);
void checkSumP28(int a[Max], int i, int b[Max], int m);
void checkP28(int a[Max], int n, int b[Max], int m);
void mainP28();

void mainP09();
int countP09(int a[Max], int n);
bool checkCompareP09(int a[Max], int i, int b[Max], int x);
void outputP09(int a[Max], int n);

void mainP26();
bool conditionInputP26(int a[Max], int n);
void inputP26(int a[Max], int &n);
void outputP26(int a[Max], int i);
bool compareElementsP26(int a[Max], int i, int b[Max], int m);
void checkP26(int a[Max], int n, int b[Max], int m);

void productP38(int a[Max], int n, int b[Max], int& k);
int maxValueP38(int b[Max], int k);
void outputP38(int a[Max], int i, int j);
void maxProductP38(int a[Max], int n);
void mainP38();

void mainP01();
void outputP01(int even[Max], int k, int odd[Max], int h);
void devideArrayP01(int a[Max], int n, int even[Max], int& k, int odd[Max], int& h);
int minOddNumberP01(int odd[Max], int h);
int maxEvenNumberP01(int even[Max], int k);
bool evenNumberP01(int a[Max], int i);
#endif
