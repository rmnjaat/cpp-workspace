#include<bits/stdc++.h>
using namespace std;

class Frac
{

public:
    int den;
    int num;
    
    Frac(int x, int y) : num(x), den(y){};

    Frac operator+(Frac f2){
        // add and store answere in f1
        int lc=lcm(this->den,f2.den);
    cout<<"lcm is "<<lc<<endl;
        int s=0;
        s+=(lc/this->den)*this->num;
    cout<<"s1 "<<s<<endl;
        s+=(lc/f2.den)*f2.num;
    cout<<"s2 "<<s<<endl;
    Frac f3(0,0);
    f3.num=s;
    f3.den=lc;

    return f3;
    };

    bool operator==(Frac f2){
        if(num==f2.num){
            if(den==f2.den){
                return true;
            }
            else{
                return false;
            }
        }
        else{
                return false;
            }

    }

    void simplfy(){
        int gc=gcd(this->num,this->den);
        this->num/=gc;
        this->den/=gc;

    };

    void print()
    {
        cout<<this->num<<"/"<<this->den<<endl;
    };

};

int main(){
    int x,y;
    cin>>x>>y;


    Frac f1(x,y);
    cin>>x>>y;
    Frac f2(x,y);
    // f1=f1+f2;

    // f1.print();
    // f1.simplfy();
    // f1.print();

  int r=f1==f2;
  (r==0)?cout<<"False":cout<<"True";

}