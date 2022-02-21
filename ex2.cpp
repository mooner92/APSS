#include <iostream>
#include "ex1.h"
#include <math.h>
#include <fstream>
#include <string>
#include <ctype.h>
#include <sstream>
using namespace std;

string les = "";
char addr[100];

int main(){
    cin.getline(addr,100,';');
    
    getline(cin,les);
    for(int i=0;i<les.size();i++){
        les[i] = tolower(les[i]);
    }

}

void inter() {


}