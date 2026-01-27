#include<iostream>
using namespace std;

int maxfind(int arr[], int size){
int max =INT16_MIN;
int min = INT16_MAX;

for(int j =0;j<size;j++){ 
  if(max<arr[j]){
    max=arr[j];
  }
return max;
}
}
int main(){

// star pattern
// for(int i=1;i<=6;i++){
//     for(int j=0;j<i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

// this is pattern to print aa bb  ccc dddd
// int n;
// cin>>n;
//   char ch = 'A';
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<ch;
//     }
//     cout<<endl;
//     ch++;
// }



// this is pattern to print a ab abc abcd
  //char ch = 'A';
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<ch++;
//     }
//     cout<<endl;
//     
// }


//square pattern
// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//         cout<<"*";
//     }
//     cout<<endl;
 
//    }


// int n;
// cout<<"give input  ";
// cin>>n;
//  int no =6;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<no<<" ";
//         no++;
//     }
//     cout<<endl;

//    }

int size;
cout<<"enter size of array";
cin>>size;
int arr[size];

for(int i =0;i<size;i++){
  cin>>arr[i];
}
int sum =0;
int max =INT16_MIN;
int min = INT16_MAX;

for(int j =0;j<size;j++){
  sum+=arr[j];
  if(max<arr[j]){
    max=arr[j];
  }
  if(min>arr[j]){
    min=arr[j];
  }

}
cout<<"sum is "<<sum<<endl;
int a=maxfind(arr,size);
cout<<"max no. is "<<a<<endl;
cout<<"min no. is"<<min<<endl;

  
      return 0;
}