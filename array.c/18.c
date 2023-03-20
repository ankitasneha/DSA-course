#include<stdio.h>

int main(int argc, char const *argv[])
{
   
    int a[6][6]={
        {0,0,1,0,0,0},
        {0,0,1,0,0,0},
        {1,1,1,0,0,0},
        {1,0,0,1,1,1},
        {1,1,1,1,0,1},
        {0,0,0,0,1,1}
    };
    int si=0,sj=2,di=5,dj=4;
    while(1){
        if(si==di && sj==dj){
            printf("Done!\n");break;
            }
            printf("(%d,%d)",si,sj);
        if(si-1>=0 && a[si-1][sj]==1)
        {
            a[si][sj]=-1;
            si--;

        }
        
        else if(si+1<6 && a[si+1][sj]==1)
        {
            a[si][sj]=-1;
            si++;
            
        }
        else if(sj-1>=0 && a[si][sj-1]==1)
        {
            a[si][sj]=-1;
            sj--;
            
        }
        else if(sj+1<6 && a[si][sj+1]==1)
        {
            a[si][sj]=-1;
            sj++;
            
        }
    }
    
    return 0;
}
