#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
template<class T>
void display(vector<T> v){
for(int i = 0; i<v.size(); i++){
    cout<<v[i]<<" ";
}
}
int main(){

vector<int> vec1;
vector<char> vec2(5,'d');
int element, size;
cout<<"Enter the size "<<endl;
cin>>size;
for(int i = 0; i<size; i++){
    cout<<"Enter no. "<<i+1<<" element : "<<endl;
    cin>>element;
    vec1.push_back(element);
}
display(vec1);
cout<<endl;
vector<int> :: iterator itr1;
itr1 = vec1.begin();
vec1.insert(itr1+1,3, 333);
display(vec1);
cout<<endl;
sort(vec1.begin(),vec1.end());
display(vec1);
cout<<endl;
display(vec2);


return 0;
}