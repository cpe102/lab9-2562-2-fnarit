//cout << "-------------------- SOTUS ---------------------";
//cout << textline;
//cout << "-------------------- SOTUS ---------------------";
//Don't forget to change cout to output filestream

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ofstream dest2;
    dest2.open("C:\\Users\\USER\\Desktop\\lec and lab\\lab9-2562-2-fnarit\\cheerbook_copy.txt");
    dest2 << "-------------------- SOTUS ---------------------" << "\n";
    

    ifstream dest1;
    dest1.open("C:\\Users\\USER\\Desktop\\lec and lab\\lab9-2562-2-fnarit\\cheerbook.txt");
    string textline;  
    while(getline(dest1,textline)){
        dest2 << textline << "\n";
    }
    dest1.close();
    
   
    dest2 << "-------------------- SOTUS ---------------------";
    dest2.close();

    return 0;
}
