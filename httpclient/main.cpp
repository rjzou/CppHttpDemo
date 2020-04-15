#include <iostream>
#include "http_client.h"
#include <unistd.h>

void handle_func(std::string rsp)
{
	// do sth according to rsp
	std::cout << "http rsp1: " << rsp << std::endl;
}

int main()
{
	// ƴ����url��������
	std::string url1 = "http://127.0.0.1:7999/api/hello";
	HttpClient::SendReq(url1, handle_func);
	
	sleep(1);
	std::string url2 = "http://127.0.0.1:7999/api/fun2";
	HttpClient::SendReq(url2, [](std::string rsp) { 
		std::cout << "http rsp2: " << rsp << std::endl; 
	});

	//system("pause");
	pause();

	return 0;
}