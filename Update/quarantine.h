#ifndef QUARANTINE_H
#define QUARANTINE_H

#include <cassert>
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;
 

struct Node 
{
    int day = 0;
    string fever, lossOfTasteSmell, cough, shortnessOfBreath, fatigue, bodyAches, headAche, soreThroat, congestion, nausea, diarrhea;
    int temp = 0;
    string status = "empty";
    Node* next;
};
 

class quarantine
{
public:
    ofstream outRecord;
    
    string Name;
    Node* head = new Node();

    bool check(int x);
    void Preamble(string name);
    bool CheckInput(string str);
    void Insert_Record(int day, string fever, string lossOfTasteSmell, string cough, string shortnessOfBreath, string fatigue, string bodyAches, string headAche, string soreThroat, string congestion, string nausea, string diarrhea, int temp);
    void Search_Record(int day);
    void Delete_Record(int day);
    bool CheckSymptom(string fever, string lossOfTasteSmell, string cough, string shortnessOfBreath, string fatigue, string bodyAches, string headAche, string soreThroat, string congestion, string nausea, string diarrhea);
    void Show_Record();
    void Write_Record();
    void DestroyRecords();

    quarantine()
    {
        Delete_Record(0);
        system("cls");
    }
    ~quarantine()
    {
        DestroyRecords();
    }

};


void quarantine::Preamble(string name)
{
    Name = name;
    cout << "Welcome to our program, " << Name << "!" << endl;
    cout << "You will need to enter your symptoms every day for ~14 days if you wish to add a patient record." << endl;
    cout << "Moreover, the day number is required as input if you wish to search and/or remove data on a specific day." << endl;
    cout << "You also have the option to view all records that were entered." << endl;
}
 

bool quarantine::check(int x)
{
    if (head == nullptr)
        return false;
 
    Node* t = new Node;
    t = head;
 
 
    while (t != nullptr) {
        if (t->day == x)
            return true;
        t = t->next;
    }
 
    return false;
}

bool quarantine::CheckInput(string str)
{
    if (str == "N" || str == "n" || str == "No" || str == "NO" || str == "no" || str == "Y" || str == "y" || str == "Yes" || str == "YES" || str == "yes")
        return true;
    return false;
}

void quarantine::Insert_Record(int day, string fever, string lossOfTasteSmell, string cough, string shortnessOfBreath, string fatigue, string bodyAches, string headAche, string soreThroat, string congestion, string nausea, string diarrhea, int temp)
{
    
    if (check(day)) {
        cout << "Patient with this "
             << "record Already Exists\n";
        return;
    }
 
    
    Node* t = new Node();
    t->day = day;
    t->fever = fever;
    t->lossOfTasteSmell = lossOfTasteSmell;
    t->cough = cough;
    t->shortnessOfBreath = shortnessOfBreath;
    t->fatigue = fatigue;
    t->bodyAches = bodyAches;
    t->headAche = headAche;
    t->soreThroat = soreThroat;
    t->congestion = congestion;
    t->nausea = nausea;
    t->diarrhea = diarrhea;
    t->temp = temp;
    t->next = nullptr;
 
    
    if (head == nullptr
        || (head->day >= t->day)) {
        t->next = head;
        head = t;
    }
 
    else {
        Node* c = head;
        while (c->next != nullptr && c->next->day < t->day) {
            c = c->next;
        }
        t->next = c->next;
        c->next = t;
    }
 
    cout << "Record Inserted "
         << "Successfully\n";
}
 

void quarantine::Search_Record(int day)
{
    
    if (!head) 
    {
        cout << "No such Record "
             << "Available\n";
        return;
    }
 
    
    else 
    {
        Node* p = head;
        while (p) {
            if (p->day == day) 
            {
                cout << "Name: "
                    << Name << "\n\n";
                cout << "Day Number" << setw(22) << p->day << endl;
                cout << "Fever" << setw(27) << p->fever << endl;
                cout << "Loss of Taste/Smell" << setw(13) << p->lossOfTasteSmell << endl;
                cout << "Cough" << setw(27) << p->cough << endl;
                cout << "Shortness of Breath" << setw(13) << p->shortnessOfBreath << endl;
                cout << "Fatigue" << setw(25) << p->fatigue << endl;
                cout << "Body Aches" << setw(22) << p->bodyAches << endl;
                cout << "Headache" << setw(24) << p->headAche << endl;
                cout << "Sore Throat" << setw(21) << p->soreThroat << endl;
                cout << "Congestion or Runny Nose" <<  setw(8) << p->congestion << endl;
                cout << "Nausea or Vomiting" << setw(14) << p->nausea << endl;
                cout << "Diarrhea" << setw(24) << p->diarrhea << endl;
                cout << "Body Temperature" << setw(16) << p->temp << "\370C" << endl;
                return;
            }
            p = p->next;
        }
 
        if (p == nullptr)
            cout << "No such Record "
                 << "Available\n";
    }
}
 

void quarantine::Delete_Record(int day)
{
    Node* t = head;
    Node* p = nullptr;
 
    
    if (t != nullptr
        && t->day == day) {
        head = t->next;
        delete t;
 
        cout << "Record Deleted "
             << "Successfully\n";
    }
    else
    {

        while (t != nullptr && t->day != day) {
            p = t;
            t = t->next;
        }
        if (t == nullptr)
            cout << "Record does not Exist\n";
        else
        {
            p->next = t->next;
            delete t;
            cout << "Record Deleted "
                << "Successfully\n";
        }
    }
}
 
