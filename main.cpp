#define SIZE 1000
#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;
/*
void BubbleSort(int a[], int len)
{
    for(int i = 0; i < len - 1; i++){
        for(int j = 0; j < len - i - 1; j++){
            if(a[j] > a[j+1]){
                swap(a[j], a[j+1]);
            }
        }
    }
}
*/
int main(void){
  char *pa, *pb, temp;
  char a[SIZE];

    cout<<"Input string : ";
    cin>>a;
  int len = strlen(a);
  pa = &a[0];
  
  cout<< "Original: ";
  for (int i = 0; i < len; i++, pa++){
    cout<<setw(3)<<*pa<<"  ";
  }
  cout<<endl;

    pa = &a[0]; pb = &a[len - 1];
    cout<<"Reverse: ";
    for (int i = 0; i < len / 2; i++) {
        temp = *pa;
        *pa = *pb;
        *pb = temp;
        pa++; pb--;
    }

    pa = &a[0];
    for (int i = 0; i < len; i++,pa++){
        cout<<setw(3)<<*pa<<"  ";
    }
  cout<<endl;

return 0;
}