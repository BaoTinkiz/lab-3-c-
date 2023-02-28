#include<iostream>
using namespace std;

void sum(int* array, int length)
{
    int i, sum_of_array = 0;
    for (i = 0; i < length; i++)
        sum_of_array = sum_of_array + *(array + i);
    cout << "sum of array is = " << sum_of_array;
}

int main() {
   int a[10], i, n;
   int *ptr;
   cout<<"Nhap so phan tu mang : ";
   cin>>n;
   for (i = 0; i < n; i++) {
   		cout<<"Nhap a["<<i<<"]:";
      	cin >> a[i];
      	cout<<endl;
   }
   
   sum(a,n);
}

