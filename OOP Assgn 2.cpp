#include<iostream>
using namespace std;
class complex
{
	int x,y;
	public :
	sample()
	{
		int x=0,y=0;
	}
	public :
	friend istream &operator>>(istream&input,complex &s1);	
	friend ostream &operator<<(ostream&output,complex&s1);
	
	complex operator +(complex sum)
	{
		complex temp;
		temp.x = x + sum.x;
		temp.y = y + sum.y;
		return temp;
	}
	complex operator -(complex sum)
	{
		complex temp;
		temp.x = x - sum.x;
		temp.y = y - sum.y;
		return temp;
	}
	
	complex operator *(complex sum)
	{
		complex temp;
		temp.x = x*sum.x - y*sum.y; 
		return temp;
	}

	complex operator /(complex sum)
	{
		complex temp;
		temp.x = x/sum.x - y/sum.y; 
		return temp;
	}
	complex operator -()
	{
		complex temp;
		temp.x = -(x);
		temp.y = -(y);
		return temp;
	}
	bool operator >(complex t)
	{
		complex temp;
		if(x>t.x && y>t.y)
		{
			return true;
		}
		else 
		return false;
	}
};


istream &operator >>(istream&input,complex &s1)
{
	input>>s1.x;
	input>>s1.y;
	return input;
}
ostream & operator<<(ostream&output,complex&s1)
{
	output<<s1.x;
	output<<"+ i("<<s1.y<<")"<<"\n";
}
int main()
{
	complex s,t,sum,temp;

	int a,b,i,j,k,m,n,o;
	
	do
	{
		cout<<"ENTER 1 : ENTER COMPLEX NOS.\nENTER 2 : TO DISPLAY COMPLEX NOS.\nENTER 3 : USE BINARY OPERATOR OVERLOADING\nENTER 4 : USE UNARY OPERATOR\nENTER 5 : USE RELATIONAL OPERATOR\nENTER 6 : EXIT\n";
		cin>>m;
		switch(m)
		{
			case 1 : cout<<"ENTER THE FIRST COMPLEX NO.\n";
					 cin>>s;
					 cout<<"ENTER SECOND COMPLEX NO.\n";
					 cin>>t;
					 break;
					 
			case 2 : cout<<s;
					 cout<<t;
					 break;
					 
			case 3 : do
					{
						cout<<"ENTER 1 : ADD\nENTER 2 : SUB\nENTER 3 : MUL\nENTER 4 : DIVIDE\nENTER 5 : EXIT\n";
						cin>>n;
						switch(n)
						{
							case 1 : temp = s+t;
									 cout<<temp;break;
							case 2 : temp = s-t;
									 cout<<temp;break;
							case 3 : temp = s*t;
							         cout<<temp;break;
							case 4 : temp = s/t;
										cout<<temp;
										break;
							case 5 : ;break;
						}
					}
					while(n != 5);
						break;
			case 4 : temp = -s;
					 cout<<temp;
					break;
			case 5 : cout<<"PRESS 1 : TO CHECK C1 > C2";
					// cout<<"PRESS 2 : TO CHECK C2 > C1";
					 cin>>o;
					 switch(o)
					 {
					 	case 1 : if(s > t)
					 			 {
					 			 	cout<<"C1 > C2 ---YES\n";	
								 }
								 else
								 cout<<"NO!!!!!!\n";
						 		break;
					 }
					break;
			case 6 : ;break;
			
		}
		
	}
	while(m!=6);

	
	return 0;
	
}
