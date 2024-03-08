#include <iostream>

int main() {
    int n;
    std::cin>>n;
    int x = 1;
    int y = 1;
    int a[10*10*10*10 + 1] = {0};
    int arr[n];
    for (int i = 0; i < n; ++i) {
        std::cin>>arr[i];
    }
    for (int i = 0; i < n; ++i) {
        if (arr[i] > x){
            x = arr[i];
        }
        a[arr[i]]++;
    }
    for (int i = 0; i < n; ++i) {
        int element = arr[i];
        if (x%element==0){
            if (a[element]>1 and element>y){
                y = element;
            }
        } else{
            if (element>y){
                y=element;
            }
        }
    }
    std::cout<<x<<" "<<y;
    return 0;
}
