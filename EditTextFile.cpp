#include<iostream>
#include<fstream>

using namespace std;
int main(){

    // string kkk = "Yo";
    string jjj;

    // ofstream out("EditTextFile.txt");
    // out<<kkk;

    ifstream in("EditTextFile.txt");
    in>>jjj;
    getline(in, jjj);
    cout<<jjj<<endl;
    getline(in, jjj);
    cout<<jjj<<endl;
    getline(in, jjj);
    cout<<jjj<<endl;


return 0;
}