#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

//inserting an element in an sorted array in a sorted position
//shift all the element which is larger than number n

//if not sorted than you have to check i th element if they are smaller than e i th number
//for a sorted or nearly sorted array this sorting is most effective ; time complexity : O(n)
// worst time complexity :O(n) 
//for this , you have to assume the the right portions elements are sorted and start traversing from i = 1 th element
// and check with the left side(i - 1) of the array

void swp(int &a , int &b){
    a = a+ b ;
    b = a- b ;
    a = a- b ;
}

void insertionSort(int a[] , int n) {

    int i , j , data ; 
    for(i = 1 ; i < n ; i++){
        //assigning a[i] to a variable called data 
        data = a[i] ;
        j = i - 1 ;
        while(j >= 0 && a[j] > data){
                a[j+1] = a[j] ;  
                j-- ;

        }
        a[j+1] = data ; 
    }
}
int main(){

    int n ;cin >> n ;
    int a[n] ;
    for(int i = 0 ; i < n ; i++) cin >> a[i] ;
    insertionSort(a , n) ;
    for(int i = 0 ; i < n ; i++) cout << a[i] << " " ;
    
}
