#include<iostream>
#include<cmath>
using namespace std;
int main()
{
string right_answer;
int score=0;
cout<<"Capital in Japan: ";
cin>>right_answer;
if (right_answer=="Tokyo" || right_answer=="TOKYO" ||
right_answer=="tokyo"){
cout<<"The answer you entered is correct.\n";
score=score+1;
}
else{
cout<<"The answer you entered is wrong.\n";
score=score+0;
}
cout<<"Capital in Egypt: ";
cin>>right_answer;
if (right_answer=="Cairo" || right_answer=="CAIRO" || right_answer=="cairo"){
cout<<"The answer you entered is correct.\n";
score=score+1;
}
else{
cout<<"The answer you entered is wrong.\n";
score=score+0;
}
cout<<"Capital in Vietnam: ";
cin>>right_answer;
if (right_answer=="Hanoi" || right_answer=="HANOI" || right_answer=="hanoi"){
cout<<"The answer you entered is correct.\n";
score=score+1;
}
else{
cout<<"The answer you entered is wrong.\n";
score=score+0;
}
cout<<"Capital in France: ";
cin>>right_answer;
if (right_answer=="Paris" || right_answer=="PARIS" || right_answer=="paris"){
cout<<"The answer you entered is correct.\n";
score=score+1;
}
else{
cout<<"The answer you entered is wrong.\n";
score=score+0;
}
cout<<"Capital in South Korea: ";
cin>>right_answer;
if (right_answer=="Seoul" || right_answer=="SEOUL" ||
right_answer=="seoul"){
cout<<"The answer you entered is correct.\n";
score=score+1;
}
else{
cout<<"The answer you entered is wrong.\n";
score=score+0;
}
cout<<"Thank you for participating. \n";
cout<<"Score: "<<score<<"\n";
return 0;
}
