#include <iostream>
#include <set>
#include <map>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>

using std::set;
using std::map;
using std::istringstream;
using std::ifstream;
using std::vector;
using std::string;
using std::cout;
using std::endl;

using file_no = vector<string>::size_type;

string make_pluary(size_t count,string word,const string s)
{
	return count > 1 ? word + s : word;
}

void print(string key,vector<string> file,set<file_no> lines)
{
	cout << key << " occurs " << lines.size() << make_pluary(lines.size()," time","s") << endl;

	for(const auto num : lines)
		cout << "\t(line " << num << ") " << *(file.begin() + num - 1) << endl;
}

int main(int argc,char **argv)
{
	if(argc != 3)
	{
		cout << "usage: ./12.28 <filename> <key>" << endl; 
		return -1;
	}

	ifstream fin(argv[1]);

	if(!fin.is_open())
	{
		cout << "file open failed..." << endl;
		return -1;
	}

	map<string,set<file_no>> mp;
	vector<string> file;
	string line,word;
	file_no cnt = 0;
	
	getline(cin,line);

	if(cin)
	do
	{
		++cnt;
		file.push_back(line);
		
		istringstream iss(line);

		while(iss >> word)
			mp[word].insert(cnt);
	}while(getline(cin,line));

	auto t = mp.find(argv[2]);

	print(argv[2],file,t -> second);

	return 0;
}
