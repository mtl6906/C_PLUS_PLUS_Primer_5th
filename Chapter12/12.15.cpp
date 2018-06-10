#include <iostream>
#include <memory>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

struct connection
{
        std::string ip;
        int port;
        connection(std::string ip,int port) : ip(ip),port(port){}
};

struct destination
{
        std::string ip;
        int port;
        destination(std::string ip,int port):ip(ip),port(port){}
};

connection connect(destination *pDest)
{
        std::shared_ptr<connection> pConn(new connection(pDest->ip,pDest->port));
        std::cout << "creating conncetion(" << pConn.use_count() << ")" << std::endl;
        return *pConn;
}

void disconnect(connection pConn)
{
        std::cout << "connection close(" << pConn.ip << ":" << pConn.port << ")" << std::endl;
}

void end_connection(connection *pConn)
{
        disconnect(*pConn);
}

void f(destination &d)
{
        connection conn = connect(&d);
        std::shared_ptr<connection> p(&conn,[](connection *p){disconnect(*p);});
        std::cout << "connecting now(" << p.use_count() << ")" << std::endl;
}

int main()
{
        destination dest("127.0.0.1",8080);
        f(dest);
        return 0;
}
