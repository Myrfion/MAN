#pragma comment(lib, "ws2_32.lib")
#pragma warning(disable: 4996)
#include <iostream>
#include <WinSock2.h>
#include <winsock.h>

using namespace std;
class Client {
	int Port;
	SOCKET s;
};

class Server {
	int Port;
	SOCKET s;
public:
	Server(int aPort) : Port{aPort}{}
	bool add();
	bool start();
	bool stop();
};
