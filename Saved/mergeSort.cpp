#include <bits/stdc++.h>
using namespace std;

int N = 5;
int array[N] = {4, 1, 3, 2, 5};

void merge_sort(int arr[], int kiri, int kanan){
	if(kiri == kanan) return; /* Jika array hanya memiliki satu elemen, langsung keluar dari fungsi */
	
	/*
	Membagi kedua array menjadi dua array sama besar lalu melakukan merge sort pada kedua subarray
	*/

	int tengah = (kiri + kanan) / 2;
	merge_sort(arr, kiri, tengah);
	merge_sort(arr, tengah + 1, kanan);

	/*
	Menggabungkan dua array terurut menjadi sebuah array terurut pada sebuah array gabungan yang bernama tmp
	*/	

	int idx1 = kiri;
	int idx2 = tengah + 1;

	int panjang = kiri - kanan + 1;
	int tmp[panjang];	

	for(int i = 0; i < panjang; i++){
		if(idx1 <= tengah && idx2 <= kanan){
			if(arr[idx1] < arr[idx2]){
				tmp[i] = arr[idx1];
				idx1++;	
			}else{
				tmp[i] = arr[idx2];
				idx2++;
			}
		}else if(idx1 <= tengah){
			tmp[i] = arr[idx1];
			idx1++;
		}else if(idx2 <= kanan){
			tmp[i] = arr[idx2];			
			idx2++;
		}			
	}

	/*
	Mengembalikan elemen yang telah terurut ke array aslinya
	*/

	for(int i = 0; i < panjang; i++){
		int ind = kiri + i;
		arr[ind] = tmp[i];
		
		
	}	
}

int main() {
	array = merge_sort(array, 0, N-1);
	
	for (int i = 0; i < N; i++) {
		cout << array[i];
	}
}

