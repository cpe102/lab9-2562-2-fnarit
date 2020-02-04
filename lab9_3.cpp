//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
    int count = 0;
    float sum = 0,mean1,mean2,sd;
    string textline;
    ifstream dest1;
    dest1.open("C:\\Users\\USER\\Desktop\\lec and lab\\lab9-2562-2-fnarit\\score.txt");
    while(getline(dest1,textline)){
        sum += atof(textline.c_str());
        count++;
    }
    cout << "Number of data = " << count << "\n";
    mean1 = sum/count;
    mean2 = pow(sum,2)/count;
    sd = sqrt(mean2 - pow(mean1,2));
    cout << "Mean = " << mean1 << "\n";
    cout << "Standard deviation = " << sd << "\n";


}