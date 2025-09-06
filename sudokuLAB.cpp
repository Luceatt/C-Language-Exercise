#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    int berhasil = 0;
    int hasil[T];

    for(int t = 0; t < T; t++){
        int matrix[9][9];
        int submatrix;
        
        for(int i = 0; i < 9; i++){
        	
            for(int j = 0; j < 9; j++){
                scanf("%d", &matrix[i][j]);
            }
        }

        char blankLine[10];
        fgets(blankLine, sizeof(blankLine), stdin);

        int benar = 1;

        for (int i = 0; i < 9; i++) {
            int baris[10] = {0};
            for (int j = 0; j < 9; j++) {
                if (baris[matrix[i][j]] != 0) {
                    benar = 0;
                    break;
                }
                baris[matrix[i][j]] = 1;
            }
            if (!benar) {
                break;
            }
        }

        for(int i = 0; i < 9; i++){
            int kolom[10] = {0};
            
            for(int j = 0; j < 9; j++){
                if (kolom[matrix[j][i]] != 0){
                    benar = 0;
                    break;
                }
                
                kolom[matrix[j][i]] = 1;
            }
            
            if (!benar) {
                break;
            }
        }

		for(int submatrix = 0; submatrix < 9; submatrix++){
    		int nilaiMatrix[10] = {0};
    		
   			for (int i = submatrix / 3 * 3; i < submatrix / 3 * 3 + 3; i++){
   				
        		for (int j = submatrix % 3 * 3; j < submatrix % 3 * 3 + 3; j++){
            		if (nilaiMatrix[matrix[i][j]] != 0) {
                		benar = 0;
                		break;
            		}
            		
            	nilaiMatrix[matrix[i][j]] = 1;
        		}
        		
        		if (!benar) {
           	 		break;
       			}
    		}
    		
    		if (!benar) {
        		break;
    		}
    	}

        hasil[t] = benar;

        if (benar) {
            berhasil++;
        }
    }

    for (int t = 0; t < T; t++) {
        printf("Case #%d: %s\n", t + 1, hasil[t] ? "TRUE" : "FALSE");
    }

    double akurasi = ((double)berhasil / T) * 100;
    printf("%.2f%%\n", akurasi);

    return 0;
}

