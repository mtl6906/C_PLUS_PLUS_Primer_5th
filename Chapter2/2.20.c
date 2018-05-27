int main()
{
        int i = 42;             //      初始化i为42
        int *p1 = &i;           //      初始化p1为i的地址
        *p1 = *p1 * *p1;        //      将p1所指对象，即i的值赋值为42*42
 
        return 0;
}
