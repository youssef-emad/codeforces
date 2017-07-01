#include <iostream>

using namespace std;

int count_books(int* books, int* sum_array, int original_start, int start,int end, int limit){
	int diff = sum_array[end] - sum_array[original_start] + books[original_start];
    int diff_previous = sum_array[end - 1] - sum_array[original_start] + books[original_start];
    if ((start ==  end && diff < limit) || diff == limit){
    	return end - original_start + 1;
    }else if (diff > limit && diff_previous <= limit){
    	return end - original_start;
    }else if (start == end && diff > limit){
    	return 0;
    }else{
    	int mid = (start + end)/2;
    	int diff_mid = sum_array[mid] - sum_array[original_start] + books[original_start];
    	if (diff_mid == limit){
    		return mid - original_start + 1;
    	}
    	else if (diff_mid > limit){
    		return count_books(books,sum_array,original_start,start,mid,limit);
        }else{
            return count_books(books,sum_array,original_start,mid + 1,end,limit);
    	}
    }
}
int main(){
	int n,t;
	cin>>n>>t;
	int* books = new int [n];
	int* sum_array = new int[n];
	int count,max = 0;
	cin>>books[0];
	sum_array[0] =  books[0];
	for (int i=1;i<n;i++){
		cin>>books[i];
		sum_array[i] = books[i] + sum_array[i - 1];
	}
	for (int i = 0;i<n;i++){
		count = count_books(books,sum_array,i,i,n - 1,t);
		if (count > max){
			max = count;
		}
	}
	cout<<max;
	return 0;
}