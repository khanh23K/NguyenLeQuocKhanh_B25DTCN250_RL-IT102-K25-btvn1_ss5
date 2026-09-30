#include <stdio.h>
int main(){
    int queue_numbers[4] = {1001, 1002, 1003, 1004};
 
    int patient_position = ; 
    int new_queue_number = 1099;
	// Cap nhat ma so thu tu
    // Vi tri benh nhan bat dau tu 1,
    // trong khi index cua mang bat dau tu 0
    queue_numbers[patient_position - 1 ] = new_queue_number;
 
    printf("--- DANH SACH SO THU TU KHAM BENH ---\n");
    printf("Benh nhan 1 (Index 0): %d\n", queue_numbers[0]);
    printf("Benh nhan 2 (Index 1): %d\n", queue_numbers[1]);
    printf("Benh nhan 3 (Index 2): %d\n", queue_numbers[2]);
    printf("Benh nhan 4 (Index 3): %d\n", queue_numbers[3]);
 
    return 0;
}

