#include<iostream>
#include<string>
using namespace std;

class Binary{
    // private:
    string binaryNum;
    void checkBinary();
    public:
        void read();
        // void checkBinary();
        void display();
        void ones_complement();            
};

void Binary :: read(){
    cout << "Enter a number: ";
    cin >> binaryNum;
}

void Binary :: checkBinary(){
    for (int i = 0; i < binaryNum.length(); i++)
    {
        if (binaryNum.at(i) != '0' && binaryNum.at(i) != '1')
        {
            cout << "Incorrect Binary Format" << endl;
            exit(0);
        }
        
    }
    
}

void Binary :: display(){
    cout << "Displaying your binary number : " << binaryNum << endl;
}

void Binary :: ones_complement(){
    checkBinary();
    for (int i = 0; i < binaryNum.length(); i++)
    {
        if (binaryNum.at(i) == '0')     
        {
            binaryNum.at(i) = '1';
        }
        else
        {
            binaryNum.at(i) = '0';
        }
        
    }
}

int main(){
    Binary Elite;
    Elite.read();
    // Elite.checkBinary();
    Elite.display();
    Elite.ones_complement();
    Elite.display();
    return 0;
}