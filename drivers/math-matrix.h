void matrixAddF(float* matrixA, float* matrixB, int numRowsA, int numColsA, float* matrixC)
void matrixAddL(long* matrixA, long* matrixB, int numRowsA, int numColsA, long* matrixC)
void matrixCopyF(float* source, int numRows, int numCols, float* destination)
void matrixCopyL(long* source, int numRows, int numCols, long* destination)
void matrixMultF(float* matrixA, float* matrixB, int numRowsA, int numColsA, int numColsB, float* matrixC)
void matrixMultL(long* matrixA, long* matrixB, int numRowsA, int numColsA, int numColsB, long* matrixC)
void matrixPrintF(float* matrix, int numRows, int numCols, char* label)
void matrixPrintL(long* matrix, int numRows, int numCols, char* label)
void matrixSubtractF(float* matrixA, float* matrixB, int numRowsA, int numColsA, float* matrixC)
void matrixSubtractL(long* matrixA, long* matrixB, int numRowsA, int numColsA, long* matrixC)
void matrixTransposeF(float* matrixA, int numRowsA, int numColsA, float* matrixC)
void matrixTransposeL(long* matrixA, int numRowsA, int numColsA, long* matrixC)