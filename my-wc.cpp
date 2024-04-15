#include<iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
    if(argc == 1){
        //help section
    }
    for (int i = 0; i < argc; ++i){
        if(strcmp(argv[i],"-l") == 0){

            std::ifstream myfile;
            myfile.open(argv[i+1]);
            std::string myline;
            int countOfLines = 0;
            if ( myfile.is_open() ) {
                while ( myfile ) { // equivalent to myfile.good()
                std::getline (myfile, myline);
                countOfLines++;
                }
            cout << countOfLines-1 << " " << argv[i+1] << endl;
            }
            else {
            std::cout << "Couldn't open file\n";
            }
        }

        if(strcmp(argv[i],"-w") == 0){

            std::ifstream myfile;
            myfile.open(argv[i+1]);
            std::string myline;
            int countOfWords = 0;
            if ( myfile.is_open() ) {
                while ( myfile ) { // equivalent to myfile.good()
                string myLine;
                myfile >> myLine;
                countOfWords++;
                }
            cout << countOfWords-1 << " " << argv[i+1] << endl;
            }
            else {
            std::cout << "Couldn't open file\n";
            }
        }

        if(strcmp(argv[i],"-m") == 0){

            std::ifstream myfile;
            myfile.open(argv[i+1]);
            std::string myline;
            int countOfChar = 0;
            if ( myfile.is_open() ) {
                while ( myfile ) {
                    char myChar = myfile.get();
                    if (myChar!= '\n')
                    countOfChar++;
                }
                cout << countOfChar << " " << argv[i+1] << endl; // no need to subtract 1
            }
            else {
            std::cout << "Couldn't open file\n";
            }
        }
    }
 
    return 0;
}