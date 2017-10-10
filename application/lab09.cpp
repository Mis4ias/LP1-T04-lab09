#include "sort.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(int argc,char *argv[]){	
	vector<unsigned> input = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	Sort <unsigned> obj(&input);
	/*
	if(argv[1]=="--insertion"){
		
		obj.print_vtr(input);
		obj.insertion(input);
		obj.print_vtr(input);
	}
	if(argv[1]=="--selection"){
		obj.print_vtr(input);
		obj.selection(input);
		obj.print_vtr(input);
	}
	if(argv[1]=="--quick"){
		obj.print_vtr(input);
		obj.quick(input);
		obj.print_vtr(input);
	}
	if(argv[1]=="--merge"){
		obj.print_vtr(input);
		obj.merge(input);
		obj.print_vtr(input);
	}
*/
    return 0;
}

