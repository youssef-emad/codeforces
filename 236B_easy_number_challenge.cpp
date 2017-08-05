#include <iostream>
#include <map>
#include <math.h>
using namespace std;

const int primes[25] = {2, 3, 5, 7, 11, 13, 17, 19, 23,
	 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

bool is_prime(long long number){
	for (int i = 0; i < 25; i++){
		if (number == primes[i])
			return true;
	}
	return false;
}
long long d(long long number){
	long long numberOfDivisors = 1;
	for (int i = 2; i <= number; i++)
	{
		long long exponent = 0;
		while (number % i == 0) {
		    exponent++; 
		    number /= i;
		}   
		numberOfDivisors *= (exponent+1);
	}
	return numberOfDivisors;
}
int main(){
	long long a, b, c;
	map <long long, long long> database;
	cin>>a>>b>>c;
	long count = 0;
	for(int i = 1; i <= a; i++){
		for (int j = 1; j<= b; j++){
			for (int k = 1; k<= c; k++){
				long long number = i * j * k;
				if  (database[number] == 0){
					database[number] = d(number) ;
				}
				count += database[number];			}
		}
	}
	cout<<count%1073741824<<endl;
	return 0;
}