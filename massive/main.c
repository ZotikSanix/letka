#include <stdio.h>
#include <math.h>
#include <assert.h>

void MoveData(int *data, int size);

int main(){
    int i = 0;
    int data[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(data)/sizeof(data[0]);

    MoveData(data, size);

    while (i < size-1){
        printf("%d = %d\n", i, data[i]);
        i++;
    }

    return 0;
}

void MoveData(int *data, int size){
    for (int i = 0; i < (size - 1); i++){
        assert (0 <= i && i < size);
        assert (0 <= i+1 && i +1 < size);

        data[i] = data[i+1];
    }
}
