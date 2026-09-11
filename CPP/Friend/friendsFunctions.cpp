#include<iostream>
using namespace std;
class Sports;
class Academics
{
    int score1;
    public:
    void getacademics(){
        cout<<"Enter Academics Score:";
        cin>>score1;
    }
    friend void showfinalscore(Academics ob1,Sports ob2);
};

class Sports
{
    int score2;
    public:
    void getsports(){
        cout<<"\nEnter Sports Score:";
        cin>>score2;
    }
    friend void showfinalscore(Academics ob1,Sports ob2);
};

void showfinalscore(Academics ob1,Sports ob2){
    int score = ob1.score1 + ob2.score2;
    cout<<"\nFinal Score of Student is"<<score;
}
int main(){
    Academics ob1;
    ob1.getacademics();
    Sports ob2;
    ob2.getsports();
    showfinalscore(ob1,ob2);
}
