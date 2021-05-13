#include<iostream>
#include<string.h>
#define size1 5
#define red "033[31,1m"
#define green "033[32;41;1;4m"
#define cyan "033[36;4m"
#define reset "033[0m"

using namespace std;

template <class type>
class stack
{
	type *st;
	int ss;
	int top;
	public : stack()
		 {
			 ss = size1;
			 st = new type[ss];
			 top = -1;
		 }
		 stack(int s)
		 {
			 top = -1;
			 ss = s;
			 st = new type[ss];
		 }
		 void push(type data)
		 {
			 st[++top] = data;
		 } 
		 void pop()
		 {
			 type data;
			 data = st[top--];
		 }
		 void display()
		 {
			 for(int i=0;i<=top;i++)
				 cout<<st[i]<<endl;
		 }
		 int size()
		 {
			 return ss;
		 }
		 void top1()
		 {
			 cout<<st[top]<<endl;
		 }
		 bool isfull()
		 {
			 if(top == ss-1)
				 return true;
			 return false;
		 }

		 bool isempty()
		 {
			 if(top == -1)
				 return true;
			 return false;
		 }
};

template<class any>
static any *ar = new any[10];

static int cnt1 = 3;
	template<class type>
stack<type> sub(stack<type>&s, int t)
{
	ar< stack<type> >[t-1] = s;
	int o;
	cout<<endl;
	while(1)
	{
		cout<<"1. Push\t2. Pop\t3. Display\t4. S_Size\t5. Peek\t6. Main_Menu\t7. Exit"<<endl;
		cout<<"Enter Ur Choice : ";
		cin>>o;
		switch(o)
		{
			case 1 :{
					cnt1 = 3;
					type data;
					cout<<"Enter Data to be pushed:";
					cin>>data;
					if(s.isfull())
						cout<<"Stack Overflow"<<endl;
					else
						s.push(data);
				}	
				break;
			case 2 : {
					 cnt1 = 3;
					 if(s.isempty())
						 cout<<"Stack Underflow"<<endl;
					 else
						 s.pop();
				 }
				 break;
			case 3 : {
					 cnt1 = 3;
					 if(s.isempty())
						 cout<<"Stack is Empty !"<<endl;
					 else
						 s.display();
				 }
				 break;
			case 4 : {
					 cout<<s.size()<<endl;
				 }
				 break;
			case 5 : {
					 s.top1();
				 }
				 break;
			case 6 : return s;
			case 7 : {
					 cout<<red<<"Thank You for Using Our Application. Good Luck"<<endl;
					 cout<<reset<<endl;
					 exit(0);
				 } 
				 break;
			default :{
					 switch(--cnt1)
					 {
						 case 1 : cout<<cnt1<<" More Chance Left ! be carefull"<<endl;
							  break;
						 case 2 : cout<<cnt1<<" More Chance Left "<<endl;
							  break;
						 case 0 : cout<<"Last Chance Left "<<endl;
							  break;
						 case -1 : cout<<"Sorry ! Please Read Manual and Come Back !"<<endl;
							   exit(0);
					 }
				 } 
		}
	}
	return s;
}	

