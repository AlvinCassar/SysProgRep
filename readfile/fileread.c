#include <stdio.h>

int main(int argc, char* argv[]) {
	if(argc < 2){
		fprintf(stdout, "Usage: fileread.c <textfile>");
		return -1;
	}else{
		int num, cPer, cStudent;
		int cPass = 0;
		FILE *fp;

		fp = fopen(argv[1], "r"); //opoen file
		if (fp != NULL) { //check if null
			while (!feof(fp)) { //loop through file line by line
				if (fscanf(fp, "%d", &num) != 1) //file line is not empty
					break; //the file format is not as i expected
				printf("Read: %d\n", num); //marks found in file line

				if(num >= 50)
					cPass++;
				cStudent++;
			}
			fclose(fp);
		}else{
		 fprintf(stdout, "Failed to open %s", argv[1]);
		 }

		cPer = (cPass/(float)cStudent) * 100;
		fprintf(stdout, "Pass rate is %d out of %d (%d%%)\n", cPass, cStudent, cPer);
		
	}
	return 0;
}