bool quarantine::CheckSymptom(string fever, string lossOfTasteSmell, string cough, string shortnessOfBreath, string fatigue, string bodyAches, string headAche, string soreThroat, string congestion, string nausea, string diarrhea)
{
    Node access;
    if ((fever == "Yes" || fever == "yes" || fever == "YES" || fever == "Y" || fever == "y") || (lossOfTasteSmell == "Yes" || lossOfTasteSmell == "yes" || lossOfTasteSmell == "YES" || lossOfTasteSmell == "Y" || lossOfTasteSmell == "y") || (cough == "Yes" || cough == "yes" || cough == "YES" || cough == "Y" || cough == "y")
        || (shortnessOfBreath == "Yes" || shortnessOfBreath == "yes" || shortnessOfBreath == "YES" || shortnessOfBreath == "Y" || shortnessOfBreath == "y") || (fatigue == "Yes" || fatigue == "yes" || fatigue == "YES" || fatigue == "Y" || fatigue == "y") || (bodyAches == "Yes" || bodyAches == "yes" || bodyAches == "YES" || bodyAches == "Y" || bodyAches == "y")
        || (headAche == "Yes" || headAche == "yes" || headAche == "YES" || headAche == "Y" || headAche == "y") || (soreThroat == "Yes" || soreThroat == "yes" || soreThroat == "YES" || soreThroat == "Y" || soreThroat == "y") || (congestion == "Yes" || congestion == "yes" || congestion == "YES" || congestion == "Y" || congestion == "y")
        || (nausea == "Yes" || nausea == "yes" || nausea == "YES" || nausea == "Y" || nausea == "y") || (diarrhea == "Yes" || diarrhea == "yes" || diarrhea == "YES" || diarrhea == "Y" || diarrhea == "y") && access.status == "empty")
        return true;
    return false;

}

void quarantine::Show_Record()
{
    Node accessSymp;
    Node* p = head;
    if (p == nullptr) {
        cout << "No Record "
             << "Available\n";
    }
    else {
        cout << "Name: " << Name << "\n\n";
        cout << "Day Fever/Chills | Loss of Taste/Smell | Cough | Shortness of Breath | Fatigue | Body Aches | Headache | Sore Throat | Congestion | Nausea | Diarrhea | Body Temperature\n";
             
        while (p != nullptr) {
            cout << " " << p->day << setw(8)
                 << p->fever << setw(19)
                << p->lossOfTasteSmell << setw(15)
                << p->cough << setw(16)
                << p->shortnessOfBreath << setw(15)
                << p->fatigue << setw(11)
                << p->bodyAches << setw(13)
                << p->headAche << setw(12)
                << p->soreThroat << setw(14)
                << p->congestion << setw(11)
                << p->nausea << setw(9)
                << p->diarrhea << setw(14)
                 << p->temp << "\370C" << endl;
            if (CheckSymptom(p->fever, p->lossOfTasteSmell, p->cough, p->shortnessOfBreath, p->fatigue, p->bodyAches, p->headAche, p->soreThroat, p->congestion, p->nausea, p->diarrhea))
                accessSymp.status = "SYMPTOMATIC";
            p = p->next;
        }
        if (accessSymp.status == "empty")
            accessSymp.status = "ASYMPTOMATIC";
        cout << "\nStatus: " << accessSymp.status;
    }
}

void quarantine::Write_Record()
{
    ofstream outRecord;
    outRecord.open("Records.txt", ios_base::app);
    Node accessSymp;
    Node* p = head;
    if (p == nullptr) {
        cout << "No Record "
            << "Available\n";
    }
    else 
    {
        outRecord << setfill('-') << setw(175) << endl;
        outRecord << "\nName: " << Name << "\n\n";
        outRecord << "Day Fever/Chills | Loss of Taste/Smell | Cough | Shortness of Breath | Fatigue | Body Aches | Headache | Sore Throat | Congestion | Nausea | Diarrhea | Body Temperature\n";

        while (p != nullptr) 
        {
            outRecord << setfill(' ');
            outRecord << " " << p->day << setw(8)
                << p->fever << setw(19)
                << p->lossOfTasteSmell << setw(15)
                << p->cough << setw(16)
                << p->shortnessOfBreath << setw(15)
                << p->fatigue << setw(11)
                << p->bodyAches << setw(13)
                << p->headAche << setw(12)
                << p->soreThroat << setw(14)
                << p->congestion << setw(11)
                << p->nausea << setw(9)
                << p->diarrhea << setw(14)
                << p->temp << "\370C" << endl;
            if (CheckSymptom(p->fever, p->lossOfTasteSmell, p->cough, p->shortnessOfBreath, p->fatigue, p->bodyAches, p->headAche, p->soreThroat, p->congestion, p->nausea, p->diarrhea))
                accessSymp.status = "SYMPTOMATIC";
            p = p->next;
        }
        if (accessSymp.status == "empty")
            accessSymp.status = "ASYMPTOMATIC";
        outRecord << "\nStatus: " << accessSymp.status << endl;
    }
}

void quarantine::DestroyRecords()
{
    Node* del;   
                           
    while (head != nullptr)  
    {
        del = head;       
        head = head->next; 
        delete del;   
    }
}



#endif
