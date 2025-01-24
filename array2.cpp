
//Second Largest Element in an Array without sorting
#include <iostream>
using namespace std;
int main(){
int arr[]={1,9,6,3,7,5,8,6};
    int Large=arr[0];
int SeondLarge=-1;
    for(int i=1;i<8;i++){
        if(arr[i]>Large){
            SeondLarge=Large;
            Large=arr[i];
            
    }

cout<<"Second Largest elemnt "<<endl<<SecondLarge;
    return 0;
}
