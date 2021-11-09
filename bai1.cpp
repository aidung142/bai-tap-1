#include <iostream>
using namespace std;

int main(){
	string name;
	int age;
	double averagePoint;
	cout << "Nhap ten cua ban: ";
	getline(cin,name);
	cout <<"Nhap tuoi cua ban: ";
	cin >> age;
	cout <<"Nhap diem tong ket: ";
	cin >> averagePoint;
	
	cout <<"Ten: " << name << "\n";
	cout <<"Tuoi: " << age << "\n";
	cout <<"Diem tong ket: " << averagePoint << endl;
	return 0;
}
