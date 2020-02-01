#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int power(int x, int n) {
  if(n==0){
    return 1;
  }
  int so=power(x,n-1);
  int output=x*so;
  return output;
}

float CalculateSine(float x){
    int n=5,i;
    float t;
    float sum;
    x=x*3.14159/180;
    t=x;
    sum=x;
    for(i=1;i<=n;i++)
    {
        t=(t*(-1)*x*x)/(2*i*(2*i+1));
        sum=sum+t;
    }
    return sum;
}

float Calculate_tan(float x){
	 x=x*3.14159;
	 x/=180;
	return tan(x);
}

float Calculate_Cosine(float x){
	int i, n=5;
  float sum=1, t=1;
    x=x*3.14159/180;
    for(i=1;i<=n;i++)
    {
        t=t*(-1)*x*x/(2*i*(2*i-1));
        sum=sum+t;
    }
    return sum;
}

float ln(float x){
	return log(x);
}

int main(){
	float angle;
	float num;
	int choice;
	char ch;
	do{
		cout<<"\n\n";
		cout<<"\t\tMENU"<<endl;
		cout<<"\t\t1."<<" "<<"ADDITION"<<endl;
		cout<<"\t\t2."<<" "<<"SUBTRACTION"<<endl;
		cout<<"\t\t3."<<" "<<"MUTIPLICATION"<<endl;
		cout<<"\t\t4."<<" "<<"DIVISION"<<endl;
		cout<<"\t\t5."<<" "<<"EXPONENTIAL"<<endl;
		cout<<"\t\t6."<<" "<<"SINE"<<endl;
		cout<<"\t\t7."<<" "<<"COS"<<endl;
		cout<<"\t\t8."<<" "<<"TAN"<<endl;
		cout<<"\t\t9."<<" "<<"LOG"<<endl;
	    cout<<"\t\t10."<<" "<<"EXIT"<<endl;

		
		cout<<"Enter your choice"<<"  ";
		cin>>choice;
		cout<<endl;
		
		switch(choice){
			case 1:
				double a,b;
				cout<<"enter two numbers"<<"  ";
				cin>>a>>b;
				cout<<"ANSWER"<<":"<<a+b<<endl;
				break;
			case 2:
				cout<<"enter two numbers"<<"  ";
				cin>>a>>b;
				cout<<"ANSWER"<<":"<<a-b<<endl;
				break;
			case 3:
				cout<<"enter two numbers"<<"  ";
				cin>>a>>b;
				cout<<"ANSWER"<<":"<<a*b<<endl;
				break;
			case 4:
				cout<<"enter two numbers"<<"  ";
				cin>>a>>b;
				cout<<"ANSWER"<<":"<<a/b<<endl;
				break;
			case 5:	
				int x,n;
				cout<<"Enter the base number and power"<<"  ";
				cin>>x>>n;	
				cout<<"ANSWER"<<":"<<power(x,n)<<endl;
				break;
			case 6:
				cout<<"Enter the angle"<<"  ";
				cin>>angle;
				cout<<" The value of sin("<<angle<<") = "<<setprecision(4)<<CalculateSine(angle)<<endl;
				break;
			case 7:
				cout<<"Enter the angle"<<"  ";
				cin>>angle;
				cout<<" The value of cos("<<angle<<") = "<<setprecision(4)<<Calculate_Cosine(angle)<<endl;
				break;
			case 8:
				cout<<"Enter the angle"<<"  ";
				cin>>angle;
				cout<<" The value of tan("<<angle<<") = "<<setprecision(4)<< Calculate_tan(angle)<<endl;
				break;
			case 9:
				cout<<"Enter the number"<<"  ";
				cin>>num;
				cout<<"ANSWER"<<" "<<ln(num)<<endl;
			case 10:
				break;
			default:
				cout<<"Wrong choice"<<endl;
						
		}	
		
	}while(choice >= 1 && choice <=9);
	
}
