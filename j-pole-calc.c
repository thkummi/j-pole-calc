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

void printunit (int *unit_index){
    switch(*unit_index){
    case 1: printf("mm\n"); break;
    case 2: printf("inch\n"); break;
    }
}

void set_freq(float *f){
    float input;
    printf("Please input an f in MHz value: e.G. 432.2 \n");
    scanf("%f", &input);
    *f = input;
    printf("\n");
}

void choose_units_system(float *unit_factor ,int *unit_index ){
    int input;
    printf("Please choose (1)Metric or (2)Imperial units \n");
    scanf("%i", &input);
    *unit_index = input;
    printf("\n");
    switch(*unit_index){
    case 1: *unit_factor = 1; break;
    case 2: *unit_factor = 0.039; break; //for inch
    default: *unit_factor = 1; *unit_index = 1;  printf("Invalid input! Guessing! \n"); printf("\n"); break;
    }
}

void jpole_calc(float *f, float *unit_factor, float *lambda, float *l1, float *l2, float *l3, float *l4, float *raddiam){
    *lambda = ( 29971000 / *f ) / 100;
    *l1 = (0.96 * *lambda * 0.75) * *unit_factor;
    *l2 = (0.96 * *lambda * 0.25) * *unit_factor;
    *l3 = (0.96 * *lambda * 0.025) * *unit_factor;
    *l4 = (0.96 * *lambda * 0.026) * *unit_factor;
    *raddiam = (0.96 * *lambda * 0.01) * *unit_factor;
}

void jpole_print(float *f, float *unit_factor, float *lambda, float *l1, float *l2, float *l3, float *l4, float *raddiam, int *unit_index){
	printf(" Calculated for %f mHz\n", *f);
        printf("\n");
	printf("         Radiator Diam. is %f mm\n", *raddiam);
	printf("\n");
	printf("\n");
	printf("         [   ||\n");
	printf("         [   ||\n");
	printf("         [   ||\n");
	printf("         [   ||\n");
	printf("         [   ||\n");
	printf("         [   ||\n");
	printf("         [   ||\n");
	printf("         [L1 || %f ", *l1); printunit(&*unit_index);
	printf("         [   ||\n");
	printf("         [   ||\n");
	printf("         [   ||                       ||       ]\n");
	printf("         [   ||                       ||       ]\n");
	printf("         [   ||                       ||       ]\n");
	printf("         [   ||                       ||     L2]%f ", *l2); printunit(&*unit_index);
	printf("         [   ||      ______           ||       ]\n");
	printf("         [   ||     /   ___|___       ||       ]\n");
	printf("         [   ||____/   /'  |  '\\______||       ]\n");
	printf("         [   ||        \\.__|__./      ||    ]  ]\n");
	printf("         [   ||        |  50   |      ||  L4]  ]%f ", *l4); printunit(&*unit_index);
	printf("         [   ||        |  Ohm  |      ||    ]  ]\n");
	printf("         [   ||        ~~~~~~~~~      ||    ]  ]\n");
	printf("         [   ||                       ||    ]  ]\n");
	printf("              ========================= \n");
	printf("                        L3 %f ", *l3); printunit(&*unit_index);
	printf("\n");
	printf("\n");
	printf("\n");
}

int main() {

    float f, lambda, l1, l2, l3, l4, raddiam, unit_factor = 1;
    int unit_index = 1;

    set_freq(&f);

    choose_units_system(&unit_factor, &unit_index);

    jpole_calc(&f, &unit_factor,&lambda, &l1, &l2, &l3, &l4, &raddiam);

    jpole_print(&f ,&unit_factor, &lambda, &l1, &l2, &l3, &l4, &raddiam, &unit_index);


   	//printf("Calculating for %f MHz\n", f);

	printf("\n");
	printf("\n");

	printf("                             73! \n");
	printf("\n");
	return 0;
}
