// open,close ,reaad and write operation

#include<iostream>
#include<fstream>
using namespace std;

int main(){

    string s;
    getline(cin,s);

    fstream mf("Hello.txt",ios::app);

    mf<<s;


    mf.close();




    ifstream rf("Hello.txt");
    cout<<"reading from file  :  ";
    char arr[100];

    rf.getline(arr,100);

    cout<<arr;





}