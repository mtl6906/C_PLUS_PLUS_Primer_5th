using std::endl;

class numbered
{
        public:
                static int curr;
                numbered()
                {
                        mysn = ++curr;
                }

                numbered(const numbered &t)
                {
                        mysn = ++curr;
                }

                int mysn;
};

int numbered::curr = 0;

void f(numbered s){cout << s.mysn << endl;}
int main()
{
        numbered a,b = a,c = b;
        f(a);f(b);f(c);
        return 0;
}
