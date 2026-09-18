#include<iostream>
using namespace std;

int main(){
    int count = 7;
    int arr[7] = {1, 3, 2, 3, 2, 2, 4};
    
    // Use count instead of hardcoded 6 and 7
    for(int i = 0; i < count - 1; i++){
        for(int j = i + 1; j < count; j++){
            if(arr[i] == arr[j]){
                // Shift elements to the left
                for(int k = j; k < count - 1; k++){
                    arr[k] = arr[k+1];
                }
                count--; // Reduce the logical size of the array
                j--;     // Decrement j so we don't skip the newly shifted element
            }
        }
    }
    
    // Print the unique elements
    for(int i = 0; i < count; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
