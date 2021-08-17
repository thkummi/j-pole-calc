/*
J-Pole Antanna Calculator
Copyright (C) 2021  Thomas Kummer
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include <stdio.h>

int main() {
	
	float f, lambda, l1, l2, l3, l4, raddiam;

	printf("Please input an f in MHz value: E.g. 432.2 ");
    	scanf("%f", &f);
    
    	printf("Calculating for %f MHz\n", f);
	
	lambda = ( 29971000/f)/100;
	l1 = 0.96*lambda*0.75;
	l2 = 0.96*lambda*0.25;
	l3 = 0.96*lambda*0.025;
	l4 = 0.96*lambda*0.026;
	raddiam = 0.96*lambda*0.01;
	printf("\n");
	printf("\n");
	printf(" Radiator Diam. is %f mm\n", raddiam);
	printf("\n");
	printf("\n");
	printf("              [   ||\n");
	printf("              [   ||\n");
	printf("              [   ||\n");
	printf("              [   ||\n");
	printf("              [   ||\n");
	printf("              [   ||\n");
	printf("              [   ||\n");
	printf("              [L1 || %f mm\n", l1);
	printf("              [   ||\n");
	printf("              [   ||\n");
	printf("              [   ||                       ||       ]\n");
	printf("              [   ||                       ||       ]\n");
	printf("              [   ||                       ||       ]\n");
	printf("              [   ||                       ||     L2]%f mm\n", l2);
	printf("              [   ||      ______           ||       ]\n");
	printf("              [   ||     /   ___|___       ||       ]\n");
	printf("              [   ||____/   /'  |  '\\______||       ]\n");
	printf("              [   ||        \\.__|__./      ||    ]  ]\n");
	printf("              [   ||        |  50   |      ||  L4]  ]%f mm\n", l4);
	printf("              [   ||        |  Ohm  |      ||    ]  ]\n");
	printf("              [   ||        ~~~~~~~~~      ||    ]  ]\n");
	printf("              [   ||                       ||    ]  ]\n");
	printf("                   ========================= \n");
	printf("                             L3 %f mm \n", l3);
	printf("\n");
	printf("\n");
	printf("\n");
	printf("                             73! \n");
	printf("\n");
	return 0;
}
