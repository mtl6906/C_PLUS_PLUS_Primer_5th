#include <iostream>
#include <vector>

using std::vector;
using std::endl;
using std::cout;
using std::cin;

void init_array(int a[],int size)
{	
	for(int i=0;i<size;i++)
		cin >> a[i];
}

bool cmp_array(int a[],int b[],int size)
{
	for(int i=0;i<size;i++)
		if(a[i] != b[i])
			return false;
	return true;
}

void init_vector(vector<int>& ia,int size)
{
	int t;
	for(int i=0;i<size;i++)
	{
		cin >> t;
		ia.push_back(t);
	}
}

int main()
{
//	array
	int a1[3],a2[3];
	
	init_array(a1,3);	
	init_array(a2,3);
	
	if(cmp_array(a1,a2,3))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
//	vector
	
	vector<int> ia1,ia2;

	init_vector(ia1,3);		
	init_vector(ia2,3);

	if(ia1 == ia2)
		cout << "yes" << endl;
	else
		cout << "no" << endl;	

	return 0;
}
