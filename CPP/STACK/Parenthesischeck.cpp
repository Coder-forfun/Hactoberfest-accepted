/**/
#include<iostream>
#include<string.h>
//#define DEBUG 6
using namespace std;

class stack
{
private:
	int i,n,count=0,flag=0;
	int top = -1;
	char x[50],k;
public:
	stack* s;
	void push(char);
	char pop();
	void check();
	int gettop();
	void randomcheck()
	{
		cout << "You pushed " << k << endl;
		cout << "Count Became " << count << endl;
		cout << "Flag Became " << flag << endl;
		cout << "Top Became " <<gettop()<< endl;
	}
public:
	stack();
	~stack();



};

stack::stack()
{
	
	//s = NULL;
	cout << "Enter a expression" << endl;
	cin.getline(x, 50);
	cout << x << endl;
	n = strlen(x);

}

stack::~stack()
{
}
int stack::gettop()
{
	return top;
}


void stack::push(char df)
{
	top++;
	x[top] = df;
}
char stack::pop()
{
	char m;
	m = x[top];
	//delete (x);
	top--;
	return m;
}
void stack::check()
{
#ifdef DEBUG
	cout << "Top = " << gettop() << endl;
	for (int j = 0; j < n; j++)
	{
		push(x[j]);
		cout << "Top = " << gettop() << endl;
	}

#endif // DEBUG


#ifdef DEBUG
	cout << "Your entered infix expression is" << endl;
	for (int j = 0; j < n; j++)
	{
		k = pop();
		cout << k;
		cout << "Top = " << gettop() << endl;
	}
#endif // DEBUG
	if (x[0] == '}' || x[0] == ')' || x[0] == ']')
	{
		cout << "The entered expression is not well parenthesized" << endl;
	}
	else {
		for (i=0; i < n; i++)
		{

			if (x[i] == '{' || x[i] == '(' || x[i] == '[')
			{
				push(x[i]);
				k = x[i];
				count++;
#ifdef DEBUG
				randomcheck();
#endif // DEBUG


			}
			else if (x[i] == '}' || x[i] == ']' || x[i] == ')')
			{
				if (x[i] == '}')
				{
					k = pop();
					if (k == '{')
					{
						flag++;

#ifdef DEBUG
						cout << "Entered if loop of " << k << endl;
						randomcheck();
#endif // DEBUG
					}
					else
					{
						push(k);
#ifdef DEBUG
						cout << "Entered if loop of " << k << endl;
						randomcheck();
#endif // DEBUG				
					}
				}
				else if (x[i] == ']')
				{
					k = pop();
					if (k == '[')
					{
						flag++;
#ifdef DEBUG
						cout << "Entered if loop of " << k << endl;
						randomcheck();
#endif // DEBUG
					}
					else
					{
						push(k);
#ifdef DEBUG
						cout << "Entered if loop of " << k << endl;
						randomcheck();
#endif // DEBUG
					}
				}
				else if (x[i] == ')')
				{
					k = pop();
					if (k == '(')
					{
						flag++;
#ifdef DEBUG
						cout << "Entered if loop of " << k << endl;
						randomcheck();
#endif // DEBUG
					}
					else
					{
						push(k);
#ifdef DEBUG
						cout << "Entered if loop of " << k << endl;
						randomcheck();
#endif // DEBUG
					}
				}
				else if (x[i] != '}' && x[i] != ')' && x[i] != ']')
				{
					cout << "HI" << endl;
					k = x[i];
					push(k);
					count++;
#ifdef DEBUG
					cout << "Entered if loop of " << k << endl;
					randomcheck();
#endif // DEBUG
				}
			}
			else
			{




#ifdef DEBUG
				cout << "Entered ELSE part because k = " << k << " . Hence no change in stack." << endl;
#endif // DEBUG

				count++;
				flag++;
			}
		}
		if (flag == count)
			cout << "The expression is well parenthesized" << endl;
		else
			cout << "The given expression is not well parenthesized" << endl;
	}
}


int main()
{
	stack A;
	A.check();
	return 0;
}

/*
OUTPUT:


TESTCASE !:


Enter a expression
([)]
([)]
The given expression is not well parenthesized

TESTCASE 2:


Enter a expression
([[]]{}{({})})   
([[]]{}{({})})
The expression is well parenthesized

*/