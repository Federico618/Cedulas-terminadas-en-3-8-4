#include <iostream>
using namespace std;
int main(){
    int num,hor,minu,seg;
    cout<<"ingrese los segundos"<<endl;
    cin>>num;
    hor=(num / 3600);
    minu=((num - hor * 3600) / 60);
    seg=num - (hor * 3600 + minu * 60);
    cout<<hor<<"h "<<minu<<"m "<<seg<<"s";
return 0;
}
