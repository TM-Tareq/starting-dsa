#include<stdio.h>

void seaching(int arr[], int size, int key) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == key);

        return 1;
    }

    return 0;
}


void findUnique(int arr[], int size) {
    int index = 0;
    int occurrence[index]; // array to store occurrence counts

    int count = 0;
    
    for(int i = 0; i < size; i++) {
        bool found = seaching(arr,size, arr[i]);

        if(found) {
            continue;
        }
        
        if(!found) {
            for(int j = 0; j < size; j++) {
                if(arr[j] == arr[i]) {
                    count++;
                    occurrence[index++] = count;
                }
            }
        }
    }

    return true;
}


// Input: arr = [1,2,2,1,1,3]
// Output: true

int main() {
    int size;
    scanf("%d", &size);

    int arr[size];

    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    findUnique(arr, size);

    printf("%d", findUnique);

    

}
// Same element XOR korle answer 0 ashe
// 0 er sathe kono element XOR korle bolle oi element paoa jae