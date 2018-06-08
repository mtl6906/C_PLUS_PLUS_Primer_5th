using std::cin;
using std::cout;
using std::endl;
using std::map;
using std::vector;

int main()
{
        vector<string> sv;

        string family;

        string child;

        cin >> family;

        while(cin >> child)
                sv.push_back(child);

        map<string,vector<string>> ssvm = {{family,sv}};

        return 0;
}
