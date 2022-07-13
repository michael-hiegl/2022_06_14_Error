//**************************************************************************
//**************************************************************************
//**
//**	Projekt: 2022_06_14_Error	
//**    ***************************************
//**
//**	Filename: Main.c
//**
//**    Name: micha  
//**	Date: 6/14/2022 6:36:20 PM
//**	
//**	Description:
//**    
//**
//**
//**
//**************************************************************************
//**************************************************************************

//Includes
//**************************************************************************
#include <stdio.h>
#include <math.h>

//Defines & Pragmas
//**************************************************************************
#pragma warning(disable:4996) //Disable warning scanf unsafe
#pragma warning(disable:6031) //Disable warning return getchar()

#define TEILUNGSFAKTOR 2

#if TEILUNGSFAKTOR==0
#error "Teilungsfaktor ist Null"
#endif


//Functions
//**************************************************************************


int main(void)
{
	//Variables
	float a = 0;



	//Code
	printf("Bitte Zahl eingeben\n");
	scanf("%f", &a);

	printf("Ergebnis ist %f\n", a / TEILUNGSFAKTOR);



	getchar();
	fflush(stdin);
	getchar();
	return 0;
}