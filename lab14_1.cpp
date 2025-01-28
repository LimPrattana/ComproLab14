#include <iostream>
using namespace std;

/*template <typename T>
void insertionSort(T d[],int N){
	for(int end=N;end>1;end--){
		cout<<"Pass "<<N-end+1<<":";
		for(int i=0;i<N-1;i++){
			for(int k=0;k<i-1;k++){
				if(d[k]<d[k+1]) {
				T temp = d[k];
				d[k]=d[k+1];
				d[k+1]=temp;
				}
			}
			
	}
	for(int j=0;j<N;j++){
			cout<<d[j]<<" ";
		}
	cout<<endl;
	}
}*/
template <typename T>
void insertionSort(T d[],int N){
	 for(int i=1;i<N;i++){
		T s =d[i];
		
		int j = i-1;
		while(j>=0&&d[j]<s)
		{
			d[j+1]=d[j];
			j--;
		}
		d[j+1]=s;
		cout<<"Pass "<<i<<":";
		for(int k=0;k<N;k++){
			cout<<d[k]<<" ";
		}
	cout<<endl;
		
	 }
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
