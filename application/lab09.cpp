#include "sort.h"
#include <iostream>
#include <vector>
#include <memory>
#include <string>
#include <sstream>
using namespace std;
int main(int argc, char *argv[]){
	string aux = argv[1]; string fluxo;
	stringstream ss;
	int myint; int *vtr_merge;
	vector<unsigned> vtr;


	if(aux=="--insertion"){
		getline(cin,fluxo);
		ss<<fluxo;
	
		while(ss>>myint){
			vtr.push_back(myint);
		}

		Sort<unsigned> objeto(&vtr);
		objeto.print_vector(vtr);
		objeto.insertionSort(vtr);
		objeto.print_vector(vtr);
	}
	if(aux=="--selection"){
		getline(cin,fluxo);
		ss<<fluxo;
	
		while(ss>>myint){
			vtr.push_back(myint);
		}
		
		Sort<unsigned> objeto(&vtr);
		objeto.print_vector(vtr);
		objeto.selectionSort(vtr);
		objeto.print_vector(vtr);
	}
	if(aux=="--quick"){
		getline(cin,fluxo);
		ss<<fluxo;
	
		while(ss>>myint){
			vtr.push_back(myint);
		}
		
		Sort<unsigned> objeto(&vtr);
		objeto.print_vector(vtr);
		objeto.quickSort(vtr,0,vtr.size()-1);
		objeto.print_vector(vtr);
	}



	return EXIT_SUCCESS;
}