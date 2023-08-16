#include <bits/stdc++.h>
using namespace std;

class heap
{
private:
    int arr[1000];
    int size;

public:

    heap(){
        arr[0] = -1;
        size = 0;
    }

    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
            int parent = index / 2;

            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    void print()
    {
        for (int i = 1; i <=size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void deleteNode(){
        if(size == 0){return;}

        arr[1] == arr[size];
        size--;

        int i = 1;
        while(i<size){
            int left = 2*i;
            int right = 2*i+1;

            if(left < size && arr[i] < arr[left] ){
                swap(arr[i],arr[left]);
                i = left;
            }else if (right < size && arr[i] < arr[right]){
                swap(arr[i],arr[right]);
                i = right;
            }else{
                return;
            }
        }
    }

};


void heapify(int arr[],int n,int i){

    int largest = i;
    int left = 2*i;
    int right = 2*i+1;

    if(left < n && arr[largest] < arr[left]){
        largest = left;
    }

    if(right < n && arr[largest] < arr[right]){
        largest = right;
    }

    if(largest != i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
    return;
}


int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.insert(100);
    h.insert(90);

    // h.print();

    int arr[6] = {-1,54,53,55,52,50};
    int n = 5;

    cout<<"print arr"<<endl;
    for(int i = 1; i<=n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    for(int i = n/2 ; i > 0 ; i--){
        heapify(arr,n,i);
    }

    cout<<"print arr"<<endl;
    for(int i = 1; i<=n ;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}