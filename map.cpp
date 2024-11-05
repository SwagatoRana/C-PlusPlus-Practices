#include<iostream>
#include<map>
using namespace std;
int main(){

    map<string,int> Map1;
    Map1["Swagato"] = 98;
    Map1["Milan"] = 99;
    Map1["Arup"] = 95;
    Map1["Rahul"] = 90;
    Map1.insert({{"Subhadip",96},{"Arpan",89}});
    map<string,int> :: iterator iter;
    for(iter = Map1.begin(); iter != Map1.end(); iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }

return 0;
}