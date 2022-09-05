#include<bits/stdc++.h>
using namespace std;

//1st Question ans->
class Restaurant
{

public:
    int food_item_codes[12];
    string food_item_names[12];
    int food_item_prices[12];

protected:
    int total_tax;

public:
    void show_item_names()
    {
        string food_item_names[12];
        this->food_item_names[12] = food_item_names[12];
    }


};


int main(){
    //2nd Question ans-->
    Restaurant *menu = new Restaurant;
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        int food_codes[N], food_item_prices[N];
        string food_item_names[N];
        cin >> menu->food_item_codes[i];
        cin.ignore();
        getline(cin,menu->food_item_names[i]);
        cin >>menu->food_item_prices[i];
    }
    //3rd Question ans-->
    cout <<"\t*********************MAKE BILL*********************" << endl  << "___________________________________________________________________"<< endl << endl << endl;
    cout << setw(25) << left <<"Item Code"<< setw(25) << left << "Item Name" << setw(25)<< left << "Item Price" << endl;
        
    for (int i = 1; i <= N; i++)
    {
        cout << setw(25) << left << menu->food_item_codes[i] << setw(25) << left << menu->food_item_names[i]<< setw(25) << left << menu->food_item_prices[i];
    }
    cout << endl << endl << endl;
    //4th Question ans-->
    int table_no;
    cout << "Enter Table No : ";
    cin >> table_no;
    int num_of_items;
    cout << "Enter Number of Items : ";
    cin >> num_of_items;
    int quantity[num_of_items];
    int code[num_of_items];
    for (int j = 0; j < num_of_items; j++)
    { 
        cout << "Enter Item " << (j+1) << " Code : ";
        cin >>code[j];
        cout << "Enter Item " << (j+1) << " Quantity : ";
        cin >> quantity[j];
    }

    //5th & 6th & 7th & 8th Question ans -->
    
    cout <<"\t*********************BILL SUMMARY*********************" << endl  << "___________________________________________________________________"<< endl << endl << endl;
    cout << "Table NO : " << table_no << endl;
    cout << setw(20) << left << "Item Code" << setw(20) << left << "Item Name" << setw(20) << left << "Item Price" << setw(20) << left << "Item Quantity" << "Total Price" << endl;

    int total_price = 0;
    for (int k = 0; k < num_of_items; k++)
    {   total_price += menu->food_item_prices[k];
        cout << setw(20) << left << code[k] << setw(20) << left << menu->food_item_names[k] << setw(20) << left << quantity[k] << total_price;
    }
    int tax = .05 * total_price;
    cout <<"TAX" << tax<< endl;
    cout << "______________________________________________________________________________________________"<<endl;
    int net = tax + total_price;
    cout <<  "NET TOTAL" << setw(1000) << left << net <<endl;
    
    


    return 0;
}