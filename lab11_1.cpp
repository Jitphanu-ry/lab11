// cout << "You will get A in this 261102.";
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    string enter;
    srand(time(0));
    int score = rand()%9;
    cout << "Press Enter 3 times to reveal your future." << endl;
    for(int i = 0;i<3;i++){
        getline(cin,enter);
    }
    string grade[] = {"A","B+","B","C+","C","D+","D","F","W"};
    cout << "You will get " << grade[score] << " in this 261102.";
}