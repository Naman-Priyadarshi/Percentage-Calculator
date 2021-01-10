#include<iostream>
#include<stdlib.h>
#include<iomanip>
#include<conio.h>
using namespace std;
void input(float& a, float& b, float& c, float& d, float& e, float& f);
void dper(float a, float b, float c, float d, float e, float f, float& g, float& h, float& i, float& j, float& k, float& l);
void totmar(float a, float b, float c, float d, float e, float f, float g);
void avgper(float a, float b, float c, float d, float e, float f, float g);
int main()
{
	 float marks1=0,marks2=0,marks3=0,marks4=0,marks5=0,marks6=0,percent1=0,percent2=0,percent3=0,percent4=0,percent5=0,percent6=0,totalmarks=0,avgpercent=0;
	 int ch=0;
	 cout<<"-------------------------------------------Percentage Calculator-------------------------------------------"<<endl;
	 do{
	 	system("cls");
	 cout<<"1. Enter Marks: "<<endl;
	 cout<<"2. Check Percentages: "<<endl;
	 cout<<"3. Check Total Marks: "<<endl;
	 cout<<"4. Check Average Percentage: "<<endl;
	 cout<<"5. Exit"<<endl;
	 cin>>ch;
	 switch(ch)
	 {
	 	case 1:{input(marks1, marks2, marks3, marks4, marks5, marks6);
			break;
		 }
		case 2:{dper(marks1,marks2,marks3,marks4,marks5,marks6,percent1,percent2,percent3,percent4,percent5,percent6);
			break;
		}
		case 3:{totmar(marks1,marks2,marks3,marks4,marks5,marks6,totalmarks);
			break;
		}
		case 4:{avgper(percent1,percent2,percent3,percent4,percent5,percent6,avgpercent);
			break;
		}
		case 5:{exit(0);
			break;
		}
	 	default:cout<<"Wrong Input"<<endl;
	 }
}while(ch<=4);
	 cout<<"\n";
	 return 0;
}
void input(float& a, float& b, float& c, float& d, float& e, float& f)
{
	system("cls");
	cout<<"Enter marks of Maths (out of 100): "<<endl;
	cin>>a;
	cout<<"Enter marks of Physics (out of 70): "<<endl;
	cin>>b;
	cout<<"Enter marks of Chemistry (out of 70): "<<endl;
	cin>>c;
	cout<<"Enter marks of English (out of 80): "<<endl;
	cin>>d;
	cout<<"Enter marks of Computer Science (out of 70): "<<endl;
	cin>>e;
	cout<<"Enter marks of Physical Education/Economics (out of 70): "<<endl;
	cin>>f;
}
void dper(float a, float b, float c, float d, float e, float f, float& g, float& h, float& i, float& j, float& k, float& l)
{
	system("cls");
	g=a;
	h=(b/70)*100;
	i=(c/70)*100;
	j=(d/80)*100;
	k=(e/70)*100;
	l=(f/70)*100;
	cout<<"Percentage in Maths: "<<setprecision(5)<<g<<endl;
	cout<<"Percentage in Physics: "<<setprecision(5)<<h<<endl;
	cout<<"Percentage in Chemistry: "<<setprecision(5)<<i<<endl;
	cout<<"Percentage in English: "<<setprecision(5)<<j<<endl;
	cout<<"Percentage in Computer Science: "<<setprecision(5)<<k<<endl;
	cout<<"Percentage in Physical Education/Economics: "<<setprecision(5)<<l<<endl;
	getch();
}
void totmar(float a, float b, float c, float d, float e, float f, float g)
{
	system("cls");
	g=a+b+c+d+e+f;
	cout<<"Total Marks (out of 460): "<<g<<endl;
	getch();
}
void avgper(float a, float b, float c, float d, float e, float f, float g)
{
	system("cls");
	g=(a+b+c+d+e+f)/6;
	cout<<"Average Percentage: "<<g<<endl;
	getch();
}
