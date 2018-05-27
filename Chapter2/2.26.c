//const int buf;        不合法
int cnt = 0;
//const int sz = 0;     合法
const int sz = cnt;


int main()
{
        ++cnt;;
//      ++sz;           不合法
        return 0;
}