static int cnt = 3;
int main()
{
	int t,o,f;
	bool flag = false,flag2 = false, flag3 = false, flag4 = false, flag5 = false;
	while(1)
	{
		cout<<"1. Int\t2. float\t3. char\t4. double\t5. string\t6. exit"<<endl;
		cout<<"Enter Your Option :";
		cin>>t;
		switch(t)
		{
			case 1 :{
					cnt = 3;
					if(!flag)
					{
						static stack<int>i(10);
						cout<<red<<"Integer Stack Application is ready to use";
						flag = true;
						ar< stack<int> >[0] = i;
						ar< stack<int> >[0] = sub(i,t);
					}
					else
					{
						cout<<"1. Old Stack\t2. New Stack"<<endl;
						cout<<"Select Ur Choice : ";
						cin>>o;
						if(o == 1)
							ar<stack <int> >[0] = sub(ar< stack<int> >[0],t);

						else if(o == 2)
						{
							stack<int>i1(10);
							cout<<red<<"Integer Stack Application is ready to use";
							flag = true;
							ar< stack <int> >[0] = i1;
							ar< stack <int> >[0] = sub(i1,t);
						}
					}
				}
				break;
			case 2 :{
					cnt = 3;
					if(!flag2)
					{
						stack<float>f;
						cout<<red<<"Float Stack Application is ready to use";
						flag2 = true;	
						ar< stack<float> >[1] = f;
						ar< stack<float> >[1] = sub(f,t);
					}
					else
					{
						cout<<"1. Old Stack\t2. New Stack"<<endl;
						cout<<"Select Ur Choice : ";
						cin>>o;
						if(o == 1)
							ar< stack<float> >[1] = sub(ar< stack<float> >[1],t);

						else if(o == 2)
						{
							stack<float>f1;
							cout<<red<<"Float Stack Application is ready to use";
							flag2 = true;
							ar< stack <float> >[1] = f1;	
							ar< stack<float> >[1] = sub(f1,t);
						}
					}
				}
				break;
			case 3 :{
					cnt = 3;
					if(!flag3)
					{
						stack<char>c;
						cout<<red<<"Character Stack Application is ready to use";
						flag3 = true;
						ar< stack <char> >[2] = c;
						ar< stack <char> >[2] = sub(c,t);
					}
					else
					{
						cout<<"1. Old Stack\t2. New Stack"<<endl;
						cout<<"Select Ur Choice : ";
						cin>>o;
						if(o == 1)
							ar< stack <char> >[2] = sub(ar< stack<char> >[2],t);

						else if(o == 2)
						{
							stack<char>c1;
							cout<<red<<"Character Stack Application is ready to use";
							flag3 = true;
							ar< stack<char> >[2] = c1;
							ar< stack <char> >[2] = sub(c1,t);
						}
					}
				}
				break;
			case 4 :{
					cnt = 3;
					if(!flag4)
					{
						stack<double>d;
						cout<<red<<"Double Stack Application is ready to use";
						flag4 = true;
						ar< stack<double> >[3] = d;
						ar< stack<double> >[3] = sub(d,t);
					}
					else
					{
						cout<<"1. Old Stack\t2. New Stack"<<endl;
						cout<<"Select Ur Choice : ";
						cin>>o;
						if(o == 1)
							ar< stack<double> >[3] = sub(ar< stack<double> >[3],t);

						else if(o == 2)
						{
							stack<double>d1;
							cout<<red<<"Double Stack Application is ready to use";
							flag4 = true;
							ar< stack<double> >[3] = d1;
							ar< stack<double> >[3] = sub(d1,t);
						}
					}
				}
				break;
			case 5 : {
					 cnt = 3;
					 if(!flag5)
					 {
						 stack<string>s;
						 cout<<red<<"String Stack Application is ready to use";
						 flag5 = true;
						 ar< stack<string> >[4] = s;
						 ar< stack<string> >[4] = sub(s,t);
					 }
					 else
					 {
						 cout<<"1. Old Stack\t2. New Stack"<<endl;
						 cout<<"Select Ur Choice : ";
						 cin>>o;
						 if(o == 1)
							 ar< stack<string> >[4] = sub(ar< stack<string> >[4],t);

						 else if(o == 2)
						 {
							 stack<string>s1;
							 cout<<red<<"String Stack Application is ready to use";
							 flag5 = true;
							 ar< stack<string> >[4] = s1;
							 ar< stack<string> >[4] = sub(s1,t);
						 }
					 }
				 }
				 break;
			case 6 : {
					 cout<<"Thank You for Using Our Application. Good Luck"<<endl;
					 exit(0);
				 }
				 break;
			default :{
					 switch(--cnt)
					 {
						 case 1 : cout<<cnt<<" More Chance Left ! be carefull"<<endl;
							  break;
						 case 2 : cout<<cnt<<" More Chance Left "<<endl;
							  break;
						 case 0 : cout<<"Last Chance Left "<<endl;
							  break;
						 case -1 : cout<<"Sorry ! Please Read Manual and Come Back !"<<endl;
							   exit(0);
					 }
				 } 
		}
	}
}

