#include <iostream>
#include <string>
#include <cassert>
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
        myObj.Preamble(name);
        system("cls");
        
        while (true) 
        {
            cout << "\n\t\tWelcome to COVID-19 Quarantine Monitoring System" << endl;
            cout << "\n\n\tPress\n\t1 - To Insert a Record\n\t2 - To delete a patient record\n\t3 - To Search a Patient Record\n\t4 - To view all patient record\n\t5 - To Exit\n";
            cout << "\nEnter your Choice: ";
            cin >> Choice;


            switch(Choice)
            {
                case 1: 
                    system("cls");
                    cout << "\nEnter Day: ";
                    cin >> Day;
                    cout << "\nFever/Chills (Yes/No): ";
                    cin >> fever;
                    cout << "\nLoss of Taste / Smell (Yes/No): ";
                    cin >> lossOfTasteSmell;
                    cout << "\nCough (Yes/No): ";
                    cin >> cough;
                    cout << "\nShortness of Breath or Difficulty Breathing (Yes/No): ";
                    cin >> shortnessOfBreath;
                    cout << "\nFatigue (Yes/No): ";
                    cin >> fatigue;
                    cout << "\nMuscle or Body Aches (Yes/No): ";
                    cin >> bodyAches;
                    cout << "\nHeadache (Yes/No): ";
                    cin >> headache;
                    cout << "\nSore Throat (Yes/No): ";
                    cin >> soreThroat;
                    cout << "\nCongestion or Runny Nose (Yes/No): ";
                    cin >> congestion;
                    cout << "\nNausea or Vomiting (Yes/No): ";
                    cin >> nausea;
                    cout << "\nDiarrhea (Yes/No): ";
                    cin >> diarrhea;
                    cout << "\nEnter Body Temperature: ";
                    cin >> temp;
                    myObj.Insert_Record(Day, fever, lossOfTasteSmell, cough, shortnessOfBreath, fatigue, bodyAches, headache, soreThroat, congestion, nausea, diarrhea, temp);
                    break;
                case 2: 
                    system("cls");
                    cout << "\nEnter the Day Number: ";
                    cin >> Day;
                    cout << endl;
                    myObj.Delete_Record(Day);
                    break;
                case 3: 
                    system("cls");
                    cout << "\nEnter the Day Number you want to Search: ";
                    cin >> Day;
                    myObj.Search_Record(Day);
                    break;
                case 4: 
                    system("cls");
                    myObj.Show_Record();
                    break;
                case 5: 
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
