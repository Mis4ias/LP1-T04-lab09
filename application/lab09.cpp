#include "sort.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(int argc,char argv*[]){	
	vector<unsigned> input;
	if(argv[1]=="--insertion"){
		getline(cin,input);
		Sort <unsigned> obj(&input);
		obj.print_vtr(input);
		obj.insertion(input);
		obj.print_vtr(input);
	}
	if(argv[1]=="--selection"){
		getline(cin,input);
		Sort <unsigned> obj(&input);
		obj.print_vtr(input);
		obj.selection(input);
		obj.print_vtr(input);
	}
	if(argv[1]=="--quick"){
		getline(cin,input);
		Sort <unsigned> obj(&input);
		obj.print_vtr(input);
		obj.quick(input);
		obj.print_vtr(input);
	}
	if(argv[1]=="--merge"){
		getline(cin,input);
		Sort <unsigned> obj(&input);
		obj.print_vtr(input);
		obj.merge(input);
		obj.print_vtr(input);
	}

    return 0;
}

