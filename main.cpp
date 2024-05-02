#include <iostream>
#include <cmath>

using namespace std;

double distance(int x1, int x2, int y1, int y2);

int main (){
    int x1, x2, y1, y2;

    cout <<"Enter the value of x1:";
    cin >> x1;
    cout <<"Enter the value of x2:";
    cin >> x2;
    cout <<"Enter the value of y1:";
    cin >> y1;
    cout <<"Enter the value of y2:";
    cin >> y2;

    // Calculate the display the distance
    cout <<"The distance between point 1 and point 2 is" <<distance(x1,x2,y1,y2)<<endl;

    return 0;
}
// function to calculate the Euclidean distance
double distance(int x1, int x2, int y1, int y2){
return sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
}
