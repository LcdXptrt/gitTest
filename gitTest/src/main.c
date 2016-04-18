/*
 * main.c
 *
 *  Created on: 18 Apr 2016
 *      Author: rasmussena
 */

#include <stdio.h>

int main() {

	int i;
	float summa, fflt[1000], *fp;

	/* Here is code that gives fflt its values */
	summa = 0.0;
	fp = fflt;
	// This is another commit.
	// This will be shown only after I commit
	for (i=0; i<1000; i++) {
		summa += *fp;
		fp++;
	}
	printf("Finished!");
}
