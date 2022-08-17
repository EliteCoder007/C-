#include<iostream>
using namespace std;

int main(){
    
    // int marks[] = {23, 45, 56, 89};
    // cout << "*** These are marks ***" << endl;
    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // //You can change the value of an Array.
    // marks[2] = 55;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;

    int mathMarks[4];
    mathMarks[0] = 98;
    mathMarks[1] = 78;
    mathMarks[2] = 97;
    mathMarks[3] = 27;

    cout << "*** These are math marks ***" << endl;
    
    // cout << mathMarks[0] << endl;
    // cout << mathMarks[1] << endl;
    // cout << mathMarks[2] << endl;
    // cout << mathMarks[3] << endl;

    // for (int i = 0; i < 4; i++)
    // {
    //     cout << "The value of marks " << i << " is " << mathMarks[i] << endl;
    // }
    


                         //" *** Pointers and Arrays ***"

    int* ptr = mathMarks;
    cout << "The value of *ptr is " << *ptr << endl;
    cout << "The value of *(ptr + 1) is " << *(ptr + 1) << endl;
    cout << "The value of *(ptr + 2) is " << *(ptr + 2) << endl;
    cout << "The value of *(ptr + 3) is " << *(ptr + 3) << endl;

    return 0;
}