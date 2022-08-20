#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter();
    void setPrice();
    void displayPrice();
};

void Shop :: initCounter()
{
    counter = 0;
}

void Shop :: setPrice()
{
    cout << "Enter the ID of your item no " << (counter + 1) << " : " << endl;
    cin >> itemId[counter];

    cout << "Enter the price of your item : " << endl;
    cin >> itemPrice[counter];
    
    counter++;
}

void Shop :: displayPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of your item Id " << itemId[i] << " is : " << itemPrice[i] << endl; 
    }
    
}

int main()
{
    Shop dukan;

    dukan.initCounter();

    for (int i = 0; i < 5; i++)
    {
        dukan.setPrice();
    }

    dukan.displayPrice();
    
    

    return 0;
}