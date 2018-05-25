#include "includes.h"

using namespace std;
class Client {
	int Port;
	SOCKET s;
};

class Server {
	int Port;
	SOCKET sListening;
	sockaddr_in saddrListening;
public:
	Server(int aPort) : Port{aPort}{}
	bool add();
	bool start();
	bool stop();
};
