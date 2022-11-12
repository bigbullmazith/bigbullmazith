#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
    string name;
    int age;
     int pri;
    cout<<"enter your name : ";
    cin>>name;
    cout<<"enter your age : ";
    cin>>age;
   srand(time(0));
   int a=100 +(rand() % 201);
    cout<<"private number: "<<a;
    cout<<"\nenter your private number: ";
    cin>>pri;
    
if(a==pri)
{ 
    for(int b=1;b<=20;b++){
        cout<<"*";
    }
    cout<<"\nyour name : "<<name<<endl<<"your age :"<<age<<endl;     }     
else{         cout<<"try again ";    

return 0;
}
for(int b=1;b<=20;b++){
        cout<<"*";
    }
    
}
