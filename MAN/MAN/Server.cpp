#include "includes.h"
#include "Server.h"


bool Server::start() {

	WSADATA wsData;
	if (!WSAStartup(MAKEWORD(2, 2), &wsData)) {
		return 0;
	}

	this->sListening = socket(AF_INET, SOCK_STREAM, 0);
	if (this->sListening == INVALID_SOCKET) return 0;

	this->saddrListening.sin_family = AF_INET;
	this->saddrListening.sin_port = htons(5400);
	this->saddrListening.sin_addr.S_un.S_addr = INADDR_ANY;

	bind(this->sListening, (sockaddr*)&this->saddrListening, sizeof(this->saddrListening));

	listen(this->sListening, SOMAXCONN);

	return 1;
}