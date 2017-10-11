#include <vector>
#include <memory>
#include <iostream>
using namespace std;
template <typename T>
class Sort{
	public:
		Sort(vector<T>* _ref = nullptr): ref_database(_ref) {	}
		void print_vector(vector<T> obj){
			for(size_t k = 0; k < obj.size(); k++){
				cout<<obj[k]<<" ";
			}
		cout<<endl;
		}
		
		void selectionSort(vector<T> &obj){
			T min, temp;
			for(size_t i=0;i<obj.size()-1;i++){
				min = i;
				for(size_t j=i+1;j<obj.size();j++){
					if(obj[j] < obj[min]){
						min = j;
					}
						
				}
				if(min != i){	
					temp = obj[i];
					obj[i] = obj[min];
					obj[min] = temp;
				}	
			}
		}
	
		void insertionSort(vector<T> &obj) {

		    for (int i = 1; i < obj.size(); i++) {
				int escolhido = obj[i];
				int j = i - 1;
				
				while ((j >= 0) && (obj[j] > escolhido)) {
					obj[j + 1] = obj[j];
					j--;
				}
				
				obj[j + 1] = escolhido;
			}
		}
		void quickSort(vector<T> &obj, size_t left, size_t right) {
		    size_t i = left, j = right;
		    size_t tmp;
		    size_t pivot = obj[(left + right) / 2];
		
		    while (i <= j) {
		        while (obj[i] < pivot)
		            i++;
		        while (obj[j] > pivot)
		            j--;
		        if (i <= j) {
		                tmp = obj[i];
		                obj[i] = obj[j];
		                obj[j] = tmp;
		                i++;
		                j--;
		            }
		 
		     
		    if (left < j)
		        quickSort(obj, left, j);
		    if (i < right)
		        quickSort(obj, i, right);
			}
		}


	private:
		vector<T> * ref_database;
};