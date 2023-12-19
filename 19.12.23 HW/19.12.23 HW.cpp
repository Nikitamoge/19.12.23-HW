#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include<cstring>

using namespace std;


//Task 1
//class Contact
//{
//    char* name;
//    char* lastname;
//    char* middlename;
//    int home_phone_number;
//    int work_phone_number;
//    int phone_number;
//public:
//    Contact() :Contact(nullptr, nullptr, nullptr, 0, 0, 0)
//    {
//        cout << "Constructor by default\n";
//    }
//    Contact(const char* Name, const char* LastName, char* MiddleName, int HomePhoneNumber, int WorkPhoneNumber, int PhoneNumber) // construct by 2 param
//    {
//        cout << "Constructor with parameters\n";
//        name = new char[strlen(Name) + 1];
//        strcpy(name, Name);
//
//        lastname = new char[(strlen(LastName) + 1)];
//        strcpy(lastname, LastName);
//
//        middlename = new char[(strlen(MiddleName) + 1)];
//        strcpy(middlename, MiddleName);
//
//        home_phone_number = HomePhoneNumber;
//        work_phone_number = WorkPhoneNumber;
//        phone_number = PhoneNumber;
//    }
//
//    Contact(const char* Name, int PhoneNumber) : Contact(Name, nullptr, nullptr, 0, 0, PhoneNumber)
//    {
//        cout << "Delegating constructor for name and phone number\n";
//    }
//
//    Contact(const char* Name) : Contact(Name, nullptr, nullptr, 0, 0, 0)
//    {
//        cout << "Delegating constructor for name\n";
//    }
//
//    ~Contact()
//    {
//        cout << "Destructor called\n";
//        delete[] name;
//        delete[] lastname;
//        delete[] middlename;
//    }
//
//    void setName() {
//        cout << "Enter the name that is no more than 30 symbols long: " << endl;
//        char transfer[30];
//        cout << "Enter your name: ";
//        cin >> transfer;
//
//        if (name != nullptr)
//        {
//            delete[] name;
//        }
//
//        name = new char[strlen(transfer) + 1];
//        strcpy(name, transfer);
//    }
//
//    void setLastName() {
//        cout << "Enter the lastname that is no more than 30 symbols long: " << endl;
//        char transfer[30];
//        cout << "Enter your lastname: ";
//        cin >> transfer;
//
//        if (lastname != nullptr)
//        {
//            delete[] lastname;
//        }
//
//        lastname = new char[strlen(transfer) + 1];
//        strcpy(lastname, transfer);
//    }
//
//    void setMiddleName() {
//        cout << "Enter the middlename that is no more than 30 symbols long: " << endl;
//        char transfer[30];
//        cout << "Enter your middlename: ";
//        cin >> transfer;
//
//        if (middlename != nullptr)
//        {
//            delete[] middlename;
//        }
//
//        middlename = new char[strlen(transfer) + 1];
//        strcpy(middlename, transfer);
//    }
//
//    void setHomePhoneNumber() {
//        cout << "Enter home phone number: ";
//        cin >> home_phone_number;
//    }
//
//    void setWorkPhoneNumber() {
//        cout << "Enter work phone number: ";
//        cin >> work_phone_number;
//    }
//
//    void setPhoneNumber() {
//        cout << "Enter phone number: ";
//        cin >> phone_number;
//    }
//
//    void Output()
//    {
//        if (name == nullptr || lastname == nullptr || middlename == nullptr)
//        {
//            cout << "Empty object!\n";
//            return;
//        }
//        cout << "Name: " << name << endl << "Lastname: " << lastname << endl << "Middlename: " << middlename << endl
//            << "Home phone number: " << home_phone_number << endl << "Work phone number: " << work_phone_number << endl << "Phone number: " << phone_number << endl << endl;
//    }
//};
//
//void printContacts(Contact* contacts, int size) {
//    for (int i = 0; i < size; i++) {
//        contacts[i].Output();
//    }
//}
//
//Contact* addContacts(Contact* contacts, int& size) {
//    Contact* newContacts = new Contact[size + 1];
//
//    for (int i = 0; i < size; i++) {
//        newContacts[i] = contacts[i];
//    }
//
//    newContacts[size].setName();
//    newContacts[size].setLastName();
//    newContacts[size].setMiddleName();
//    newContacts[size].setHomePhoneNumber();
//    newContacts[size].setWorkPhoneNumber();
//    newContacts[size].setPhoneNumber();
//
//    delete[] contacts;
//
//    size++;
//    return newContacts;
//}
//
//
//Contact* deleteContact(Contact* contacts, int& size, int index) {
//    if (index < 0 || index >= size) {
//        cout << "Invalid index\n";
//        return contacts;
//    }
//
//    Contact* newContacts = new Contact[size - 1];
//
//    for (int i = 0; i < index; i++) {
//        newContacts[i] = contacts[i];
//    }
//
//    for (int i = index + 1; i < size; i++) {
//        newContacts[i - 1] = contacts[i];
//    }
//
//    delete[] contacts;
//
//    size--;
//    return newContacts;
//}


//Task 2
class MyString {
    char* str;
    int size;
    static int count;

public:
    MyString() : size(80) 
    {
        str = new char[size];
        for (int i = 0; i < size; i++)
            str[i] = '\0';
        count++;
    }

    MyString(int n) : size(n) 
    {
        str = new char[size];
         for(int i = 0; i < size; i++)
            str[i] = '\0';
        count++;
    }

    MyString(const char* s) 
    {
        size = strlen(s) + 1;
        str = new char[size];
        strcpy(str, s);
        count++;
    }

    void input() 
    {
        char buffer[80];
        cout << "Enter your string: ";
        cin >> buffer;
        delete[] str;
        str = new char[strlen(buffer) + 1];
        strcpy_s(str, strlen(buffer) + 1, buffer);
    }

    void output() const 
    {
        cout << "String: " << str << endl;
    }

    static int getCount() 
    {
        return count;
    }

    ~MyString() 
    {
        delete[] str;
        count--;
    }
};

int MyString::count = 0;


int main()
{
    //Task 1
    //int size = 2;
    //Contact* contacts = new Contact[size];

    //for (int i = 0; i < size; i++) {
    //    contacts[i].setName();
    //    contacts[i].setLastName();
    //    contacts[i].setMiddleName();
    //    contacts[i].setHomePhoneNumber();
    //    contacts[i].setWorkPhoneNumber();
    //    contacts[i].setPhoneNumber();
    //}

    //contacts = addContacts(contacts, size);
    //printContacts(contacts, size);

    //contacts = deleteContact(contacts, size, 2);
    //printContacts(contacts, size);

    //delete[] contacts;


    //Task 2
    MyString str1;
    str1.input();
    str1.output();

    cout << "Number of created objects-strings: " << MyString::getCount() << endl;

    return 0;
}