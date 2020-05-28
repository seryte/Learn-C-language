#include <stdio.h>


int main() 
{
    /*C99为类型大小提供zd转换说明*/
    printf("Type 【int】 has a size of %zd bytes.\n",sizeof(int));
    printf("Type 【long long int】 has a size of %zd bytes.\n",sizeof(long long int));
    printf("Type 【char】 has a size of %zd bytes.\n",sizeof(char));
    printf("Type 【long】 has a size of %zd bytes.\n",sizeof(long));
    printf("Type 【long long】 has a size of %zd bytes.\n",sizeof(long long));
    printf("Type 【double】 has a size of %zd bytes.\n",sizeof(double));
    printf("Type 【long double】 has a size of %zd bytes.\n",sizeof(long double));
    printf("Type 【float_Complex】 has a size of %zd bytes.\n",sizeof(float _Complex));
    printf("Type 【double_Complex】 has a size of %zd bytes.\n",sizeof(double _Complex));
    printf("Type 【double_Complex】 has a size of %zd bytes.\n",sizeof(long double _Complex));
    // printf("Type 【float_Imaginary】 has a size of %zd bytes.\n",sizeof(float _Imaginary));
    // printf("Type 【double_Imaginary】 has a size of %zd bytes.\n",sizeof(double _Imaginary));
    
    return 0;
  
}
