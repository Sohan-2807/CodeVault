#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter Size of Square matrix: ";
    cin>>n;
    int arr[n][n];
    int sum = 0;
    // cout<<"\nEnter array of "<<n*n<< " Elements: ";

    for(int i = 0;i<n;i++){
        for(int j = 0 ;j<n;j++){
            cin>>arr[i][j];
        }
    }
    // cout<<"\nEntered Array of "<<n<<" by "<<n<<" Array is: "<<endl;

    for(int i = 0;i<n;i++){
        for(int j = 0 ;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    
    for(int i = 0;i<n;i++){
        for(int j = 0 ;j<n;j++){
            if(i==j){
                sum += arr[i][j];
            }
            else continue;
        }
    }

    cout<<"\nSum of Diagonal elements is: "<<sum;


}