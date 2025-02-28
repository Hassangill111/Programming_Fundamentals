#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
	//Task 1
	double x1=3,x2=6,y1=4,y2=8,squared_distance;
	squared_distance=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	cout<<"The squared distance betweent the points (3,4) and (6,8) is:"<<squared_distance<<endl;

//Task 2
double i1=12.95,i2=24.95,i3=6.95,i4=14.95,i5=3.95,subtotal,st,total;
cout<<"Price of item 1: $"<<i1<<endl;
cout<<"Price of item 2: $"<<i2<<endl;
cout<<"Price of item 3: $"<<i3<<endl;
cout<<"Price of item 4: $"<<i4<<endl;
cout<<"Price of item 5: $"<<i5<<endl;
subtotal=i1+i2+i3+i4+i5;
st=subtotal*6/100;
total=subtotal+st;
cout<<"Subtotal: $"<<subtotal<<endl;
cout<<"Sales Tax: $"<<st<<endl;
cout<<"Total: $"<<total;

//Task 3
double a=85.5,b=90.75,c=88.25,avg;
avg=a/3+b/3+c/3;
cout<<setprecision(4);
cout<<"The average of 85.5, 90.75 and 88.25 = "<<avg;

//Task 4
int a,b,add,sub,prod,div,mod;
cout<<"Enter two numbers: "<<endl;
cout<<"Number 1 : ";cin>>a;
cout<<"Number 2 : ";cin>>b;
add=a+b;
sub=a-b;
prod=a*b;
div=a/b;
mod=a%b;

//Task 5
cout<<"\n\tAddition:\n\t\t "<<a<<" + "<<b<<" = "<<add<<endl;
cout<<"\tSubtraction:\n\t\t "<<a<<" - "<<b<<" = "<<sub<<endl;
cout<<"\tMultiplication:\n\t\t "<<a<<" x "<<b<<" = "<<prod<<endl;
cout<<"\tDivision:\n\t\t "<<a<<" / "<<b<<" = "<<div<<endl;
cout<<"\tModulus:\n\t\t "<<a<<" % "<<b<<" = "<<mod;

//Task 6
double w,h,bmi;
cout<<"BMI Calculator"<<endl;
cout<<"--------------"<<endl;
cout<<"Enter your weight in kilograms: ";
cin>>w;
cout<<"Enter your Height in meters: ";
cin>>h;
bmi=w/(h*h);
cout<<"Your BMI is: "<<bmi;

//Task 7
double d,fe,fc,ttc;
cout<<"Enter distance of trip in kilometers: ";
cin>>d;
cout<<"Enter vehicle's fuel efficency (km per liter): ";
cin>>fe;
cout<<"Enter fuel cost per litre: ";
cin>>fc;
ttc=(d/fe)*fc;
cout<<"Total trip cost: Rs"<<ttc;


return 0;
}
