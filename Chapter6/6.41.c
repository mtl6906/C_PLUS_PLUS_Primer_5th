char *init(int ht,int wd=80,char bckgrnd=' ')
{
        char t[]= "fae";
        char *p = t;
        return p;
}
int main()
{
//      init();         //      非法
        init(24,10);
        init(14,'*');   //      合法，但出现了强制转换

        return 0;
}
