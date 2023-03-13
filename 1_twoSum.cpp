#include<stdio.h>
void twoSum(int nums[], int numsSize, int target, int returnSize){
    bool nextFlg = false;
    for (int i = 0; i < numsSize - 1; i++) {
        if (target >= nums[i]) {
            int subtract = target - nums[i];
            for (int j = i + 1; j < numsSize; j++) {
                if (subtract == nums[j]) {
                	nextFlg = true;
                    printf("[%d,", i);
                    printf("%d]", j, "\n");
                    continue;
                }
            }
            if (nextFlg) {
            	nextFlg = false;
            	continue;
			}
        }
    }
}

int main() {
    int a[] = {2, 4, 4, 5, 9, 12};
    twoSum(a, 6, 13, 2);
}
