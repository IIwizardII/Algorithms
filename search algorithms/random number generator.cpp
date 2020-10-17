#include<iostream>
#include<fstream>
#include<random>
#include<time.h>
using namespace std;

#define numberSize 10000

int checkerArray[numberSize];

int main(){

    ofstream file;
    file.open("data.txt");

    srand(time(0));
    int c = 0;
    int number;

    for(int i=0; i<numberSize; i++){
        if(checkerArray[i]==0){
            number = rand()%numberSize+1;
            file << number << "\n";
            checkerArray[number] = 1;
            c++;
        }
    }
    cout << c << endl;

    file.close();


return 0;
}
