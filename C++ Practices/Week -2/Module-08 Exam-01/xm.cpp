#include <bits/stdc++.h>
using namespace std;
// Making class for Restaurant: ans for 1
class Restaurant
{
public:
    int food_item_codes[12];
    string food_item_names[12];
    int food_item_prices[12];

private:
    int total_tax;

public:
    void input_menu_details();
    int N;
    void display_menu_details();
    int table_no;
    int num_of_items;
    int code[12];
    int quantity[12];
    void order_from_customer();
    int total_prize[12] = {0};
    void show_order_summary();
    void taxInitializer();
    void total_tax_count_and_net_amount();
};
// Making a menu input function:ans for 2
void Restaurant ::input_menu_details()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> food_item_codes[i];
        cin.ignore();
        getline(cin, food_item_names[i]);
        cin >> food_item_prices[i];
    }
}
// Making a display function for showing menu details:ans for 3
void Restaurant ::display_menu_details()
{
    cout << "\t******************MAKE BILL******************" << endl
         << "____________________________________________________________" << endl
         << endl
         << endl;
    cout << setw(25) << left << "Item Code" << setw(25) << left << "Item Name" << setw(25) << left << "Item Price" << endl;

    for (int i = 0; i < N; i++)
    {
        cout << setw(25) << left << food_item_codes[i] << setw(25) << left << food_item_names[i] << setw(25) << left << food_item_prices[i] << endl;
    }
}

// Making a function which take order from customer: ans for 4
void Restaurant ::order_from_customer()
{
    cout << endl
         << "Enter Table No : ";
    cin >> table_no;
    cout << "Enter Number of Items : ";
    cin >> num_of_items;

    code[N];
    quantity[N];
    for (int i = 0; i < num_of_items; i++)
    {
        cout << "Enter Item " << (i + 1) << " Code : ";
        cin >> code[i];
        cout << "Enter Item " << (i + 1) << " Quantity : ";
        cin >> quantity[i];
    }
    // Ans for 8...
    //  for (int i = 0; i < N; i++)
    //  {
    //      if (code[i] == food_item_codes[i])
    //      {
    //         cout << "Enter Item " << (i + 1) << " Quantity : ";
    //          cin >> quantity[i];
    //          break;
    //      }
    //      else
    //      {
    //          cout << "Please Enter Code Again!"<< endl;
    //          break;
    //      }

    // }
}

// Making a function to show order summary:ans for 5
void Restaurant ::show_order_summary()
{
    cout << "\t\t\t\t*********************BILL SUMMARY*********************" << endl
         << "______________________________________________________________________________________________________________" << endl
         << endl
         << endl;
    cout << "Table NO : " << table_no << endl;
    cout << setw(25) << left << "Item Code" << setw(25) << left << "Item Name" << setw(25) << left << "Item Price" << setw(25) << left << "Item Quantity"
         << "Total Price" << endl;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (code[i] == food_item_codes[j])
            {
                total_prize[i] = quantity[i] * food_item_prices[j];
                cout << setw(25) << left << food_item_codes[j] << setw(25) << left << food_item_names[j] << setw(25) << left << food_item_prices[j] << setw(25) << left << quantity[i] << setw(25) << left << total_prize[i] << endl;
            }
        }
    }
}

// Tax Initializing function:
void Restaurant ::taxInitializer()
{
    total_tax = 0;
}

// Display function for Total Tax: ans for 6 & 7
void Restaurant ::total_tax_count_and_net_amount()
{
    float net_prize_without_tax = 0;
    for (int i = 0; i < N; i++)
    {
        net_prize_without_tax += total_prize[i];
    }

    float(total_tax) = .05 * net_prize_without_tax;
    cout << setw(25) << left << "TAX" << setw(80) << right << total_tax << endl;
    cout << "______________________________________________________________________________________________________________" << endl;

    float net_amount;
    net_amount = net_prize_without_tax + total_tax;
    cout << setw(25) << left << "NET TOTAL" << setw(80) << right << net_amount << "Taka";
}

int main()
{
    Restaurant myNewRestaurant;
    myNewRestaurant.input_menu_details();
    myNewRestaurant.display_menu_details();
    myNewRestaurant.order_from_customer();
    myNewRestaurant.show_order_summary();
    myNewRestaurant.taxInitializer();
    myNewRestaurant.total_tax_count_and_net_amount();

    return 0;
}