#include<iostream>
#include<string>
using namespace std;
int main()
{
	string Students;
	char choice;
	do {
		string Current_Student;
		cout << "enter student name: ";
		getline(cin, Current_Student);
		cin.ignore();
		Students.append(Current_Student);
		Students.append("\n");
		cout << "Want to continue entering, press Y or y: ";
		cin >> choice;
		cin.ignore();
	} while (choice == 'Y' || choice == 'y');
	cout << Students << endl;
	system("pause");
	return 0;
}