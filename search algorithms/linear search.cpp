#include <iostream>
#include <fstream>
#include <random>
#include <time.h>
using namespace std;

#define arraySize 10000

int dataArray[arraySize];

bool linearSearch(int searchValue, int len){
    bool flag = false;
    for(int i=0; i<len; i++){
        if(dataArray[i]==searchValue){
            flag = true;
            break;
        }
    }
    return flag;

}


int main(){

    ifstream file;
    file.open("data.txt");

    int val, index=0;

    while(file >> val){
        dataArray[index] = val;
        index++;
    }
    srand(time(0));
    int searchValue = rand()%arraySize;
    int len = index;

    if(linearSearch(searchValue, len)==true){
        cout << "Number " << searchValue << " exists!" << endl;
    }else{
        cout << "Number " << searchValue << " doesn't exists!" << endl;
    }

return 0;
}
