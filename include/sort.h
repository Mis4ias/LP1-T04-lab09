#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <cmath>
using namespace std;

template <typename T>
class Sort {
	public:
		Sort (vector<T>* vtr = nullptr): vtr_in(vtr){ }

		void insertionsort (vector<T> vtr){  
			size_t  j=0, x=0;  
			for (size_t i=2; i<=vtr.size(); i++){  
		    	x = vtr[i];
		    	j=i-1;
		    	vtr[0] = x; 
		   		while (x < vtr[j]){
		        	vtr[j+1] = vtr[j];
		        	j--;
		    	}
			    vtr[j+1] = x;
			}
		}
		void selectionSort (vector<T> vtr){  
		    size_t  min, x;
		    for (size_t i=1; i<=vtr.size()-1; i++){
		        min = i;
		    for (size_t j=i+1; j<=vtr.size(); j++){
		            if (vtr[j] < vtr[min])
		            	min = j;
		    }
		    x = vtr[min];
		    vtr[min] = vtr[i];
		    vtr[i] = x;
		    }
		}

		void quicksort(vector<T> vtr, size_t star, size_t end){  
		    size_t pivo ,star,ch;
		    pivo =vtr[(star+end)/2];         
		    for(size_t i=star+1;i<=end;i++){        
		        size_t j = i;                      
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
		    if(pivo-1 >= star){              
		        quick(vtr,star,pivo-1);      
		    }
		    if(pivo+1 <= end){              
		        quick(vtr,pivo+1,end);      
		    }
		}

		void mergeSort(vector<T> vtr, size_t star, size_t end) {  
		    size_t i, j, k, metadeTamanho; 
		    vector<T> vtrTemp;
		    if(star == end) return;
		    metadeTamanho = (star + end ) / 2;

		    mergeSort(vtr, star, metadeTamanho);
		    mergeSort(vtr, metadeTamanho + 1, end);

		    i = star;
		    j = metadeTamanho + 1;
		    k = 0;

		    while(i < metadeTamanho + 1 || j  < end + 1) {
		        if (i == metadeTamanho + 1 ) { 
		            vtrTemp[k] = vtr[j];
		            j++;
		            k++;
		        }
		        else {
		            if (j == end + 1) {
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
		    for(i = star; i <= end; i++) {
		        vtr[i] = vtrTemp[i - star];
		    }
		    free(vtrTemp);
		}
		void print_vector(vector<T> obj){
			for(size_t k = 0; k < obj.size(); k++){
				cout<<obj[k]<<" ";
			}
			cout<<endl;
		}

	private:
		vector<T> vtr_in;
};








