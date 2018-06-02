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
                C(int data) : nd(data){}
        private:
                Nodefault nd;
};

int main()
{
        C c(1);
        return 0;
}
