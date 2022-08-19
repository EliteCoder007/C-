#include<iostream>
using namespace std;

// int sum(int a, int b){
//     cout << "Using function with two arguments\n";
//     return a + b;
// }

// int sum(int a, int b, int c){
//     cout << "Using function with 3 arguments\n";
//     return a + b + c;
// }

//  *** Overloading Function --> Volume: ***
//Calculating volume of a Cylinder:
float volume( int r, int h){
    return 3.14 * r * r *h;
}

//Calculating volume of a Cube: 
int volume(int side){
    return side * side * side;
}

//Calculating volume of a Cuboid:
int volume(int l, int b, int h){
    return l * b * h;
}


int main(){
    // cout << "The sum of 4 & 5 is " << sum(4,5) << endl;
    // cout << "The sum of 4, 5 & 6 is " << sum(4,5,6) << endl;


    // Volume:
    cout << "The volume of Cylinder of radius 3 and height 6 is " << volume(3, 6) << endl;
    cout << "The volume of a cuboid of 3, 7 and 6 is " << volume(3, 7, 6) << endl;
    cout << "The volume of a cube of side 3 is " << volume(3) << endl;
    return 0;
}