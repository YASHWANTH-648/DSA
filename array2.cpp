
//Second Largest Element in an Array without sorting
#include <iostream>
using namespace std;
int main(){
int arr[]={1,9,6,3,7,5,8,6};
    int Large=arr[0];
 for (int i = 1; i < 5; i++){
if (arr[i]>Large){
    Large=arr[i];
}}
int SecondLarge=-1;
for (int  i = 0; i < 5; i++){
    if (arr[i]>SecondLarge && arr[i]!=Large){
        SecondLarge=arr[i];
    }
}
cout<<"Second Largest elemnt "<<endl<<SecondLarge;
    return 0;
}