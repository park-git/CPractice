#include <stdio.h>
#include <stdlib.h>
#include <string.h>


double bubble_sort(double *arr, int num_elements);

double swap(double *pele);

int main(){
    
    double math[5] =    {5,4,2,3,1};
    double korean[5] =  {5,4,2,3,1};
    double eng[5] =     {5,4,2,3,1};
    
    double avr[5];
    
    double *pavr = NULL;
    
    for(int i = 0; i<5; i++ ){
        avr[i] = (math[i] + korean[i] + eng[i]);
        avr[i] = (avr[i]/3);
    }
    
    pavr = avr;
    
    bubble_sort(pavr, 5);
    
    for(int i=0; i<5; i++)
        printf("%f\n", avr[i]);
    
    return 0;
}

double bubble_sort(double *arr, int num_elements){
    
    int i,j;
    
    for(i=0; i<num_elements; i++){
        for(j=0; j<num_elements-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr+j);
            }
        }
        for(int k =0 ; k<5; k++){
            printf("%f\n",arr[k]);
        }
        printf("\n");
    }
    
    return 0;
}

double swap(double *pele){
    
    double tmp;
    
    tmp = *pele;
    *pele = *(pele+1);
    *(pele+1) = tmp;
    
    return 0;
}
