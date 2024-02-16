// CleanDesktop.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <windows.h>
using namespace std;

int main(int argc, char* argv[]) {
	//HKEY hKey_doge = HKEY_CURRENT_USER;
	//LPCTSTR regpath = "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\User Shell Folders";
	if (argc>1) {
		system("reg add \"HKEY_CURRENT_USER\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\User Shell Folders\" -v Desktop -t REG_EXPAND_SZ -d \"%USERPROFILE%\\Desktop\" -f");
		cout << "鹅鹅鹅";
	}
	else {
		system("reg add \"HKEY_CURRENT_USER\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\User Shell Folders\" -v Desktop -t REG_EXPAND_SZ -d \"%WINDIR%\\System32\" -f");
		cout << "不会有逝的。";
	}
	system("taskkill -im explorer.exe -f&&start explorer");
	system("pause>nul");
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
