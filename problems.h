#include <vector>
using namespace std;

void delete11(vector<int> &v){    v.erase(remove_if(v.begin(), v.end(), [](int x) { return x % 11 == 0; }), v.end());}

void insertMany ( vector < int > &v , int a , int b ) {
  
}

int* allocateAndSet(int a, int b){
  
  return arr;
}
void deallocate(int* arr) {
    
}
int*reallocate(int *arr, int N, int n) {
    
    
    return ;
}



int **transposed(int **arr, int n, int m) {
    int **newArr = new int*[m];
    
    
    return newArr;
}
void deallocateMatrix(int**& matrix, int rows) {
    
}
