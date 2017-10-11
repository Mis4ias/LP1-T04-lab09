#include "sort.h"
#include <iostream>
#include <vector>
#include <memory>
#include <string>
using namespace std;
int main(int argc, char *argv[]){
	string aux = argv[1];
	int myint;
	vector<unsigned> vtr;
	for (int i = 0; i < 10; ++i){
    	cin >> myint;
    	vtr.push_back (myint);
	}
	Sort<unsigned> objeto(&vtr);
		if(aux=="--insertion"){
			objeto.print_vector(vtr);
			objeto.insertionSort(vtr);
			objeto.print_vector(vtr);
		}
		if(aux=="--selection"){
			objeto.print_vector(vtr);
			objeto.selectionSort(vtr);
			objeto.print_vector(vtr);
		}
		if(aux=="--quick"){
			objeto.print_vector(vtr);
			objeto.quickSort(vtr,0,vtr.size()-1);
			objeto.print_vector(vtr);
		}
		/*if(aux=="--merge"){
			objeto.print_vector(vtr);
			objeto.mergeSort(vtr,0,vtr.size()-1);
			objeto.print_vector(vtr);
		}
	*/

	return EXIT_SUCCESS;
}