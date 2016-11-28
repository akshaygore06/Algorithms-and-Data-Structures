#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main()
{
stack<char> mystack;
string input;
cout << "Enter paranthesis patter string :"<<endl;
cin >>input;

for(int i = 0; i < input.size();i++)
{
	char curr = input[i];
	if((curr == '{')||(curr == '[')|| (curr == '('))
	{	
		mystack.push(curr);
	}	
	if((curr == '}')||(curr == ']')|| (curr == ')'))
	{	
	    if(mystack.top() == '{' && curr == '}')    	
            mystack.pop();
           
	    else if(mystack.top() == '[' && curr == ']')    	
            mystack.pop();

	    else if(mystack.top() == '(' && curr == ')')    	
            mystack.pop();
	}	

}

if(mystack.size() != 0)
{
	cout << "Given input patter is NOT balanced"<<endl;
}
else
{
	cout << "Given input patter is balanced"<<endl;
	
}


return 0;
}

