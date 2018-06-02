#ifndef BOOK_H
#define BOOK_H

class Car
{
        public:
                Car() = default;
                Car(istream& is){is >> id >> color >> model >> owner};
                Car(std::string id,std::string color,std::string model,std::string owner) : id(id),color(color),model(model),owner(owner){};
        private:
                std::string id;
                std::string color;
                std::string model;
                std::string owner;
};

#endif
