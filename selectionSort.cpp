/*Idea:
To remember : select minimum and swap them
source.Strivers 

lets say you have the following array : 13 46 24 52 20 9
procedure:
01.you have to find the minimum in the whole array and swap it with the first element .
now the array is like this -> 9 46 24 52 20 13 
02.now you have to select the minimum in 46 24 52 20 13 and swap it with 46 . 
03. this will goes on for 5 times . so 
for 6 elements you to swap 5 times . because the last elements remaining will be always sorted .*/




#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void swp(int &a , int &b){
    a = a+ b ;
    b = a- b ;
    a = a- b ;
}

void selectionSort(int a[] , int n){
 
    for( int i = 0 ; i < n-1 ;i++){
       int  min_indx = i ; 
        for( int j = i+1 ; j < n ; j++){
            if(a[j] < a[min_indx]){
                min_indx = j ; 
            }
        }
        if(min_indx != i){          //if min_indx == i , that means minimum number is at its right position,
                                    //no need to swapping
            swp(a[i] , a[min_indx]) ; 
            
        }
    }
}
int main(){

     int n ;cin >> n ;
    int array[n] ;
    for(int i = 0 ; i < n ; i++) cin >> array[i] ;
    selectionSort(array , n) ;
    for(int i = 0 ; i < n ; i++) cout << array[i] << " " ;
    
}
