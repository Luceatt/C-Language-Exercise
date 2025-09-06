#include<stdio.h>
#include<string.h>
FILE *fp;

int main(){
    fp = fopen("testdata.in", "r");
    
    int t;
    fscanf(fp, "%d\n", &t);
    
    for (int i = 0; i < t; i++){
        char kalimat[101];
        fscanf(fp, "%[^\n]\n", kalimat);

        int n;
        fscanf(fp, "%d\n", &n);

        char kata1, kata2;
        
        int count[27] = {};
        int changed[27] = {};
        
        int len = strlen(kalimat);

        for(int j = 0; j < n; j++){
            fscanf(fp, "%c %c\n", &kata1, &kata2);

            if(changed[kata1 - 'A'] == 0){
                for(int k = 0; k < len; k++){
                    if(kalimat[k] == kata1){
                		kalimat[k] = kata2;
                    }    
                }
                changed[kata1 - 'A'] = 1;
            }
        }
        
    	for(int j = 0; j < len; j++){
        	count[kalimat[j] - 'A']++;
      	}

      	for(int j = 0; j < 26; j++){
        	if(count[j] > 0){
            	printf("%c %d\n", j +'A', count[j]);
        	}
    	}
    }

    fclose(fp);

    return 0;
}
