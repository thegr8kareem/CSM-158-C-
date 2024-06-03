#include <iostream>

int main()
{
    using namespace std;
    string name;
    int marks;

    cout << "************************** GRADING SYSTEM *************************** " << endl;

    cout << "Please enter your name" << endl;
    getline(cin >> ws, name);

    cout << "Please enter your marks: " << endl ;
    cin >> marks;

    if (marks >= 70)
    {
        cout << name << " ,you got the  grade A " << endl;
    }
    else if (marks >=60)
    {
        cout << name << " ,you got the  Grade B  " << endl;
    }
    else if (marks >=50)
    {
        cout << name << " ,you got the  Grade C  " << endl;
    }
    else if (marks >=40)
    {
        cout << name << " ,you got the  Grade D  " << endl;
    }
    else 
    {
        cout << name << " ,you got the  Grade F " << endl;
    }


    cout << "********************************************************************* " << endl;

    return 0;
}