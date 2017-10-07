#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <cmath>
using namespace std;


class Sort {
	public:
		vector<int> vtr;
};


class InsertionSort : public Sort<int> {
	public:
		void insercao (vector<int> vtr){  
			int  j=0, x=0;  
			for (int i=2; i<=vtr.size(); i++){  
		    	x = vtr[i];
		    	j=i-1;
		    	vtr[0] = x; 
		   		while (x < vtr[j]){
		        	vtr[j+1] = vtr[j];
		        	j--;
		    	}
			    vtr[j+1] = x;
			}
};


class SelectionSort : public Sort<int> {
 	public:
		void selecao (vector<int> vtr){  
		    int i, j, min, x;
		    for (int i=1; i<=vtr.size()-1; i++){
		        min = i;
		    for (int j=i+1; j<=vtr.size(); j++){
		            if (vtr[j] < vtr[min])
		            	min = j;
		    }
		    x = vtr[min];
		    vtr[min] = vtr[i];
		    vtr[i] = x;
		    }
		}
};


class QuickSort : public Sort<int> {

  	public:
		void quick(vector<int> vtr, int ini, int fim){  
		    int pivo ,ini,ch;
		    pivo =vtr[(ini+fim)/2];         
		    for(int i=ini+1;i<=fim;i++){        
		        int j = i;                      
		        if(vtr[j] < vtr[pivo]){     
		            ch = vtr[j];               
		            while(j > pivo){           
		                vtr[j] = vtr[j-1];      
		                j--;                    
		            }
		            vtr[j] = ch;               
		            pivo++;                    
		        }
		    }
		    if(pivo-1 >= ini){              
		        quick(vtr,ini,pivo-1);      
		    }
		    if(pivo+1 <= fim){              
		        quick(vtr,pivo+1,fim);      
		    }
		 }

class MergeSort : public Sort<int> {

  	public:
		void mergeSort(vector<int> vtr, int ini, int fim) {  
		    int i, j, k, metadeTamanho; 
		    vector<T> vtrTemp;
		    if(ini == fim) return;
		    metadeTamanho = (ini + fim ) / 2;

		    mergeSort(vtr, ini, metadeTamanho);
		    mergeSort(vtr, metadeTamanho + 1, fim);

		    i = ini;
		    j = metadeTamanho + 1;
		    k = 0;

		    while(i < metadeTamanho + 1 || j  < fim + 1) {
		        if (i == metadeTamanho + 1 ) { 
		            vtrTemp[k] = vtr[j];
		            j++;
		            k++;
		        }
		        else {
		            if (j == fim + 1) {
		                vtrTemp[k] = vtr[i];
		                i++;
		                k++;
		            }
		            else {
		                if (vtr[i] < vtr[j]) {
		                    vtrTemp[k] = vtr[i];
		                    i++;
		                    k++;
		                }
		                else {
		                    vtrTemp[k] = vtr[j];
		                    j++;
		                    k++;
		                }
		            }
		        }

		    }
		    for(i = ini; i <= fim; i++) {
		        vtr[i] = vtrTemp[i - ini];
		    }
		    free(vtrTemp);
		}
};

