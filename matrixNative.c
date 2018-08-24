void matrixSetAll(int NRows, int NColumns, double array[], double e)
{
    int index, i, j;
    for (i = 0; i < NRows; i++)
    {
        for (j = 0; j < NColumns; j++)
        {
            index = i * NColumns + j;
            array[index] = e;
        }
    }
}

void matrixEye(int NRows, int NColumns, double array[])
{
    int index, i, j;
    for (i = 0; i < NRows; i++)
    {
        for (j = 0; j < NColumns; j++)
        {
            index = i * NColumns + j;
            if (i == j)
                array[index] = 1;
            else
                array[index] = 0;
        }
    }
}

void matrixCopy(int NRows, int NColumns, double matrix1[], double matrix2[])
{
    int index, i, j;

    for (i = 0; i < NRows; i++)
    {
        for (j = 0; j < NColumns; j++)
        {
            index = i * NColumns + j;
            matrix2[index] = matrix1[index];
        }
    }
}

void arrayCopy(int NElements, double *array1, double *array2)
{
    int i;
    for (i = 0; i < NElements; i++)
        array2[i] = array1[i];
}

void sollowerMatrix(int NRows,int NColumns,double *array1,double *array2){
    int i,j,index;

    for(i=0;i<NRows;i++){
        for(j=0;j<NColumns;j++){
            index=i*NColumns+j;

            if(j>i)
                array2[index]=0;
            else
                array2[index]=array1[index];

        }
    }
}