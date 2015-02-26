/* Copyright 2014, Charlie Fyvie-Gauld
*  Distributed under the MIT License (http://opensource.org/licenses/MIT)
*/
#include <iostream>

int main(int argc, char *argv[]) {
	std::string type;
	for(int i = 1; i < argc; i++) {
		type += std::string(argv[i]);
		if(i < argc-1)
			type += " ";
	}

	int bytes = 0;

	if(type == "bool")
		bytes = sizeof(bool);
	else
	if(type == "char")
		bytes = sizeof(char);
	else
	if(type == "int")
		bytes = sizeof(int);
	else
	if(type == "short" || type == "short int")
		bytes = sizeof(short);
	else
	if(type == "float" || type == "float int")
		bytes = sizeof(float);
	else
	if(type == "double" || type == "double int")
		bytes = sizeof(double);
	else
	if(type == "long" || type == "long int")
		bytes = sizeof(long);
	else
	if(type == "void")
		bytes = sizeof(void);
	else
	if(type == "wchar_t")
		bytes = sizeof(wchar_t);
	else
	if(type == "size_t")
		bytes = sizeof(size_t);
	else
	if(type == "long long")
		bytes = sizeof(long long);
	else
	if(type == "long double")
		bytes = sizeof(long double);
	else
	if(type == "bool*")
		bytes = sizeof(bool*);
	else
	if(type == "char*")
		bytes = sizeof(char*);
	else
	if(type == "int*")
		bytes = sizeof(int*);
	else
	if(type == "short*")
		bytes = sizeof(short*);
	else
	if(type == "float*")
		bytes = sizeof(float*);
	else
	if(type == "double*")
		bytes = sizeof(double*);
	else
	if(type == "long*")
		bytes = sizeof(long*);
	else
	if(type == "void*")
		bytes = sizeof(void*);
	else
	if(type == "wchar_t*")
		bytes = sizeof(wchar_t*);
	else
	if(type == "size_t*")
		bytes = sizeof(size_t*);
	else
	if(type == "long long*")
		bytes = sizeof(long long*);
	else
	if(type == "long double*")
		bytes = sizeof(long double*);

	std::cout << type << ": ";
	std::cout << bytes;
	std::cout << " bytes (" << (bytes<<3) << " bit)" << std::endl;
}
