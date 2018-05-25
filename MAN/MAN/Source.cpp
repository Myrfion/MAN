#include <iostream>
#include "Server.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	Server serv(5400);
	serv.start();
	system("pause");
	return 0;
}