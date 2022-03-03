#include<iostream>
#include <string>
#include "orderedLinkedList.h"
#include "unorderedLinkedList.h"

using namespace std;

int main() 
{
    unorderedLinkedList<int> dayObj;
    unorderedLinkedList<string> nameObj;
    unorderedLinkedList<double> tempObj;
    unorderedLinkedList<string> answerObj;


    int day;
    string name;
    string fever, dryCough;
    string answer;
    int marks;
    double temp;
    int choice;
    bool tryAgain = true;

    

       //if (Choice == 1) 
       //{
       //    cout << "Enter Name of Patient\n";
       //    cin >> Name;
       //    list1.insert(Name);
       //    cout << "Enter Day\n";
       //    cin >> Day;
       //    list.insert(Day);
       //    cout << "Fever \n";
       //    cin >> fever;
       //    list1.insert(fever);
       //    cout << "Insert Temperature\n";
       //    cin >> temp;
       //    list2.insert(temp);
       //    cout << "Dry Cough \n";
       //    cin >> dryCough;
       //    list1.insert(dryCough);
       //}
       //else if (Choice == 2) 
       //{
       //    cout << "Enter Day Number of Patient whose "
       //        "record is to be deleted\n";
       //    cin >> Day;
       //    list.deleteNode(Day);
       //}
       //else if (Choice == 3) 
       //{
       //    cout << "Enter Day Number of Patient whose "
       //        "record you want to Search\n";
       //    cin >> Day;
       //    cout << "Day: " << list.search(Day) << "\n";
       //}
       //else if (Choice == 4) 
       //{
       //     list1.print();
       //     cout << endl;
       //     list.print();
       //     cout << endl;
       //     list2.print();

       // }
    while (tryAgain)
    {
        cout << "\n\t\tWelcome to COVID-19 Quarantine "
            "Monitoring System\n\n\tPress\n\t1 to "
            "Insert a Record\n\t2 to delete a "
            "patient record\n\t3 to Search a Patient "
            "Record\n\t4 to view all patient "
            "record\n\t5 to Exit\n";
        cout << "\nEnter your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            system("cls");
            cout << "\t\tInsert a Record\n\nYou have chosen to Insert a Record\n";
            cout << "\nEnter Name of Patient: ";
            cin.ignore();
            getline(cin, name);
            nameObj.InsertRecord(name);
            cout << "\nEnter Day: ";
            cin >> day;
            dayObj.InsertRecord(day);
            cout << "\n\t\tSymptom Assessment\n\nPlease only enter 'Yes' or 'No' for the following questions.\n";
            cout << "\nDo you have a Fever: ";
            cin >> fever;
            answerObj.InsertRecord(fever);
            cout << "\nEnter your Current Temperature: ";
            cin >> temp;
            tempObj.InsertRecord(temp);
            cout << "\nDo you have Dry Cough: ";
            cin >> dryCough;
            answerObj.InsertRecord(dryCough);

            cout << "\nPatient entry has been successfully inserted." << endl;
            system("pause");
            system("cls");
            break;
        }
        case 2:
        {
            cout << "Enter Day Number of Patient whose "
                "record is to be deleted\n";
            cin >> day;
            dayObj.deleteNode(day);
        }
        case 3:
        {
            cout << "Enter Day Number of Patient whose "
                "record you want to Search\n";
            cin >> day;
            cout << "Day: " << dayObj.search(day) << "\n";
        }
        case 4:
        {
            system("cls");
            cout << "\t\tSHOWING ALL THE RECORDS\n";
            nameObj.print();
            dayObj.print();
            answerObj.print();
            tempObj.print();

            system("pause");
            system("cls");
            break;
        }
        default:
            cout << "Thank you for using the program!";
            tryAgain = false;
        }
        cout << "\n\n\nDo you want to use the program again ('Yes' || 'No'): ";
        cin >> answer;
        if (answer == "Yes" || answer == "yes")
            tryAgain = true;
        else
        {
            tryAgain = false;
            cout << "Thank you for using the program and keep safe!";
            system("pause");
        }
        system("cls");
    }

    return 0;
}