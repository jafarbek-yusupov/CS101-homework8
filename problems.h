#include <vector>
#include <algorithm>
using namespace std;

void delete11(vector<int> &v){    
    v.erase(remove_if(v.begin(), v.end(), [](int x){ return x % 11 == 0; }), v.end());
}

void insertMany(vector<int> &v, int x, int y) {
    int md;
    for (int i = 0; i < y; ++i) {
        md = (v.size()%2==0) ? (v.size()/2) : (v.size()/2)+1;
        v.insert(v.begin()+md, x);
    }
}

int* allocateAndSet(int a, int b) {
    if (a > b){ return nullptr;}
    int* arr = new int[b-a+1];
    for (int i = 0; i < b-a+1; ++i){ 
        arr[i] = a + i;
    }
    return arr;
}

void deallocate(int* &arr) {
    delete[] arr;
    arr = nullptr;
}

int* reallocate(int* arr, int N, int n) {
    int* nar = new int[N-n];
    for(int i = 0; i < N-n; ++i){  
        *(nar+i) = *(arr + n + i);
    }
    delete[] arr;   
    return nar;
}

int** transposed(int** arr, int n, int m) {
    int** newArr = new int*[m];
    for (int i = 0; i < m; ++i){
        newArr[i] = new int[n];
    }
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            *(*(newArr+j)+i) = *(*(arr + i) + j);
        }
    }
    return newArr;
}

void deallocateMatrix(int**& matrix, int rows) {
    for (int i = 0; i < rows; ++i){  
        delete[] matrix[i];
    }
    delete[] matrix;  
    matrix = nullptr;
}
