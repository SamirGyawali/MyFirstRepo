// to print array with sorted strings

#include<bits/stdc++.h>
using namespace std;

string arr_str[] = {"samir", "gyawali", "algorithm", "sorted", "string"};
int arr_size = 5;
string copy_sorted[][50] = {0}; // array with sorted string {"aimrs", "aagilwy", ....}
char sorted_string[] = {0}; //each sorted string

string sort(string text, int size){
	int hasharr[25] = {0};
	int index;
	for(int i=0; i<size; i++){
		index = text[i] - 'a';
		hasharr[index] = hasharr[index]+1;
	}
	for(int i=0; i<25; ++i){
		for(int j=0; j<hasharr[i]; ++j){
			sorted_string[i] = char(i+'a');
			cout<<char(i+'a');
		}
	}
	return sorted_string;
}

int main(){
	for(int i=0; i<arr_size; ++i){
		int size = sizeof(arr_str[i])/sizeof(char);
		copy_sorted[i] = sort(arr_str[i], size);
		cout<<copy_sorted[i];
	}
	for(int i=0; i<arr_size; ++i){
		cout<<copy_sorted[i];
	}
	// sort("samir", 5);
	return 0;
}