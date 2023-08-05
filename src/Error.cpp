#include "Error.hpp"
#include <Windows.h>

using namespace mebius;

/*
* [[noreturn]]属性を付けたいが何故かC3829のエラーが発生するため、付けられない。
* [[noreturn]]属性がC互換のない構文であること、及び、extern "C"が付いていることが原因？
*/
void mebius::ShowErrorDialog(const char* message) {
	MessageBoxA(NULL, message, "Error by Mebius", MB_OK | MB_ICONERROR);
	exit(1);
}