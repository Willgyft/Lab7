#include<iostream>
#include<string>
using namespace std;

int main(){
    int number;
    string name;
    string movie;
    string day;
    string signature;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    getline(cin, name);
    cout << "?????: " << name << endl;
    cout << "Fahsai: Wow!!! " << name << " is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cin >> number;
    int gear = number/10000000 ;
    cout << name << ": " << number << endl;
    cout << "Fahsai: I think you may be GEAR " << gear - 12 << ". I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    cin.ignore();
    getline(cin,movie);
    cout << name << ": " << movie << endl;
    cout << "Fahsai: So....which day are you free to go with me?\n";
    getline(cin,day);
    cout << name << ": ";
    cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching " << movie << " with you.\n";
    getline(cin,signature);
    cout << name << ": " << signature << endl;
    cout << "Fahsai: 555+ see you" << day << ". Bye Bye \\(^ ^)/";
    return 0;
}

