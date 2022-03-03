#include <iostream>
#include <string>
#include <cassert>
#include <fstream>
#include <limits>
#include "quarantine.h"

using namespace std;
 
// Driver code
int main()
{
    quarantine myObj;
    string name, fever, lossOfTasteSmell, cough, shortnessOfBreath, fatigue, bodyAches, headache, soreThroat, congestion, nausea, diarrhea;
    int Day, temp, Choice;
    char ans;

    do
    {
        
        cout << "\n\t\tWelcome to COVID-19 Quarantine Monitoring System" << endl;
        cout << "\nPlease enter your name to proceed. ";
        cout << "\nName: ";
        getline(cin, name);
        system("cls");
        myObj.Preamble(name);
        system("pause");
        system("cls");
        
        while (true) 
        {
            cout << "\n\t\tWelcome to COVID-19 Quarantine Monitoring System" << endl;
            cout << "\n\n\tPress\n\t1 - To insert a record\n\t2 - To delete a patient record\n\t3 - To search a patient record\n\t4 - To view all patient records\n\t5 - To write all patient records to a .txt file & exit\n\t6 - To exit\n";
            cout << "\nEnter your Choice: ";
            cin >> Choice;
            while (cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                system("cls");
                cout << "INVALID ENTRY.\nPlease enter a valid option." << endl;
                system("pause");
                system("cls");
                cout << "\n\t\tWelcome to COVID-19 Quarantine Monitoring System" << endl;
                cout << "\n\n\tPress\n\t1 - To insert a record\n\t2 - To delete a patient record\n\t3 - To search a patient record\n\t4 - To view all patient records\n\t5 - To write all patient records to a .txt file & exit\n\t6 - To exit\n";
                cout << "\nEnter your Choice: ";
                cin >> Choice;
            }

            switch(Choice)
            {
                case 1: 
                    system("cls");
                    cout << "\nEnter Day: ";
                    cin >> Day;
                    while (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "INVALID ENTRY.\nPlease enter a number." << endl;
                        system("pause");
                        system("cls");
                        cout << "\nEnter Day: ";
                        cin >> Day;
                    }
                    cout << "\nFever/Chills (Yes/No): ";
                    cin >> fever;
                    while (!myObj.CheckInput(fever))
                    {
                        cout << "\nINVALID INPUT!\nPlease only enter valid input.";
                        system("pause");
                        system("cls");
                        cout << "\nFever/Chills (Yes/No): ";
                        cin >> fever;
                    }
                    cout << "\nLoss of Taste / Smell (Yes/No): ";
                    cin >> lossOfTasteSmell;
                    while (!myObj.CheckInput(lossOfTasteSmell))
                    {
                        cout << "\nINVALID INPUT!\nPlease only enter valid input.";
                        system("pause");
                        system("cls");
                        cout << "\nLoss of Taste / Smell (Yes/No): ";
                        cin >> lossOfTasteSmell;
                    }
                    cout << "\nCough (Yes/No): ";
                    cin >> cough;
                    while (!myObj.CheckInput(cough))
                    {
                        cout << "\nINVALID INPUT!\nPlease only enter valid input.";
                        system("pause");
                        system("cls");
                        cout << "\nCough (Yes/No): ";
                        cin >> cough;
                    }
                    cout << "\nShortness of Breath or Difficulty Breathing (Yes/No): ";
                    cin >> shortnessOfBreath;
                    while (!myObj.CheckInput(shortnessOfBreath))
                    {
                        cout << "\nINVALID INPUT!\nPlease only enter valid input.";
                        system("pause");
                        system("cls");
                        cout << "\nShortness of Breath or Difficulty Breathing (Yes/No): ";
                        cin >> shortnessOfBreath;
                    }
                    cout << "\nFatigue (Yes/No): ";
                    cin >> fatigue;
                    while (!myObj.CheckInput(fatigue))
                    {
                        cout << "\nINVALID INPUT!\nPlease only enter valid input.";
                        system("pause");
                        system("cls");
                        cout << "\nFatigue (Yes/No): ";
                        cin >> fatigue;
                    }
                    cout << "\nMuscle or Body Aches (Yes/No): ";
                    cin >> bodyAches;
                    while (!myObj.CheckInput(bodyAches))
                    {
                        cout << "\nINVALID INPUT!\nPlease only enter valid input.";
                        system("pause");
                        system("cls");
                        cout << "\nMuscle or Body Aches (Yes/No): ";
                        cin >> bodyAches;
                    }
                    cout << "\nHeadache (Yes/No): ";
                    cin >> headache;
                    while (!myObj.CheckInput(headache))
                    {
                        cout << "\nINVALID INPUT!\nPlease only enter valid input.";
                        system("pause");
                        system("cls");
                        cout << "\nHeadache (Yes/No): ";
                        cin >> headache;
                    }
                    cout << "\nSore Throat (Yes/No): ";
                    cin >> soreThroat;
                    while (!myObj.CheckInput(soreThroat))
                    {
                        cout << "\nINVALID INPUT!\nPlease only enter valid input.";
                        system("pause");
                        system("cls");
                        cout << "\nSore Throat (Yes/No): ";
                        cin >> soreThroat;
                    }
                    cout << "\nCongestion or Runny Nose (Yes/No): ";
                    cin >> congestion;
                    while (!myObj.CheckInput(congestion))
                    {
                        cout << "\nINVALID INPUT!\nPlease only enter valid input.";
                        system("pause");
                        system("cls");
                        cout << "\nCongestion or Runny Nose (Yes/No): ";
                        cin >> congestion;
                    }
                    cout << "\nNausea or Vomiting (Yes/No): ";
                    cin >> nausea;
                    while (!myObj.CheckInput(nausea))
                    {
                        cout << "\nINVALID INPUT!\nPlease only enter valid input.";
                        system("pause");
                        system("cls");
                        cout << "\nNausea or Vomiting (Yes/No): ";
                        cin >> nausea;
                    }
                    cout << "\nDiarrhea (Yes/No): ";
                    cin >> diarrhea;
                    while (!myObj.CheckInput(diarrhea))
                    {
                        cout << "\nINVALID INPUT!\nPlease only enter valid input.";
                        system("pause");
                        system("cls");
                        cout << "\nDiarrhea (Yes/No): ";
                        cin >> diarrhea;
                    }
                    cout << "\nEnter Body Temperature: ";
                    cin >> temp;
                    while (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "INVALID ENTRY.\nPlease enter a number." << endl;
                        system("pause");
                        system("cls");
                        cout << "\nEnter Body Temperature: ";
                        cin >> temp;
                    }
                    myObj.Insert_Record(Day, fever, lossOfTasteSmell, cough, shortnessOfBreath, fatigue, bodyAches, headache, soreThroat, congestion, nausea, diarrhea, temp);
                    break;
                case 2: 
                    system("cls");
                    cout << "\nEnter the Day Number for the record to be deleted: ";
                    cin >> Day;
                    while (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "INVALID ENTRY.\nPlease enter a number." << endl;
                        system("pause");
                        system("cls");
                        cout << "\nEnter the Day Number for the record to be deleted: ";
                        cin >> Day;
                    }
                    cout << endl;
                    myObj.Delete_Record(Day);
                    break;
                case 3: 
                    system("cls");
                    cout << "\nEnter the Day Number you want to Search: ";
                    cin >> Day;
                    while (cin.fail())
                    {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "INVALID ENTRY.\nPlease enter a number." << endl;
                        system("pause");
                        system("cls");
                        cout << "\nEnter the Day Number you want to Search: ";
                        cin >> Day;
                    }
                    myObj.Search_Record(Day);
                    break;
                case 4: 
                    system("cls");
                    myObj.Show_Record();
                    break;
                case 5:
                    system("cls");
                    myObj.Write_Record();
                    cout << "The Records have been successfully written." << endl;
                    cout << "Thank you for using the program!" << endl;
                    exit(0);
                case 6: 
                    exit(0);

            }
            cout<<"\nDo you want to continue, press Y/N : ";
            cin>>ans;
            if (ans == 'n' || ans == 'N')
            {
                system("cls");
                cout << "Thank you for using the program!" << endl;
                return false;
            }
            else
            {
                system("cls");
                continue;
            }
        }

    } while (1);
        
    
    return 0;
}
