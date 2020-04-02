#include <iostream>
#include <cstdlib>	//for exit
#include <Windows.h>
#include <tchar.h>
#pragma comment (lib, "Urlmon.lib")
#include "get.h"
//#ifdef _UNICODE 
//#define TEXT(c) L##c
//#else 
//#define TEXT(c) c
//#endif
using namespace std;

//int _tmain(int argc, _TCHAR* argv[])
int main(int argc, char* argv[])
{
	//if (argc == 1)
	//{
	//	std::cerr << "Usage: " << argv[0] << " filename\n";
	//	exit(EXIT_FAILURE);
	//}

	//_TCHAR name[] = { "https://lenta.ru/news/2020/04/02/metro/" };
	//TCHAR name[] = { argv[1] };
	HRESULT hr = URLDownloadToFileA(NULL, argv[1], "rese.txt", 0, NULL);

	if (SUCCEEDED(hr))
	{

	}

	//std::cout << name;
	cout << _T("There are ") << argc << _T(" arguments:") << endl;


	cin.get();
	return 0;
}