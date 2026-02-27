#include <iostream>
using namespace std;
int main(int argc, char* argv[]) {
    float total = 0;
    if(argc <2){
    cout <<"Please input numbers to find average.";
    }else{
    for (int i =1;i<argc;i++){
         total += atof(argv[i]);
    }
    cout <<"---------------------------------\n";
    cout << "Average of " << argc-1 << " numbers = " << total/(argc-1) << "\n";
    cout <<"---------------------------------\n";
}
}