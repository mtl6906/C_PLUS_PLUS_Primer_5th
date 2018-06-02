class Nodefault
{
        public:
                Nodefault(int data):data(data) {};
        private:
                int data;
};

class C
{
        public:
                C() : nd(0){}
        private:
                Nodefault nd;
};

int main()
{
        C c(1);
        return 0;
}
