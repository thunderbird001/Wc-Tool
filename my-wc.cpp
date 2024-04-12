#include<iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
    cout << "You have entered " << argc << " arguments:"
    << "\n";

    for (int i = 0; i < argc; ++i){
        if(strcmp(argv[i],"-c") == 0){

            std::ifstream myfile;
            myfile.open(argv[i+1]);
            std::string myline;
            if ( myfile.is_open() ) {
            // while ( myfile ) { // equivalent to myfile.good()
            std::getline (myfile, myline);
            std::cout << myline << '\n';
            // }
            }
            else {
            std::cout << "Couldn't open file\n";
            }
        }
    }
 
    return 0;
}