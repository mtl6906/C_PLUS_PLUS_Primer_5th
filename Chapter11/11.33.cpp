#include <iostream>
#include <map>
#include <string>
#include <fstream>

using std::ifstream;
using std::string;
using std::map;
using std::cout;
using std::endl;
using std::istream;
using std::cin;
string transform(const string &s,const map<string,string> &mp)
{
	auto t = mp.find(s);
	if(t != mp.end())
		return t -> second;
	return s;
}

bool readline_inrule(istream& in,string &key,string &value)
{
	in >> key;
	if(!in.good())
		return false;
	in >> value;
	string word;
	getline(in,word);
	value += word;
	return true;
}

bool readline_insrc(istream& in,string &res,map<string,string> mp)
{
	char ch;
	string word;
	while(true)
	{
		
		word = "";
			
		while((ch = in.get()) == ' ')
			res += ' ';
			
		if(ch == '\n')
		{
			res += '\n';
			return true;
		}	

		if(ch == -1)
			return false;

		word += ch;

		while((ch = in.get()) != '\n' && ch != ' ' && ch != -1)
		{
			word += ch;
		}

		res += transform(word,mp);	

		if(ch == '\n')
		{
			res += '\n';
			return true;
		}	
		if(ch == -1)
			return false;	

		res += ' ';

	}
	return false;
}


int main(int argc,char **argv)
{
	if(argc != 3)
	{
		cout << "usage: ./11.33 <ruleFile> <sourceFile>";
		return -1;
	}
	map<string,string> mp;
	string key,value;
	ifstream rule(argv[1]);
	ifstream src(argv[2]); 

	if(!(rule.is_open() && src.is_open()))
	{
		cout << "file open failed" << endl;
		return -1;
	}

	cout << "build map..." << endl;

	while(readline_inrule(rule,key,value))		//	build map
		mp.insert({key,value});

	string res = "";

	cout << "transform..." << endl;

	while(readline_insrc(src,res,mp));

	cout << res << endl;

	return 0;
}
