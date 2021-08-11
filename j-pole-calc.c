/*
BSD 3-Clause License

Copyright (c) 2021, Thomas Kummer
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

* Redistributions of source code must retain the above copyright notice, this
  list of conditions and the following disclaimer.

* Redistributions in binary form must reproduce the above copyright notice,
  this list of conditions and the following disclaimer in the documentation
  and/or other materials provided with the distribution.

* Neither the name of the copyright holder nor the names of its
  contributors may be used to endorse or promote products derived from
  this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#include <stdio.h>

int main() {
	
	float f, lambda, l1, l2, l3, l4, raddiam;

	printf("Please input an f in MHz value: E.g. 432.2\n");
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
	printf("              [   ||             ______    ||       ]\n");
	printf("              [   ||         ___|___   \\   ||       ]\n");
	printf("              [   ||________/'  |  '\\   \\__||       ]\n");
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
