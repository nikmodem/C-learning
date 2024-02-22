#include <stdio.h>

int main()
{
  int m=2;
    double massiv[m][m];
    
    for (int i=0; i<m; i++)
        for (int j=0; j<m; j++)
        {
            printf("massiv[%d][%d] = ", i+1, j+1);
            scanf("%lf", &massiv[i][j]);
        }
        printf("Matritca: ");
        for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%f  ", massiv[i][j]);
        }
        printf("\n");
    }
    int vozv_matrix[m][m];
    int i, j, k = 0, l;
  
    {
        for (i = 0; i < m; i++)
            for (j = 0; j < m; j++)
            {
                vozv_matrix[i][j] = 0;
                for (l = 0; l < m; l++)
                    vozv_matrix[i][j] += (massiv[i][l] * massiv[l][j]);
                
            }
    }
    for (i = 0; i<m; i++)
    {
        for (j = 0; j<m; j++)
        {
            printf("%d  ", vozv_matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
