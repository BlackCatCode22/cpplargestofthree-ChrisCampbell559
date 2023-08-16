#include <iostream>

using namespace std;


int main(){
    int num1 = 0;
    int num2 = 0;
    int num3 =0;
    int largest = 0;

    cout << "\n\n Welcome to the Largest of Three Program\n\n";

    //Get userName
    string userName = "Chris ";
    cout << "\n Please enter your Name:";
        cin >> userName;
        cout << "\n\n Welcome to Largest of Three " << userName;

        //get three ints from the user
        cout << "\n Please enter your integer: ";
        cin >> num1;
        cout << "\n\n Thank you for entering " << num1 << " as your first int!\n";

        cout << "\n Please enter your integer: ";
        cin >> num2;
        cout << "\n\n Thank you for entering " << num2 << " as your first int!\n";

        cout << "\n Please enter the second integer: ";
        cin >> num3;
        cout << "\n\n Thank you for entering " << num3 << " as your first int!" << endl;

        //Processing Section
        if (num1 >= num2 & num1>= num3) {
            cout << "The largest number is:" << num2;
        }
        if (num2 >=  num1 & num2 >= num3) {
        cout << "The largest number is:" << num2;}
        {
            if (num3 >= num1 & num3 >= num2)
            cout << "The largest number is: " << num3;

        }























    return 0;
}
