class Solution {
    public int[][] matrixReshape(int[][] mat, int r, int c) {
        int rows = mat.length;
        int columns = mat[0].length;
        
        if(rows*columns != r*c){
            return mat;
        }
        
        int output_row = 0;
        int output_col = 0;
        int[][] output = new int[r][c];
        
        for(int i = 0; i<rows; i++){
            for(int j=0; j<columns; j++){
               output[output_row][output_col] = mat[i][j];
                output_col++;
                if(output_col == c){
                    output_col = 0;
                    output_row++;
                }
            }
        }
        
        return output;
    }
}