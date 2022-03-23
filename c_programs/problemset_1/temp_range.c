/*
Enter the temperature and predict the material if in 5% of the expected 
temp of that material
*/
#include "stdio.h"

int main(){
    int obs_temp;
    scanf("%d",&obs_temp);
    float water_temp_range=0.05*100;
    float hg_temp_range=0.05*357;
    float cu_temp_range=0.05*1187;
    float ag_temp_range=0.05*2193;
    float au_temp_range=0.05*2660;
    
    if(obs_temp>=(100-water_temp_range)&&obs_temp<=(100+water_temp_range)){
        printf("Water");
    }
    else if(obs_temp>=(357-hg_temp_range)&&obs_temp<=(357+hg_temp_range)){
        printf("Mercury");
    }   
    else if(obs_temp>=(1187-cu_temp_range)&&obs_temp<=(1187+cu_temp_range)){
        printf("Copper");
    }
    else if(obs_temp>=(2193-ag_temp_range)&&obs_temp<=(2193+ag_temp_range)){
        printf("Silver");
    }
    else if(obs_temp>=(2660-au_temp_range)&&obs_temp<=(2660+au_temp_range)){
        printf("Gold");
    }
    else{
        printf("Substance unknown");
    }
}