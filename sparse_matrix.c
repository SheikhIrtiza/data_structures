 #include <stdio.h>
 #define ROWS 4
 #define COLS 4

 void init_matrix(int matrix[ROWS][COLS], int (*init)(int, int));
 void find_sparse_matrix(int matrix[ROWS][COLS]);
 void print_matrix(int matrix[ROWS][COLS]);

 void init_matrix(int matrix[ROWS][COLS], int (*init)(int, int))
  {
    for(int i=0; i<ROWS; i++)
      {
	for(int j=0; j<COLS; j++)
	  matrix[i][j] = (*init)(i,j);
      }
  }

 int setZero(int i, int j)
 {
   return 0;
 }
 int setProduct(int i, int j)
 {
   return i*j;
 }
 int setDiagonal(int i, int j)
 {
   return i == j ? 0 : 1;
 }
   int setDiagonal_one(int i, int j)
   {
     return i == j ? 1 : 0;
   }
     int sumRC(int i, int j)
     {
       return i+j;
     }
 void print_matrix(int matrix[ROWS][COLS])
 {
   printf("\n");
   for(int i=0; i<ROWS; i++)
     {
       for(int j=0; j<COLS; j++)
	 {
	   printf("%5d", matrix[i][j]);
	 }
	   printf("\n");
     }
 }

 void find_sparse_matrix(int matrix[ROWS][COLS])
 {
   int sparse_counter = 0;
   for(int i=0; i<ROWS; i++)
     {
       for(int j=0; j<COLS; j++)
	 {
	   if(matrix[i][j] == 0)
	    ++sparse_counter;
	 }
     }
   if(sparse_counter > ((ROWS*COLS)/2))
     printf("The matrix is a Sparse Matrix\n");
   else
     printf("The matrix is not a Sparse Matrix\n");
   printf("There are %d number of zeroes\n", sparse_counter);
 }


   int main()
   {
     int matrix[ROWS][COLS];

     init_matrix(matrix, setZero);
     print_matrix(matrix);
     find_sparse_matrix(matrix);

     init_matrix(matrix, setProduct);
     print_matrix(matrix);
     find_sparse_matrix(matrix);

     init_matrix(matrix, setDiagonal);
     print_matrix(matrix);
     find_sparse_matrix(matrix);

     init_matrix(matrix, setDiagonal_one);
     print_matrix(matrix);
     find_sparse_matrix(matrix);

     init_matrix(matrix, sumRC);
     print_matrix(matrix);
     find_sparse_matrix(matrix);

   }
