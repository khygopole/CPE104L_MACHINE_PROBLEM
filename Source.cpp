#include <iostream>
#include <string>
#include "unorderedLinkedList.h"
#include "unorderedArrayListType.h"

using namespace std;

int main()
{
	unorderedLinkedList<string> patient;
	unorderedLinkedList<int> patientNo;
	unorderedArrayListType<char> symptom(15);
	unorderedArrayListType<int> days(14);

	int patientNum = 0;
	char option;
	char confirmSymptom;
	string name;
	const int MAXDAYS = 14;
	const int SYMPTOMS = 15;
	string symptomArray[15] = {};

	cout << "'E' - To enter a new entry\n'S' - To search for an existing entry\n'P' - To show all the entries\n'X' - To terminate the program" << endl;
	cout << "Choose an option to be made in this program: ";
	cin >> option;

	do
	{
		switch (option)
		{
		case 'E':
		{
			patientNum++;
			cout << "You are currently Patient Number " << patientNum << ".\n";
			//patientNo.insertLast(patientNum);
			cin.ignore(1000, '\n');
			cout << "Please enter your name: ";
			getline(cin, name);
			//patient.insertLast(name);
			cout << name << " , time to record your symptoms within 14 days." << endl;
			cout << "Enter 'Y' if you feel the symptom below and 'N' otherwise." << endl;
			for (int i = 0; i < MAXDAYS; i++)
			{
				
				cout << "Day " << i + 1 << endl;
				for (int j = 0; j < SYMPTOMS; j++)
				{
					cout << symptomArray[j] << ": "
				}
			}

			break;
		}
		case 'S':
		{

			break;
		}
		case 'P':
		{
			if ()
			break;
		}
		}
		if (option != 'X')
		{
			cout << "'E' - To enter a new entry\n'S' - To search for an existing entry\n'P' - To show all the entries\n'X' - To terminate the program" << endl;
			cout << "Choose another option to be made in this program: ";
			cin >> option;
		}
	} while (option != 'X');

	cout << "Thank you for using the COVID-19 Management System.";

	return 0;
}