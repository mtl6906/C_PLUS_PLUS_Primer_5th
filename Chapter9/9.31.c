//	因为list和foward_list不支持+操作符
#include <list>
#include <forward_list>
#include <iostream>

using std::cout;
using std::endl;
using std::list;
using std::forward_list;

int main()
{
//	for list
	list<int> il = {1,2,3,4,5,6};

	auto cur = il.begin();

	while(cur != il.end())
	{
		if(*cur % 2)
		{
			il.insert(cur,*cur);
			cur++;
		}
		else
		{
			cur = il.erase(cur);
		}
	}

	for(const auto& i : il)
		cout << i << endl;

//	for foward_list

	cout << endl;

	forward_list<int> ifl = {1,2,3,4,5,6};

	auto prev = ifl.before_begin();

	auto iter = ifl.begin();

	while(iter != ifl.end())
	{
//		cout << *iter << endl;
		if(*iter % 2)
		{
			iter = ifl.insert_after(iter,*iter);
			prev = iter;
			iter++;
		}
		else
		{
			iter = ifl.erase_after(prev);
		}
	}

	for(const auto &i : ifl)
		cout << i << endl;

	return 0;
}
