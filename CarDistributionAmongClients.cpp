#include <stdio.h>

using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int arr[4];
    for(int i=0; i<4; i++){
        arr[i]=0;
    }

    for(int i=0; i<n; i++){
        int num;
        scanf("%d", &num);
        arr[num-1]++;
    }
    int groups = 0;
    int oneGroup = arr[0], twoGroup = arr[1], threeGroup =arr[2], fourGroup = arr[3];
    groups +=fourGroup;
    if(threeGroup >= oneGroup){
        groups += threeGroup;
        oneGroup = 0;
    }
    else {
        groups +=threeGroup;
        oneGroup -= threeGroup;
    }
    if(twoGroup % 2 == 0){
        groups += twoGroup / 2;
    }
    else {
        if(twoGroup !=1){
            groups += (twoGroup - 1)/2;
            twoGroup = 1;
        }
    }
    if(twoGroup == 1){
        if(oneGroup >= 2){
            groups +=1;
            oneGroup -=2;
        }
        else {
            groups +=1;
            oneGroup =0;
        }
    }
    if(oneGroup % 4 > 0){
        groups += oneGroup/4 + 1;
    }
    else {
        groups += oneGroup/4;
    }
    printf("%d", groups);
    return 0;
}