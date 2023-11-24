#include <stdio.h>
int main(){
    int i =+ 1;
    if(i <= 25){
        for(i = 1; 3*i <= 25;i++){
            printf("%d\n", 3*i);
        }
    }
    if(3*i <= 50){
        while(3*i <= 50){
            printf("%d\n", 3*i);
            i++;
        }
    }
    else{
        printf("表示できない\n");
    }
    return 0;
}