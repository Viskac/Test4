#include <stdio.h>

void pyramid( int n );

int main()
{    
    int n;

    scanf("%d", &n);
    pyramid(n);

    return 0;
}
void pyramid(int n){
    //��n��
    for(int i=1;i<=n; i++){
        //ÿһ��

        //ǰ����ٸ��ո�
        for (int j = 0; j < n-i; j++) 
        {
            printf(" ");
        }

        //��ӡʵ������
        for (int k = 0; k < i ; k++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
}
//      1
//     2 2
//    3 3 3
//   4 4 4 4
//  5 5 5 5 5
// 6 6 6 6 6 6