#include<iostream>
#include <array>
#include<cmath>
#include<vector>
using namespace std;

int main()
{
	int x = 0;
	int y = 0;
	int  zeros = 0;
	long result=0; 
	vector<int>arr;
	cout << "Enter the Number"<<endl;
	cin >> x;
	
	while(x)
	{
	  
	 	y =  (x%10);
		arr.push_back(y);
		x = (x/10);
	
	}

	zeros = arr.size()-1;
	for(int i = 0; i < arr.size();i++)
	{
		result += arr[i]* pow(10, zeros);
		if(zeros > 0)
		{
			zeros --;
		}
	}
	cout << result <<endl;
//	cout << static_cast<int>(result) << endl;
	return 0;
}
