#include <iostream>
using namespace std;

int find_terms(int arr[],int k,int res[]){
    for(int i=0; i < sizeof(arr); i++){
        for(int j = i+1;j < sizeof(arr); j++){
            if(arr[i]+arr[j]== k) {
                res[0] = arr[i];
                res[1] = arr[j];
                return 0;
            }
        }
    }
    return -1;
}