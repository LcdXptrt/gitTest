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

	for (i=0; i<1000; i++) {
		summa += *fp;
		fp++;
	}
}
