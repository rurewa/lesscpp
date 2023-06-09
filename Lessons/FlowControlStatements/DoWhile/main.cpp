#include<iostream>
using namespace std;
int main(){
    float num1 = 3.14;
    cout << "Hey! Are you ready for the test?" << '\n';
    char ch = 'y';
    cout << "y/n?" << '\n';
    cin >> ch;
    if (ch != 'y'){
        cout << "OK! We expected more from you... When you're ready, get in touch!" << '\n';
        return 0;
    }
    cout << "Right? You have to answer the five most difficult questions! We're not sure you can handle it...although...okay! Begin!..." << '\n';
    cout << "Question number one! What is pi equal to?" << '\n';
    float user1 = 0;
    cin >> user1;
    cout << num1 << " "  << "=" << " " <<  user1 << '\n';
    if (num1 != user1){
        cout << "Unfortunalety no... Let's move on to the next question!" << '\n';
    }else{
        cout << "Brillianty! They did not expect!!! Next question...!" << '\n';
    }
}    
    
