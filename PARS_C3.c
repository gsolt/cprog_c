/****************************************************************************
*																			*		
* REV    	DATE     	PROGRAMMER         	REVISION HISTORY                *
* V2.1		2007.01.31.	Gergely Zsolt		31-18 utvonal modositas			*
* V2.1.1	2007.04.10.	Gergely Zsolt		Kisber, USIN utvonal modositas: 5/1->5/7			*
* V2.1.2	2007.04.26.	Gergely Zsolt		11-23, 11-27
* V2.1.3	2007.04.27. Gergely Zsolt		Mecsér, szélgenerátor
* V2.1.4	2007.05.11	Gergely Zsolt		Sárvár, Spirit Hotel			*
* V2.1.5	2007.06.11	Gergely Zsolt		Mosonszolnok, szélerõmûpark		*
* V2.1.6	2007.10.03.	Gergely Zsolt		Komárom, NOKIA OHUB				*
* V2.1.7	2007.11.19. Gergely Zsolt		20-37 NPS						*
* V2.1.8	2007.11.23. Gergely Zsolt		Szentgotthárd átjátszó			*
* V2.1.9	2008.03.26. Gergely Zsolt		Szombathely, Merkur			*
											Tatabánya, Ipari park
											42-70
											42-81
*V2.1.10	2008.06.27. Gergely Zsolt		Oroszlány: Takács B, B, 35A, 35
*V2.1.11	2008.07.11. Gergely Zsolt		TMOK 21-38,21-34, Eszterházy
*V2.1.12	2008.07.17. Gergely Zsolt		Tatabánya: Hõközpont, Sárberek A
*V2.1.14	2008.07.21. Gergely Zsolt		Oroszlány: Gimnázium
*V2.1.15	2008.07.23. Gergely Zsolt		Tatabány, SCI
*V2.1.16	2008.08.13. Gergely Zsolt		82-44, 81-41, 81-92
*V2.1.17	2008.08.25. Gergely Zsolt		Jánossomorja, szélerõmû
*V2.1.18	2008.08.28. Gergely Zsolt		82-66, 82-40, 82-63, 82-79 OK2 		*	
*V2.1.23	2008.10.14. Gergely Zsolt		30-31		*	
*V2.1.25	2008.11.10. Gergely Zsolt		ZEG: Kálvária, Kórház		*	
*V2.1.27	2008.11.25. Gergely Zsolt		41-75, 45-23		*	
*V2.1.27	2008.12.02. Gergely Zsolt		Rönök, szélerõmû		*	
*V2.1.29	2009.01.05. Gergely Zsolt		41-55		*	
*V2.1.31	2009.02.23. Gergely Zsolt		5 db. kábelköri		*	
*V2.1.32	2009.03.02. Gergely Zsolt		23 db. TMOK		*	
*V2.1.33	2009.03.03. Gergely Zsolt		Kõszeg, Szot üdülõ		*	

****************************************************************************
* NAME           :  PARS_B.c                                                 *
* DESCRIPTION    :                                          *
* PROCESS        :  *                                                                            *
* [C] Copyright Zsolt Gergely,  2003.  All Rights Reserved                 *
*                                                                            *

*****************************************************************************/

#include "CAPPLIC.H"
#include <stdio.h>
/* Parameterek strukturaja */
#include "strPar.H"




/*--------------------------------------------------------------------------*/
/* Prototypes and defines                                                   */
/*--------------------------------------------------------------------------*/

void setdat(unsigned char *input);

/**********************************************/
/* Globals                                     */
/**********************************************/


/*--------------------------------------------------------------------------*/
/* The list of the function included in this block                          */
/*--------------------------------------------------------------------------*/
/*const CB_JUMPTBL user_jumptable[]=
{
   {"setdat"   , setdat_c},  	
   {0      , 0 }
};*/
/*--------------------------------------------------------------------------*/
/* 'C' Block Initialization and Completion                                  */
/*--------------------------------------------------------------------------*/
/*void user_control_function(int control)
{
unsigned long		lTotal;
unsigned long		lLargest;
unsigned long		lBlockSize;
unsigned char		*byP;	
int					nI;
	
	
   switch(control)
      {
         case CB_INIT :
         	
            break;

         case CB_EXIT :
         	
         break;
      }
}*/


/****************************************************************************/
/* Parameter strukturak feltoltese     											*/
/***************************************************************************/
void setdat(unsigned char *input)
{
	int					nI;
	TOTAL_PAR			*sT;
	
	sT = (TOTAL_PAR *)input;

/* Single command inicializálása ciklusban */	
for (nI = 0;nI<	MAX_RTU;nI++)
{
sT[0].sCP[0].sCPR[nI].nSCNum  = 1;
}	
	
sT[0].sCP[0].sCPR[0].nDCStart = 50;     	sT[0].sCP[0].sCPR[0].nDCNum = 1;      	sT[0].sCP[0].sCPR[0].nSCStart= 51;          sT[0].sCP[0].sCPR[0].nAckStart=52;  	sT[0].sCP[0].sCPR[0].nAckNum=1;       sT[0].sCP[0].sCPR[0].nSPOffsetCS = 306;         sT[0].sCP[0].sCPR[0].nSPOffsetLek = 307;
sT[0].sCP[0].sCPR[1].nDCStart = 10;   		sT[0].sCP[0].sCPR[1].nDCNum = 1; 	    sT[0].sCP[0].sCPR[1].nSCStart= 11;   	    sT[0].sCP[0].sCPR[1].nAckStart=0;   	sT[0].sCP[0].sCPR[1].nAckNum=0;       sT[0].sCP[0].sCPR[1].nSPOffsetCS = 34;      	  sT[0].sCP[0].sCPR[1].nSPOffsetLek = 35;
sT[0].sCP[0].sCPR[2].nDCStart = 12;  	 	sT[0].sCP[0].sCPR[2].nDCNum = 1;  	    sT[0].sCP[0].sCPR[2].nSCStart= 13;   	    sT[0].sCP[0].sCPR[2].nAckStart=0;   	sT[0].sCP[0].sCPR[2].nAckNum=0;       sT[0].sCP[0].sCPR[2].nSPOffsetCS = 50;          sT[0].sCP[0].sCPR[2].nSPOffsetLek = 51;
sT[0].sCP[0].sCPR[3].nDCStart = 14;  	 	sT[0].sCP[0].sCPR[3].nDCNum = 1; 	    sT[0].sCP[0].sCPR[3].nSCStart= 15;  	    sT[0].sCP[0].sCPR[3].nAckStart=0;   	sT[0].sCP[0].sCPR[3].nAckNum=0;       sT[0].sCP[0].sCPR[3].nSPOffsetCS = 66;          sT[0].sCP[0].sCPR[3].nSPOffsetLek = 67;
sT[0].sCP[0].sCPR[4].nDCStart = 16;   		sT[0].sCP[0].sCPR[4].nDCNum = 1;  	    sT[0].sCP[0].sCPR[4].nSCStart= 17;  	    sT[0].sCP[0].sCPR[4].nAckStart=0;   	sT[0].sCP[0].sCPR[4].nAckNum=0;       sT[0].sCP[0].sCPR[4].nSPOffsetCS = 82;          sT[0].sCP[0].sCPR[4].nSPOffsetLek = 83;
sT[0].sCP[0].sCPR[5].nDCStart = 18;  	 	sT[0].sCP[0].sCPR[5].nDCNum = 1; 	    sT[0].sCP[0].sCPR[5].nSCStart= 19;  	    sT[0].sCP[0].sCPR[5].nAckStart=1104;   	sT[0].sCP[0].sCPR[5].nAckNum=1;       sT[0].sCP[0].sCPR[5].nSPOffsetCS = 98;      	  sT[0].sCP[0].sCPR[5].nSPOffsetLek = 99;
sT[0].sCP[0].sCPR[6].nDCStart = 20;   		sT[0].sCP[0].sCPR[6].nDCNum = 1;  	    sT[0].sCP[0].sCPR[6].nSCStart= 21;  	    sT[0].sCP[0].sCPR[6].nAckStart=0;   	sT[0].sCP[0].sCPR[6].nAckNum=0;       sT[0].sCP[0].sCPR[6].nSPOffsetCS = 114;      	  sT[0].sCP[0].sCPR[6].nSPOffsetLek = 115;
sT[0].sCP[0].sCPR[7].nDCStart = 22;   		sT[0].sCP[0].sCPR[7].nDCNum = 1;  	    sT[0].sCP[0].sCPR[7].nSCStart= 23;    	    sT[0].sCP[0].sCPR[7].nAckStart=0;   	sT[0].sCP[0].sCPR[7].nAckNum=0;       sT[0].sCP[0].sCPR[7].nSPOffsetCS = 130;     	  sT[0].sCP[0].sCPR[7].nSPOffsetLek = 131;
sT[0].sCP[0].sCPR[8].nDCStart = 24;   		sT[0].sCP[0].sCPR[8].nDCNum = 1;  	    sT[0].sCP[0].sCPR[8].nSCStart= 25;  	    sT[0].sCP[0].sCPR[8].nAckStart=26;    	sT[0].sCP[0].sCPR[8].nAckNum=1;       sT[0].sCP[0].sCPR[8].nSPOffsetCS = 146;     	  sT[0].sCP[0].sCPR[8].nSPOffsetLek = 147;
sT[0].sCP[0].sCPR[9].nDCStart = 53;   		sT[0].sCP[0].sCPR[9].nDCNum = 2;    	sT[0].sCP[0].sCPR[9].nSCStart= 57;   	    sT[0].sCP[0].sCPR[9].nAckStart=59; 	    sT[0].sCP[0].sCPR[9].nAckNum=1;       sT[0].sCP[0].sCPR[9].nSPOffsetCS = 338;         sT[0].sCP[0].sCPR[9].nSPOffsetLek = 339;		sT[0].sCP[0].sCPR[9].nSPOffsetCS2 = 340;    sT[0].sCP[0].sCPR[9].nSPOffsetLek2 = 341;  sT[0].sCP[0].sCPR[9].nSCNum  = 2;
sT[0].sCP[0].sCPR[10].nDCStart = 67;   		sT[0].sCP[0].sCPR[10].nDCNum = 1;       sT[0].sCP[0].sCPR[10].nSCStart= 68;         sT[0].sCP[0].sCPR[10].nAckStart=0; 		sT[0].sCP[0].sCPR[10].nAckNum=0;      sT[0].sCP[0].sCPR[10].nSPOffsetCS = 162;        sT[0].sCP[0].sCPR[10].nSPOffsetLek = 163;
sT[0].sCP[0].sCPR[11].nDCStart = 60;   		sT[0].sCP[0].sCPR[11].nDCNum = 2;       sT[0].sCP[0].sCPR[11].nSCStart= 64;         sT[0].sCP[0].sCPR[11].nAckStart=66; 	sT[0].sCP[0].sCPR[11].nAckNum=1;      sT[0].sCP[0].sCPR[11].nSPOffsetCS = 372;        sT[0].sCP[0].sCPR[11].nSPOffsetLek = 373;		sT[0].sCP[0].sCPR[11].nSPOffsetCS2 = 374;   sT[0].sCP[0].sCPR[11].nSPOffsetLek2 = 375; sT[0].sCP[0].sCPR[11].nSCNum  = 2;
sT[0].sCP[0].sCPR[12].nDCStart = 69;   		sT[0].sCP[0].sCPR[12].nDCNum = 1;       sT[0].sCP[0].sCPR[12].nSCStart= 70;         sT[0].sCP[0].sCPR[12].nAckStart=71;		sT[0].sCP[0].sCPR[12].nAckNum=1;      sT[0].sCP[0].sCPR[12].nSPOffsetCS = 178;        sT[0].sCP[0].sCPR[12].nSPOffsetLek = 179;
sT[0].sCP[0].sCPR[13].nDCStart = 37;   		sT[0].sCP[0].sCPR[13].nDCNum = 1;       sT[0].sCP[0].sCPR[13].nSCStart= 38;         sT[0].sCP[0].sCPR[13].nAckStart=0; 		sT[0].sCP[0].sCPR[13].nAckNum=0;      sT[0].sCP[0].sCPR[13].nSPOffsetCS = 226;        sT[0].sCP[0].sCPR[13].nSPOffsetLek = 227;
sT[0].sCP[0].sCPR[14].nDCStart = 39;   		sT[0].sCP[0].sCPR[14].nDCNum = 1;       sT[0].sCP[0].sCPR[14].nSCStart= 40;         sT[0].sCP[0].sCPR[14].nAckStart=41;		sT[0].sCP[0].sCPR[14].nAckNum=1;      sT[0].sCP[0].sCPR[14].nSPOffsetCS = 242;        sT[0].sCP[0].sCPR[14].nSPOffsetLek = 243;
sT[0].sCP[0].sCPR[15].nDCStart = 42;   		sT[0].sCP[0].sCPR[15].nDCNum = 1;       sT[0].sCP[0].sCPR[15].nSCStart= 43;         sT[0].sCP[0].sCPR[15].nAckStart=0; 		sT[0].sCP[0].sCPR[15].nAckNum=0;      sT[0].sCP[0].sCPR[15].nSPOffsetCS = 258;        sT[0].sCP[0].sCPR[15].nSPOffsetLek = 259;
sT[0].sCP[0].sCPR[16].nDCStart = 44;   		sT[0].sCP[0].sCPR[16].nDCNum = 1;       sT[0].sCP[0].sCPR[16].nSCStart= 45;         sT[0].sCP[0].sCPR[16].nAckStart=46; 	sT[0].sCP[0].sCPR[16].nAckNum=1;      sT[0].sCP[0].sCPR[16].nSPOffsetCS = 274;        sT[0].sCP[0].sCPR[16].nSPOffsetLek = 275;
sT[0].sCP[0].sCPR[17].nDCStart = 47;   		sT[0].sCP[0].sCPR[17].nDCNum = 1;       sT[0].sCP[0].sCPR[17].nSCStart= 48;         sT[0].sCP[0].sCPR[17].nAckStart=49; 	sT[0].sCP[0].sCPR[17].nAckNum=1;      sT[0].sCP[0].sCPR[17].nSPOffsetCS = 290;        sT[0].sCP[0].sCPR[17].nSPOffsetLek = 291;
sT[0].sCP[0].sCPR[18].nDCStart = 72;   		sT[0].sCP[0].sCPR[18].nDCNum = 1;       sT[0].sCP[0].sCPR[18].nSCStart= 73;         sT[0].sCP[0].sCPR[18].nAckStart=74; 	sT[0].sCP[0].sCPR[18].nAckNum=1;      sT[0].sCP[0].sCPR[18].nSPOffsetCS = 194;        sT[0].sCP[0].sCPR[18].nSPOffsetLek = 195;
sT[0].sCP[0].sCPR[19].nDCStart = 78;   		sT[0].sCP[0].sCPR[19].nDCNum = 1;       sT[0].sCP[0].sCPR[19].nSCStart= 79;         sT[0].sCP[0].sCPR[19].nAckStart=0;	 	sT[0].sCP[0].sCPR[19].nAckNum=0;      sT[0].sCP[0].sCPR[19].nSPOffsetCS = 390;        sT[0].sCP[0].sCPR[19].nSPOffsetLek = 391;
sT[0].sCP[0].sCPR[20].nDCStart = 75;   		sT[0].sCP[0].sCPR[20].nDCNum = 1;       sT[0].sCP[0].sCPR[20].nSCStart= 76;         sT[0].sCP[0].sCPR[20].nAckStart=77;	 	sT[0].sCP[0].sCPR[20].nAckNum=1;      sT[0].sCP[0].sCPR[20].nSPOffsetCS = 210;        sT[0].sCP[0].sCPR[20].nSPOffsetLek = 211;
sT[0].sCP[0].sCPR[21].nDCStart = 82;   		sT[0].sCP[0].sCPR[21].nDCNum = 1;       sT[0].sCP[0].sCPR[21].nSCStart= 83;         sT[0].sCP[0].sCPR[21].nAckStart=0;	 	sT[0].sCP[0].sCPR[21].nAckNum=0;      sT[0].sCP[0].sCPR[21].nSPOffsetCS = 422;        sT[0].sCP[0].sCPR[21].nSPOffsetLek = 423;
sT[0].sCP[0].sCPR[22].nDCStart = 84;   		sT[0].sCP[0].sCPR[22].nDCNum = 1;       sT[0].sCP[0].sCPR[22].nSCStart= 85;         sT[0].sCP[0].sCPR[22].nAckStart=86;	 	sT[0].sCP[0].sCPR[22].nAckNum=1;      sT[0].sCP[0].sCPR[22].nSPOffsetCS = 438;        sT[0].sCP[0].sCPR[22].nSPOffsetLek = 439;
sT[0].sCP[0].sCPR[23].nDCStart = 87;   		sT[0].sCP[0].sCPR[23].nDCNum = 1;       sT[0].sCP[0].sCPR[23].nSCStart= 88;         sT[0].sCP[0].sCPR[23].nAckStart=0;	 	sT[0].sCP[0].sCPR[23].nAckNum=0;      sT[0].sCP[0].sCPR[23].nSPOffsetCS = 454;        sT[0].sCP[0].sCPR[23].nSPOffsetLek = 455;
sT[0].sCP[0].sCPR[24].nDCStart = 89;   		sT[0].sCP[0].sCPR[24].nDCNum = 1;       sT[0].sCP[0].sCPR[24].nSCStart= 90;         sT[0].sCP[0].sCPR[24].nAckStart=91;	 	sT[0].sCP[0].sCPR[24].nAckNum=1;      sT[0].sCP[0].sCPR[24].nSPOffsetCS = 470;        sT[0].sCP[0].sCPR[24].nSPOffsetLek = 471;
sT[0].sCP[0].sCPR[25].nDCStart = 92;   		sT[0].sCP[0].sCPR[25].nDCNum = 1;       sT[0].sCP[0].sCPR[25].nSCStart= 93;         sT[0].sCP[0].sCPR[25].nAckStart=94;	 	sT[0].sCP[0].sCPR[25].nAckNum=1;      sT[0].sCP[0].sCPR[25].nSPOffsetCS = 486;        sT[0].sCP[0].sCPR[25].nSPOffsetLek = 487;
sT[0].sCP[0].sCPR[26].nDCStart = 95;   		sT[0].sCP[0].sCPR[26].nDCNum = 1;       sT[0].sCP[0].sCPR[26].nSCStart= 96;         sT[0].sCP[0].sCPR[26].nAckStart=97;	 	sT[0].sCP[0].sCPR[26].nAckNum=1;      sT[0].sCP[0].sCPR[26].nSPOffsetCS = 502;        sT[0].sCP[0].sCPR[26].nSPOffsetLek = 503;
sT[0].sCP[0].sCPR[27].nDCStart = 98;   		sT[0].sCP[0].sCPR[27].nDCNum = 1;       sT[0].sCP[0].sCPR[27].nSCStart= 99;         sT[0].sCP[0].sCPR[27].nAckStart=0;	 	sT[0].sCP[0].sCPR[27].nAckNum=0;      sT[0].sCP[0].sCPR[27].nSPOffsetCS = 518;        sT[0].sCP[0].sCPR[27].nSPOffsetLek = 519;
sT[0].sCP[0].sCPR[28].nDCStart = 100;  		sT[0].sCP[0].sCPR[28].nDCNum = 1;       sT[0].sCP[0].sCPR[28].nSCStart= 101;        sT[0].sCP[0].sCPR[28].nAckStart=102;	sT[0].sCP[0].sCPR[28].nAckNum=1;      sT[0].sCP[0].sCPR[28].nSPOffsetCS = 534;        sT[0].sCP[0].sCPR[28].nSPOffsetLek = 535;
sT[0].sCP[0].sCPR[29].nDCStart = 103;  		sT[0].sCP[0].sCPR[29].nDCNum = 1;       sT[0].sCP[0].sCPR[29].nSCStart= 104;        sT[0].sCP[0].sCPR[29].nAckStart=105;	sT[0].sCP[0].sCPR[29].nAckNum=1;      sT[0].sCP[0].sCPR[29].nSPOffsetCS = 550;        sT[0].sCP[0].sCPR[29].nSPOffsetLek = 551;
sT[0].sCP[0].sCPR[30].nDCStart = 80;  		sT[0].sCP[0].sCPR[30].nDCNum = 1;       sT[0].sCP[0].sCPR[30].nSCStart= 81;         sT[0].sCP[0].sCPR[30].nAckStart=274;	sT[0].sCP[0].sCPR[30].nAckNum=1;      sT[0].sCP[0].sCPR[30].nSPOffsetCS = 406;        sT[0].sCP[0].sCPR[30].nSPOffsetLek = 407;
sT[0].sCP[0].sCPR[31].nDCStart = 108;  		sT[0].sCP[0].sCPR[31].nDCNum = 1;       sT[0].sCP[0].sCPR[31].nSCStart= 109;        sT[0].sCP[0].sCPR[31].nAckStart=110;	sT[0].sCP[0].sCPR[31].nAckNum=1;      sT[0].sCP[0].sCPR[31].nSPOffsetCS = 582;        sT[0].sCP[0].sCPR[31].nSPOffsetLek = 583;
sT[0].sCP[0].sCPR[32].nDCStart = 111;  		sT[0].sCP[0].sCPR[32].nDCNum = 1;       sT[0].sCP[0].sCPR[32].nSCStart= 112;        sT[0].sCP[0].sCPR[32].nAckStart=113;	sT[0].sCP[0].sCPR[32].nAckNum=1;      sT[0].sCP[0].sCPR[32].nSPOffsetCS = 598;        sT[0].sCP[0].sCPR[32].nSPOffsetLek = 599;
sT[0].sCP[0].sCPR[33].nDCStart = 116;  		sT[0].sCP[0].sCPR[33].nDCNum = 1;       sT[0].sCP[0].sCPR[33].nSCStart= 117;        sT[0].sCP[0].sCPR[33].nAckStart=0;		sT[0].sCP[0].sCPR[33].nAckNum=0;      sT[0].sCP[0].sCPR[33].nSPOffsetCS = 630;        sT[0].sCP[0].sCPR[33].nSPOffsetLek = 631;
sT[0].sCP[0].sCPR[34].nDCStart = 118;  		sT[0].sCP[0].sCPR[34].nDCNum = 1;       sT[0].sCP[0].sCPR[34].nSCStart= 119;        sT[0].sCP[0].sCPR[34].nAckStart=120;	sT[0].sCP[0].sCPR[34].nAckNum=1;      sT[0].sCP[0].sCPR[34].nSPOffsetCS = 646;        sT[0].sCP[0].sCPR[34].nSPOffsetLek = 647;
sT[0].sCP[0].sCPR[35].nDCStart = 124;  		sT[0].sCP[0].sCPR[35].nDCNum = 1;       sT[0].sCP[0].sCPR[35].nSCStart= 125;        sT[0].sCP[0].sCPR[35].nAckStart=126;	sT[0].sCP[0].sCPR[35].nAckNum=1;      sT[0].sCP[0].sCPR[35].nSPOffsetCS = 678;        sT[0].sCP[0].sCPR[35].nSPOffsetLek = 679;
sT[0].sCP[0].sCPR[36].nDCStart = 121;  		sT[0].sCP[0].sCPR[36].nDCNum = 1;       sT[0].sCP[0].sCPR[36].nSCStart= 122;        sT[0].sCP[0].sCPR[36].nAckStart=123;	sT[0].sCP[0].sCPR[36].nAckNum=1;      sT[0].sCP[0].sCPR[36].nSPOffsetCS = 662;        sT[0].sCP[0].sCPR[36].nSPOffsetLek = 663;
sT[0].sCP[0].sCPR[37].nDCStart = 106;  		sT[0].sCP[0].sCPR[37].nDCNum = 1;       sT[0].sCP[0].sCPR[37].nSCStart= 107;        sT[0].sCP[0].sCPR[37].nAckStart=0;  	sT[0].sCP[0].sCPR[37].nAckNum=0;      sT[0].sCP[0].sCPR[37].nSPOffsetCS = 566;        sT[0].sCP[0].sCPR[37].nSPOffsetLek = 567;
sT[0].sCP[0].sCPR[38].nDCStart = 129;  		sT[0].sCP[0].sCPR[38].nDCNum = 1;       sT[0].sCP[0].sCPR[38].nSCStart= 130;        sT[0].sCP[0].sCPR[38].nAckStart=0;  	sT[0].sCP[0].sCPR[38].nAckNum=0;      sT[0].sCP[0].sCPR[38].nSPOffsetCS = 710;        sT[0].sCP[0].sCPR[38].nSPOffsetLek = 711;
sT[0].sCP[0].sCPR[39].nDCStart = 127;  		sT[0].sCP[0].sCPR[39].nDCNum = 1;       sT[0].sCP[0].sCPR[39].nSCStart= 128;        sT[0].sCP[0].sCPR[39].nAckStart=0;  	sT[0].sCP[0].sCPR[39].nAckNum=0;      sT[0].sCP[0].sCPR[39].nSPOffsetCS = 694;        sT[0].sCP[0].sCPR[39].nSPOffsetLek = 695;
sT[0].sCP[0].sCPR[40].nDCStart = 114;  		sT[0].sCP[0].sCPR[40].nDCNum = 1;       sT[0].sCP[0].sCPR[40].nSCStart= 115;        sT[0].sCP[0].sCPR[40].nAckStart=0;  	sT[0].sCP[0].sCPR[40].nAckNum=0;      sT[0].sCP[0].sCPR[40].nSPOffsetCS = 614;        sT[0].sCP[0].sCPR[40].nSPOffsetLek = 615;
sT[0].sCP[0].sCPR[41].nDCStart = 131;  		sT[0].sCP[0].sCPR[41].nDCNum = 1;       sT[0].sCP[0].sCPR[41].nSCStart= 132;        sT[0].sCP[0].sCPR[41].nAckStart=246;  	sT[0].sCP[0].sCPR[41].nAckNum=1;      sT[0].sCP[0].sCPR[41].nSPOffsetCS = 726;        sT[0].sCP[0].sCPR[41].nSPOffsetLek = 727;
sT[0].sCP[0].sCPR[42].nDCStart = 133;  		sT[0].sCP[0].sCPR[42].nDCNum = 1;       sT[0].sCP[0].sCPR[42].nSCStart= 134;        sT[0].sCP[0].sCPR[42].nAckStart=0;  	sT[0].sCP[0].sCPR[42].nAckNum=0;      sT[0].sCP[0].sCPR[42].nSPOffsetCS = 742;        sT[0].sCP[0].sCPR[42].nSPOffsetLek = 743;
sT[0].sCP[0].sCPR[43].nDCStart = 135;  		sT[0].sCP[0].sCPR[43].nDCNum = 1;       sT[0].sCP[0].sCPR[43].nSCStart= 136;        sT[0].sCP[0].sCPR[43].nAckStart=137;  	sT[0].sCP[0].sCPR[43].nAckNum=1;      sT[0].sCP[0].sCPR[43].nSPOffsetCS = 758;        sT[0].sCP[0].sCPR[43].nSPOffsetLek = 759;
sT[0].sCP[0].sCPR[44].nDCStart = 138;  		sT[0].sCP[0].sCPR[44].nDCNum = 1;       sT[0].sCP[0].sCPR[44].nSCStart= 139;        sT[0].sCP[0].sCPR[44].nAckStart=140;  	sT[0].sCP[0].sCPR[44].nAckNum=1;      sT[0].sCP[0].sCPR[44].nSPOffsetCS = 774;        sT[0].sCP[0].sCPR[44].nSPOffsetLek = 775;
sT[0].sCP[0].sCPR[45].nDCStart = 141;  		sT[0].sCP[0].sCPR[45].nDCNum = 1;       sT[0].sCP[0].sCPR[45].nSCStart= 142;        sT[0].sCP[0].sCPR[45].nAckStart=824;  	sT[0].sCP[0].sCPR[45].nAckNum=1;      sT[0].sCP[0].sCPR[45].nSPOffsetCS = 790;        sT[0].sCP[0].sCPR[45].nSPOffsetLek = 791;
sT[0].sCP[0].sCPR[46].nDCStart = 143;  		sT[0].sCP[0].sCPR[46].nDCNum = 1;       sT[0].sCP[0].sCPR[46].nSCStart= 144;        sT[0].sCP[0].sCPR[46].nAckStart=145;  	sT[0].sCP[0].sCPR[46].nAckNum=1;      sT[0].sCP[0].sCPR[46].nSPOffsetCS = 806;        sT[0].sCP[0].sCPR[46].nSPOffsetLek = 807;
sT[0].sCP[0].sCPR[47].nDCStart = 146;  		sT[0].sCP[0].sCPR[47].nDCNum = 1;       sT[0].sCP[0].sCPR[47].nSCStart= 147;        sT[0].sCP[0].sCPR[47].nAckStart=148;  	sT[0].sCP[0].sCPR[47].nAckNum=1;      sT[0].sCP[0].sCPR[47].nSPOffsetCS = 822;        sT[0].sCP[0].sCPR[47].nSPOffsetLek = 823;
sT[0].sCP[0].sCPR[48].nDCStart = 149;  		sT[0].sCP[0].sCPR[48].nDCNum = 1;       sT[0].sCP[0].sCPR[48].nSCStart= 150;        sT[0].sCP[0].sCPR[48].nAckStart=0;  	sT[0].sCP[0].sCPR[48].nAckNum=0;      sT[0].sCP[0].sCPR[48].nSPOffsetCS = 838;        sT[0].sCP[0].sCPR[48].nSPOffsetLek = 839;
sT[0].sCP[0].sCPR[49].nDCStart = 151;  		sT[0].sCP[0].sCPR[49].nDCNum = 1;       sT[0].sCP[0].sCPR[49].nSCStart= 152;        sT[0].sCP[0].sCPR[49].nAckStart=0;  	sT[0].sCP[0].sCPR[49].nAckNum=0;      sT[0].sCP[0].sCPR[49].nSPOffsetCS = 854;        sT[0].sCP[0].sCPR[49].nSPOffsetLek = 855;
sT[0].sCP[0].sCPR[50].nDCStart = 153;  		sT[0].sCP[0].sCPR[50].nDCNum = 1;       sT[0].sCP[0].sCPR[50].nSCStart= 154;        sT[0].sCP[0].sCPR[50].nAckStart=155;  	sT[0].sCP[0].sCPR[50].nAckNum=1;      sT[0].sCP[0].sCPR[50].nSPOffsetCS = 870;        sT[0].sCP[0].sCPR[50].nSPOffsetLek = 871;
sT[0].sCP[0].sCPR[51].nDCStart = 156;  		sT[0].sCP[0].sCPR[51].nDCNum = 1;       sT[0].sCP[0].sCPR[51].nSCStart= 157;        sT[0].sCP[0].sCPR[51].nAckStart=158;  	sT[0].sCP[0].sCPR[51].nAckNum=1;      sT[0].sCP[0].sCPR[51].nSPOffsetCS = 886;        sT[0].sCP[0].sCPR[51].nSPOffsetLek = 887;
sT[0].sCP[0].sCPR[52].nDCStart = 159;  		sT[0].sCP[0].sCPR[52].nDCNum = 1;       sT[0].sCP[0].sCPR[52].nSCStart= 160;        sT[0].sCP[0].sCPR[52].nAckStart=161;  	sT[0].sCP[0].sCPR[52].nAckNum=1;      sT[0].sCP[0].sCPR[52].nSPOffsetCS = 902;        sT[0].sCP[0].sCPR[52].nSPOffsetLek = 903;
sT[0].sCP[0].sCPR[53].nDCStart = 162;  		sT[0].sCP[0].sCPR[53].nDCNum = 1;       sT[0].sCP[0].sCPR[53].nSCStart= 163;        sT[0].sCP[0].sCPR[53].nAckStart=164;  	sT[0].sCP[0].sCPR[53].nAckNum=1;      sT[0].sCP[0].sCPR[53].nSPOffsetCS = 918;        sT[0].sCP[0].sCPR[53].nSPOffsetLek = 919;
sT[0].sCP[0].sCPR[54].nDCStart = 165;  		sT[0].sCP[0].sCPR[54].nDCNum = 1;       sT[0].sCP[0].sCPR[54].nSCStart= 166;        sT[0].sCP[0].sCPR[54].nAckStart=0;  	sT[0].sCP[0].sCPR[54].nAckNum=0;      sT[0].sCP[0].sCPR[54].nSPOffsetCS = 934;        sT[0].sCP[0].sCPR[54].nSPOffsetLek = 935;
sT[0].sCP[0].sCPR[55].nDCStart = 167;  		sT[0].sCP[0].sCPR[55].nDCNum = 1;       sT[0].sCP[0].sCPR[55].nSCStart= 168;        sT[0].sCP[0].sCPR[55].nAckStart=169;  	sT[0].sCP[0].sCPR[55].nAckNum=1;      sT[0].sCP[0].sCPR[55].nSPOffsetCS = 950;        sT[0].sCP[0].sCPR[55].nSPOffsetLek = 951;
sT[0].sCP[0].sCPR[56].nDCStart = 170;  		sT[0].sCP[0].sCPR[56].nDCNum = 1;       sT[0].sCP[0].sCPR[56].nSCStart= 171;        sT[0].sCP[0].sCPR[56].nAckStart=172;  	sT[0].sCP[0].sCPR[56].nAckNum=1;      sT[0].sCP[0].sCPR[56].nSPOffsetCS = 966;        sT[0].sCP[0].sCPR[56].nSPOffsetLek = 967;
sT[0].sCP[0].sCPR[57].nDCStart = 173;  		sT[0].sCP[0].sCPR[57].nDCNum = 1;       sT[0].sCP[0].sCPR[57].nSCStart= 174;        sT[0].sCP[0].sCPR[57].nAckStart=175;  	sT[0].sCP[0].sCPR[57].nAckNum=1;      sT[0].sCP[0].sCPR[57].nSPOffsetCS = 982;        sT[0].sCP[0].sCPR[57].nSPOffsetLek = 983;
sT[0].sCP[0].sCPR[58].nDCStart = 176;  		sT[0].sCP[0].sCPR[58].nDCNum = 1;       sT[0].sCP[0].sCPR[58].nSCStart= 177;        sT[0].sCP[0].sCPR[58].nAckStart=178;  	sT[0].sCP[0].sCPR[58].nAckNum=1;      sT[0].sCP[0].sCPR[58].nSPOffsetCS = 998;        sT[0].sCP[0].sCPR[58].nSPOffsetLek = 999;
sT[0].sCP[0].sCPR[59].nDCStart = 179;  		sT[0].sCP[0].sCPR[59].nDCNum = 1;       sT[0].sCP[0].sCPR[59].nSCStart= 180;        sT[0].sCP[0].sCPR[59].nAckStart=181;  	sT[0].sCP[0].sCPR[59].nAckNum=1;      sT[0].sCP[0].sCPR[59].nSPOffsetCS = 1014;       sT[0].sCP[0].sCPR[59].nSPOffsetLek = 1015;
sT[0].sCP[0].sCPR[60].nDCStart = 182;  		sT[0].sCP[0].sCPR[60].nDCNum = 1;       sT[0].sCP[0].sCPR[60].nSCStart= 183;        sT[0].sCP[0].sCPR[60].nAckStart=184;  	sT[0].sCP[0].sCPR[60].nAckNum=1;      sT[0].sCP[0].sCPR[60].nSPOffsetCS = 1030;       sT[0].sCP[0].sCPR[60].nSPOffsetLek = 1031;
sT[0].sCP[0].sCPR[61].nDCStart = 185;  		sT[0].sCP[0].sCPR[61].nDCNum = 1;       sT[0].sCP[0].sCPR[61].nSCStart= 186;        sT[0].sCP[0].sCPR[61].nAckStart=187;  	sT[0].sCP[0].sCPR[61].nAckNum=1;      sT[0].sCP[0].sCPR[61].nSPOffsetCS = 1046;       sT[0].sCP[0].sCPR[61].nSPOffsetLek = 1047;
sT[0].sCP[0].sCPR[62].nDCStart = 188;  		sT[0].sCP[0].sCPR[62].nDCNum = 1;       sT[0].sCP[0].sCPR[62].nSCStart= 189;        sT[0].sCP[0].sCPR[62].nAckStart=0;  	sT[0].sCP[0].sCPR[62].nAckNum=0;      sT[0].sCP[0].sCPR[62].nSPOffsetCS = 1062;       sT[0].sCP[0].sCPR[62].nSPOffsetLek = 1063;
sT[0].sCP[0].sCPR[63].nDCStart = 190;  		sT[0].sCP[0].sCPR[63].nDCNum = 1;       sT[0].sCP[0].sCPR[63].nSCStart= 191;        sT[0].sCP[0].sCPR[63].nAckStart=192;  	sT[0].sCP[0].sCPR[63].nAckNum=1;      sT[0].sCP[0].sCPR[63].nSPOffsetCS = 1078;       sT[0].sCP[0].sCPR[63].nSPOffsetLek = 1079;
sT[0].sCP[0].sCPR[64].nDCStart = 193;  		sT[0].sCP[0].sCPR[64].nDCNum = 1;       sT[0].sCP[0].sCPR[64].nSCStart= 194;        sT[0].sCP[0].sCPR[64].nAckStart=195;  	sT[0].sCP[0].sCPR[64].nAckNum=1;      sT[0].sCP[0].sCPR[64].nSPOffsetCS = 1094;       sT[0].sCP[0].sCPR[64].nSPOffsetLek = 1095;
sT[0].sCP[0].sCPR[65].nDCStart = 196;  		sT[0].sCP[0].sCPR[65].nDCNum = 1;       sT[0].sCP[0].sCPR[65].nSCStart= 197;        sT[0].sCP[0].sCPR[65].nAckStart=198;  	sT[0].sCP[0].sCPR[65].nAckNum=1;      sT[0].sCP[0].sCPR[65].nSPOffsetCS = 1110;       sT[0].sCP[0].sCPR[65].nSPOffsetLek = 1111;
sT[0].sCP[0].sCPR[66].nDCStart = 199;  		sT[0].sCP[0].sCPR[66].nDCNum = 1;       sT[0].sCP[0].sCPR[66].nSCStart= 200;        sT[0].sCP[0].sCPR[66].nAckStart=228;  	sT[0].sCP[0].sCPR[66].nAckNum=1;      sT[0].sCP[0].sCPR[66].nSPOffsetCS = 1126;       sT[0].sCP[0].sCPR[66].nSPOffsetLek = 1127;
sT[0].sCP[0].sCPR[67].nDCStart = 201;  		sT[0].sCP[0].sCPR[67].nDCNum = 1;       sT[0].sCP[0].sCPR[67].nSCStart= 202;        sT[0].sCP[0].sCPR[67].nAckStart=0;  	sT[0].sCP[0].sCPR[67].nAckNum=0;      sT[0].sCP[0].sCPR[67].nSPOffsetCS = 1142;       sT[0].sCP[0].sCPR[67].nSPOffsetLek = 1143;
sT[0].sCP[0].sCPR[68].nDCStart = 203;  		sT[0].sCP[0].sCPR[68].nDCNum = 1;       sT[0].sCP[0].sCPR[68].nSCStart= 204;        sT[0].sCP[0].sCPR[68].nAckStart=0;  	sT[0].sCP[0].sCPR[68].nAckNum=0;      sT[0].sCP[0].sCPR[68].nSPOffsetCS = 1158;       sT[0].sCP[0].sCPR[68].nSPOffsetLek = 1159;
sT[0].sCP[0].sCPR[69].nDCStart = 205;  		sT[0].sCP[0].sCPR[69].nDCNum = 1;       sT[0].sCP[0].sCPR[69].nSCStart= 206;        sT[0].sCP[0].sCPR[69].nAckStart=207;  	sT[0].sCP[0].sCPR[69].nAckNum=1;      sT[0].sCP[0].sCPR[69].nSPOffsetCS = 1174;       sT[0].sCP[0].sCPR[69].nSPOffsetLek = 1175;
sT[0].sCP[0].sCPR[70].nDCStart = 208;  		sT[0].sCP[0].sCPR[70].nDCNum = 4;       sT[0].sCP[0].sCPR[70].nSCStart= 213;        sT[0].sCP[0].sCPR[70].nAckStart=212;  	sT[0].sCP[0].sCPR[70].nAckNum=1;      sT[0].sCP[0].sCPR[70].nSPOffsetCS = 1211;       sT[0].sCP[0].sCPR[70].nSPOffsetLek = 1212;
sT[0].sCP[0].sCPR[71].nDCStart = 214;  		sT[0].sCP[0].sCPR[71].nDCNum = 4;       sT[0].sCP[0].sCPR[71].nSCStart= 219;        sT[0].sCP[0].sCPR[71].nAckStart=218;  	sT[0].sCP[0].sCPR[71].nAckNum=1;      sT[0].sCP[0].sCPR[71].nSPOffsetCS = 1248;       sT[0].sCP[0].sCPR[71].nSPOffsetLek = 1249;
sT[0].sCP[0].sCPR[72].nDCStart = 220;  		sT[0].sCP[0].sCPR[72].nDCNum = 1;       sT[0].sCP[0].sCPR[72].nSCStart= 221;        sT[0].sCP[0].sCPR[72].nAckStart=222;  	sT[0].sCP[0].sCPR[72].nAckNum=1;      sT[0].sCP[0].sCPR[72].nSPOffsetCS = 1264;       sT[0].sCP[0].sCPR[72].nSPOffsetLek = 1265;
sT[0].sCP[0].sCPR[73].nDCStart = 223;  		sT[0].sCP[0].sCPR[73].nDCNum = 4;       sT[0].sCP[0].sCPR[73].nSCStart= 227;        sT[0].sCP[0].sCPR[73].nAckStart=0;  	sT[0].sCP[0].sCPR[73].nAckNum=0;      sT[0].sCP[0].sCPR[73].nSPOffsetCS = 1282;       sT[0].sCP[0].sCPR[73].nSPOffsetLek = 1283;
sT[0].sCP[0].sCPR[74].nDCStart = 229;  		sT[0].sCP[0].sCPR[74].nDCNum = 4;       sT[0].sCP[0].sCPR[74].nSCStart= 234;        sT[0].sCP[0].sCPR[74].nAckStart=233;  	sT[0].sCP[0].sCPR[74].nAckNum=1;      sT[0].sCP[0].sCPR[74].nSPOffsetCS = 1319;       sT[0].sCP[0].sCPR[74].nSPOffsetLek = 1320;
sT[0].sCP[0].sCPR[75].nDCStart = 235;  		sT[0].sCP[0].sCPR[75].nDCNum = 5;       sT[0].sCP[0].sCPR[75].nSCStart= 240;        sT[0].sCP[0].sCPR[75].nAckStart=0;  	sT[0].sCP[0].sCPR[75].nAckNum=0;      sT[0].sCP[0].sCPR[75].nSPOffsetCS = 1337;       sT[0].sCP[0].sCPR[75].nSPOffsetLek = 1338;
sT[0].sCP[0].sCPR[76].nDCStart = 250;  		sT[0].sCP[0].sCPR[76].nDCNum = 11;      sT[0].sCP[0].sCPR[76].nSCStart= 262;        sT[0].sCP[0].sCPR[76].nAckStart=0;  	sT[0].sCP[0].sCPR[76].nAckNum=0;      sT[0].sCP[0].sCPR[76].nSPOffsetCS = 1355;       sT[0].sCP[0].sCPR[76].nSPOffsetLek = 1356;
sT[0].sCP[0].sCPR[77].nDCStart = 263;  		sT[0].sCP[0].sCPR[77].nDCNum = 8;       sT[0].sCP[0].sCPR[77].nSCStart= 271;        sT[0].sCP[0].sCPR[77].nAckStart=0;  	sT[0].sCP[0].sCPR[77].nAckNum=0;      sT[0].sCP[0].sCPR[77].nSPOffsetCS = 1381;       sT[0].sCP[0].sCPR[77].nSPOffsetLek = 1382;
sT[0].sCP[0].sCPR[78].nDCStart = 272;  		sT[0].sCP[0].sCPR[78].nDCNum = 1;       sT[0].sCP[0].sCPR[78].nSCStart= 273;        sT[0].sCP[0].sCPR[78].nAckStart=0;  	sT[0].sCP[0].sCPR[78].nAckNum=0;      sT[0].sCP[0].sCPR[78].nSPOffsetCS = 1397;       sT[0].sCP[0].sCPR[78].nSPOffsetLek = 1398;
sT[0].sCP[0].sCPR[79].nDCStart = 241;  		sT[0].sCP[0].sCPR[79].nDCNum = 4;       sT[0].sCP[0].sCPR[79].nSCStart= 245;        sT[0].sCP[0].sCPR[79].nAckStart=0;  	sT[0].sCP[0].sCPR[79].nAckNum=0;      sT[0].sCP[0].sCPR[79].nSPOffsetCS = 1413;       sT[0].sCP[0].sCPR[79].nSPOffsetLek = 1414;
sT[0].sCP[0].sCPR[80].nDCStart = 275;  		sT[0].sCP[0].sCPR[80].nDCNum = 4;       sT[0].sCP[0].sCPR[80].nSCStart= 280;        sT[0].sCP[0].sCPR[80].nAckStart=279;  	sT[0].sCP[0].sCPR[80].nAckNum=1;      sT[0].sCP[0].sCPR[80].nSPOffsetCS = 1450;       sT[0].sCP[0].sCPR[80].nSPOffsetLek = 1451;
sT[0].sCP[0].sCPR[81].nDCStart = 281;  		sT[0].sCP[0].sCPR[81].nDCNum = 4;       sT[0].sCP[0].sCPR[81].nSCStart= 286;        sT[0].sCP[0].sCPR[81].nAckStart=  0;  	sT[0].sCP[0].sCPR[81].nAckNum=0;      sT[0].sCP[0].sCPR[81].nSPOffsetCS = 1468;       sT[0].sCP[0].sCPR[81].nSPOffsetLek = 1469;
sT[0].sCP[0].sCPR[82].nDCStart = 287;  		sT[0].sCP[0].sCPR[82].nDCNum = 1;       sT[0].sCP[0].sCPR[82].nSCStart= 288;        sT[0].sCP[0].sCPR[82].nAckStart=0;  	sT[0].sCP[0].sCPR[82].nAckNum=0;      sT[0].sCP[0].sCPR[82].nSPOffsetCS = 1503;       sT[0].sCP[0].sCPR[82].nSPOffsetLek = 1504;
sT[0].sCP[0].sCPR[83].nDCStart = 289;  		sT[0].sCP[0].sCPR[83].nDCNum = 1;       sT[0].sCP[0].sCPR[83].nSCStart= 290;        sT[0].sCP[0].sCPR[83].nAckStart=0;  	sT[0].sCP[0].sCPR[83].nAckNum=0;      sT[0].sCP[0].sCPR[83].nSPOffsetCS = 1519;       sT[0].sCP[0].sCPR[83].nSPOffsetLek = 1520;
sT[0].sCP[0].sCPR[84].nDCStart = 291;  		sT[0].sCP[0].sCPR[84].nDCNum = 4;       sT[0].sCP[0].sCPR[84].nSCStart= 296;        sT[0].sCP[0].sCPR[84].nAckStart=295;  	sT[0].sCP[0].sCPR[84].nAckNum=1;      sT[0].sCP[0].sCPR[84].nSPOffsetCS = 1556;       sT[0].sCP[0].sCPR[84].nSPOffsetLek = 1557;
sT[0].sCP[0].sCPR[85].nDCStart = 297;  		sT[0].sCP[0].sCPR[85].nDCNum = 4;       sT[0].sCP[0].sCPR[85].nSCStart= 302;        sT[0].sCP[0].sCPR[85].nAckStart=301;  	sT[0].sCP[0].sCPR[85].nAckNum=1;      sT[0].sCP[0].sCPR[85].nSPOffsetCS = 1593;       sT[0].sCP[0].sCPR[85].nSPOffsetLek = 1594;
sT[0].sCP[0].sCPR[86].nDCStart = 303;  		sT[0].sCP[0].sCPR[86].nDCNum = 4;       sT[0].sCP[0].sCPR[86].nSCStart= 308;        sT[0].sCP[0].sCPR[86].nAckStart=307;  	sT[0].sCP[0].sCPR[86].nAckNum=1;      sT[0].sCP[0].sCPR[86].nSPOffsetCS = 1630;       sT[0].sCP[0].sCPR[86].nSPOffsetLek = 1631;
sT[0].sCP[0].sCPR[87].nDCStart = 309;    	sT[0].sCP[0].sCPR[87].nDCNum = 4;    	sT[0].sCP[0].sCPR[87].nSCStart= 314;    	sT[0].sCP[0].sCPR[87].nAckStart=313;  	sT[0].sCP[0].sCPR[87].nAckNum=1;   	  sT[0].sCP[0].sCPR[87].nSPOffsetCS = 1667;   	  sT[0].sCP[0].sCPR[87].nSPOffsetLek = 1668;
sT[0].sCP[0].sCPR[88].nDCStart = 315;    	sT[0].sCP[0].sCPR[88].nDCNum = 4;    	sT[0].sCP[0].sCPR[88].nSCStart= 320;    	sT[0].sCP[0].sCPR[88].nAckStart=319;  	sT[0].sCP[0].sCPR[88].nAckNum=1;   	  sT[0].sCP[0].sCPR[88].nSPOffsetCS = 1704;   	  sT[0].sCP[0].sCPR[88].nSPOffsetLek = 1705;
sT[0].sCP[0].sCPR[89].nDCStart = 321;    	sT[0].sCP[0].sCPR[89].nDCNum = 4;    	sT[0].sCP[0].sCPR[89].nSCStart= 326;    	sT[0].sCP[0].sCPR[89].nAckStart=325;  	sT[0].sCP[0].sCPR[89].nAckNum=1;   	  sT[0].sCP[0].sCPR[89].nSPOffsetCS = 1741;   	  sT[0].sCP[0].sCPR[89].nSPOffsetLek = 1742;
sT[0].sCP[0].sCPR[90].nDCStart = 327;  		sT[0].sCP[0].sCPR[90].nDCNum = 1;       sT[0].sCP[0].sCPR[90].nSCStart= 328;        sT[0].sCP[0].sCPR[90].nAckStart=0;  	sT[0].sCP[0].sCPR[90].nAckNum=0;      sT[0].sCP[0].sCPR[90].nSPOffsetCS = 1757;       sT[0].sCP[0].sCPR[90].nSPOffsetLek = 1758;
sT[0].sCP[0].sCPR[91].nDCStart = 0;	    	sT[0].sCP[0].sCPR[91].nDCNum = 0;    	sT[0].sCP[0].sCPR[91].nSCStart =329;    	sT[0].sCP[0].sCPR[91].nAckStart=0; 		sT[0].sCP[0].sCPR[91].nAckNum =0;     sT[0].sCP[0].sCPR[91].nSPOffsetCS  =1764;  	  sT[0].sCP[0].sCPR[91].nSPOffsetLek  =1765; 	
sT[0].sCP[0].sCPR[92].nDCStart = 330;  		sT[0].sCP[0].sCPR[92].nDCNum = 1;       sT[0].sCP[0].sCPR[92].nSCStart= 331;        sT[0].sCP[0].sCPR[92].nAckStart=0;  	sT[0].sCP[0].sCPR[92].nAckNum=0;      sT[0].sCP[0].sCPR[92].nSPOffsetCS = 1780;       sT[0].sCP[0].sCPR[92].nSPOffsetLek = 1781;
sT[0].sCP[0].sCPR[93].nDCStart = 332;  		sT[0].sCP[0].sCPR[93].nDCNum = 1;       sT[0].sCP[0].sCPR[93].nSCStart= 333;        sT[0].sCP[0].sCPR[93].nAckStart=0;  	sT[0].sCP[0].sCPR[93].nAckNum=0;      sT[0].sCP[0].sCPR[93].nSPOffsetCS = 1796;       sT[0].sCP[0].sCPR[93].nSPOffsetLek = 1797;
sT[0].sCP[0].sCPR[94].nDCStart = 334;  		sT[0].sCP[0].sCPR[94].nDCNum = 1;       sT[0].sCP[0].sCPR[94].nSCStart= 335;        sT[0].sCP[0].sCPR[94].nAckStart=0;  	sT[0].sCP[0].sCPR[94].nAckNum=0;      sT[0].sCP[0].sCPR[94].nSPOffsetCS = 1812;       sT[0].sCP[0].sCPR[94].nSPOffsetLek = 1813;
sT[0].sCP[0].sCPR[95].nDCStart = 336;    	sT[0].sCP[0].sCPR[95].nDCNum = 4;    	sT[0].sCP[0].sCPR[95].nSCStart= 341;    	sT[0].sCP[0].sCPR[95].nAckStart=340;  	sT[0].sCP[0].sCPR[95].nAckNum=1;   	  sT[0].sCP[0].sCPR[95].nSPOffsetCS = 1849;   	  sT[0].sCP[0].sCPR[95].nSPOffsetLek = 1850;
sT[0].sCP[0].sCPR[96].nDCStart = 342;    	sT[0].sCP[0].sCPR[96].nDCNum = 4;    	sT[0].sCP[0].sCPR[96].nSCStart= 347;    	sT[0].sCP[0].sCPR[96].nAckStart=346;  	sT[0].sCP[0].sCPR[96].nAckNum=1;   	  sT[0].sCP[0].sCPR[96].nSPOffsetCS = 1886;   	  sT[0].sCP[0].sCPR[96].nSPOffsetLek = 1887;
sT[0].sCP[0].sCPR[97].nDCStart = 348;  		sT[0].sCP[0].sCPR[97].nDCNum = 1;       sT[0].sCP[0].sCPR[97].nSCStart= 349;        sT[0].sCP[0].sCPR[97].nAckStart=0;  	sT[0].sCP[0].sCPR[97].nAckNum=0;      sT[0].sCP[0].sCPR[97].nSPOffsetCS = 1902;       sT[0].sCP[0].sCPR[97].nSPOffsetLek = 1903;
sT[0].sCP[0].sCPR[98].nDCStart = 354;    	sT[0].sCP[0].sCPR[98].nDCNum = 4;    	sT[0].sCP[0].sCPR[98].nSCStart= 358;    	sT[0].sCP[0].sCPR[98].nAckStart=0;  	sT[0].sCP[0].sCPR[98].nAckNum=0;   	  sT[0].sCP[0].sCPR[98].nSPOffsetCS = 5676;   	  sT[0].sCP[0].sCPR[98].nSPOffsetLek = 5677;
sT[0].sCP[0].sCPR[99].nDCStart = 359;    	sT[0].sCP[0].sCPR[99].nDCNum = 4;    	sT[0].sCP[0].sCPR[99].nSCStart= 363;    	sT[0].sCP[0].sCPR[99].nAckStart=0;  	sT[0].sCP[0].sCPR[99].nAckNum=0;   	  sT[0].sCP[0].sCPR[99].nSPOffsetCS = 1966;   	  sT[0].sCP[0].sCPR[99].nSPOffsetLek = 1967;
sT[0].sCP[0].sCPR[100].nDCStart= 350;  		sT[0].sCP[0].sCPR[100].nDCNum =1;       sT[0].sCP[0].sCPR[100].nSCStart=351;        sT[0].sCP[0].sCPR[100].nAckStart=0;  	sT[0].sCP[0].sCPR[100].nAckNum=0;     sT[0].sCP[0].sCPR[100].nSPOffsetCS= 1918;       sT[0].sCP[0].sCPR[100].nSPOffsetLek= 1919;
sT[0].sCP[0].sCPR[101].nDCStart= 352;  		sT[0].sCP[0].sCPR[101].nDCNum =1;       sT[0].sCP[0].sCPR[101].nSCStart=353;        sT[0].sCP[0].sCPR[101].nAckStart=0;  	sT[0].sCP[0].sCPR[101].nAckNum=0;     sT[0].sCP[0].sCPR[101].nSPOffsetCS= 1934;       sT[0].sCP[0].sCPR[101].nSPOffsetLek= 1935;
sT[0].sCP[0].sCPR[102].nDCStart= 364;  		sT[0].sCP[0].sCPR[102].nDCNum =4;       sT[0].sCP[0].sCPR[102].nSCStart=368;        sT[0].sCP[0].sCPR[102].nAckStart=0;  	sT[0].sCP[0].sCPR[102].nAckNum=0;     sT[0].sCP[0].sCPR[102].nSPOffsetCS= 1982;       sT[0].sCP[0].sCPR[102].nSPOffsetLek= 1983;
sT[0].sCP[0].sCPR[103].nDCStart= 369;  		sT[0].sCP[0].sCPR[103].nDCNum =4;       sT[0].sCP[0].sCPR[103].nSCStart=373;        sT[0].sCP[0].sCPR[103].nAckStart=0;  	sT[0].sCP[0].sCPR[103].nAckNum=0;     sT[0].sCP[0].sCPR[103].nSPOffsetCS= 1998;       sT[0].sCP[0].sCPR[103].nSPOffsetLek= 1999;
sT[0].sCP[0].sCPR[104].nDCStart= 374;  		sT[0].sCP[0].sCPR[104].nDCNum =4;       sT[0].sCP[0].sCPR[104].nSCStart=378;        sT[0].sCP[0].sCPR[104].nAckStart=0;  	sT[0].sCP[0].sCPR[104].nAckNum=0;     sT[0].sCP[0].sCPR[104].nSPOffsetCS= 2014;       sT[0].sCP[0].sCPR[104].nSPOffsetLek= 2015;
sT[0].sCP[0].sCPR[105].nDCStart= 379;  		sT[0].sCP[0].sCPR[105].nDCNum =4;       sT[0].sCP[0].sCPR[105].nSCStart=383;        sT[0].sCP[0].sCPR[105].nAckStart=0;  	sT[0].sCP[0].sCPR[105].nAckNum=0;     sT[0].sCP[0].sCPR[105].nSPOffsetCS= 2030;       sT[0].sCP[0].sCPR[105].nSPOffsetLek= 2031;
sT[0].sCP[0].sCPR[106].nDCStart= 384;  		sT[0].sCP[0].sCPR[106].nDCNum =4;       sT[0].sCP[0].sCPR[106].nSCStart=388;        sT[0].sCP[0].sCPR[106].nAckStart=0;  	sT[0].sCP[0].sCPR[106].nAckNum=0;     sT[0].sCP[0].sCPR[106].nSPOffsetCS= 2046;       sT[0].sCP[0].sCPR[106].nSPOffsetLek= 2047;
sT[0].sCP[0].sCPR[107].nDCStart= 389;  		sT[0].sCP[0].sCPR[107].nDCNum =4;       sT[0].sCP[0].sCPR[107].nSCStart=393;        sT[0].sCP[0].sCPR[107].nAckStart=0;  	sT[0].sCP[0].sCPR[107].nAckNum=0;     sT[0].sCP[0].sCPR[107].nSPOffsetCS= 2062;       sT[0].sCP[0].sCPR[107].nSPOffsetLek= 2063;
sT[0].sCP[0].sCPR[108].nDCStart= 394;  		sT[0].sCP[0].sCPR[108].nDCNum =4;       sT[0].sCP[0].sCPR[108].nSCStart=398;        sT[0].sCP[0].sCPR[108].nAckStart=0;  	sT[0].sCP[0].sCPR[108].nAckNum=0;     sT[0].sCP[0].sCPR[108].nSPOffsetCS= 2078;       sT[0].sCP[0].sCPR[108].nSPOffsetLek= 2079;
sT[0].sCP[0].sCPR[109].nDCStart= 399;  		sT[0].sCP[0].sCPR[109].nDCNum =4;       sT[0].sCP[0].sCPR[109].nSCStart=403;        sT[0].sCP[0].sCPR[109].nAckStart=0;  	sT[0].sCP[0].sCPR[109].nAckNum=0;     sT[0].sCP[0].sCPR[109].nSPOffsetCS= 2094;       sT[0].sCP[0].sCPR[109].nSPOffsetLek= 2095;
sT[0].sCP[0].sCPR[110].nDCStart= 404;  		sT[0].sCP[0].sCPR[110].nDCNum =4;       sT[0].sCP[0].sCPR[110].nSCStart=408;        sT[0].sCP[0].sCPR[110].nAckStart=0;  	sT[0].sCP[0].sCPR[110].nAckNum=0;     sT[0].sCP[0].sCPR[110].nSPOffsetCS= 2110;       sT[0].sCP[0].sCPR[110].nSPOffsetLek= 2111;
sT[0].sCP[0].sCPR[111].nDCStart= 409; 		sT[0].sCP[0].sCPR[111].nDCNum =2;   	sT[0].sCP[0].sCPR[111].nSCStart=413;  		sT[0].sCP[0].sCPR[111].nAckStart=0;  	sT[0].sCP[0].sCPR[111].nAckNum=0; 	  sT[0].sCP[0].sCPR[111].nSPOffsetCS = 2142; 	  sT[0].sCP[0].sCPR[111].nSPOffsetLek= 2143; sT[0].sCP[0].sCPR[111].nSPOffsetCS2 = 2144;   sT[0].sCP[0].sCPR[111].nSPOffsetLek2 = 2145;sT[0].sCP[0].sCPR[111].nSCNum  = 2;
sT[0].sCP[0].sCPR[112].nDCStart= 415;  		sT[0].sCP[0].sCPR[112].nDCNum =4;       sT[0].sCP[0].sCPR[112].nSCStart=419;        sT[0].sCP[0].sCPR[112].nAckStart=0;  	sT[0].sCP[0].sCPR[112].nAckNum=0;     sT[0].sCP[0].sCPR[112].nSPOffsetCS= 2160;       sT[0].sCP[0].sCPR[112].nSPOffsetLek= 2161;
sT[0].sCP[0].sCPR[113].nDCStart= 420;  		sT[0].sCP[0].sCPR[113].nDCNum =1;       sT[0].sCP[0].sCPR[113].nSCStart=421;        sT[0].sCP[0].sCPR[113].nAckStart=0;  	sT[0].sCP[0].sCPR[113].nAckNum=0;     sT[0].sCP[0].sCPR[113].nSPOffsetCS= 2176;       sT[0].sCP[0].sCPR[113].nSPOffsetLek= 2177;
sT[0].sCP[0].sCPR[114].nDCStart= 422;  		sT[0].sCP[0].sCPR[114].nDCNum =4;       sT[0].sCP[0].sCPR[114].nSCStart=426;        sT[0].sCP[0].sCPR[114].nAckStart=0;  	sT[0].sCP[0].sCPR[114].nAckNum=0;     sT[0].sCP[0].sCPR[114].nSPOffsetCS= 2192;       sT[0].sCP[0].sCPR[114].nSPOffsetLek= 2193;
sT[0].sCP[0].sCPR[115].nDCStart= 427;  		sT[0].sCP[0].sCPR[115].nDCNum =4;       sT[0].sCP[0].sCPR[115].nSCStart=431;        sT[0].sCP[0].sCPR[115].nAckStart=0;  	sT[0].sCP[0].sCPR[115].nAckNum=0;     sT[0].sCP[0].sCPR[115].nSPOffsetCS= 2208;       sT[0].sCP[0].sCPR[115].nSPOffsetLek= 2209;
sT[0].sCP[0].sCPR[116].nDCStart= 432;  		sT[0].sCP[0].sCPR[116].nDCNum =4;       sT[0].sCP[0].sCPR[116].nSCStart=436;        sT[0].sCP[0].sCPR[116].nAckStart=0;  	sT[0].sCP[0].sCPR[116].nAckNum=0;     sT[0].sCP[0].sCPR[116].nSPOffsetCS= 2224;       sT[0].sCP[0].sCPR[116].nSPOffsetLek= 2225;
sT[0].sCP[0].sCPR[117].nDCStart= 437;  		sT[0].sCP[0].sCPR[117].nDCNum =4;       sT[0].sCP[0].sCPR[117].nSCStart=441;        sT[0].sCP[0].sCPR[117].nAckStart=0;  	sT[0].sCP[0].sCPR[117].nAckNum=0;     sT[0].sCP[0].sCPR[117].nSPOffsetCS= 2240;       sT[0].sCP[0].sCPR[117].nSPOffsetLek= 2241;
sT[0].sCP[0].sCPR[118].nDCStart= 445;  		sT[0].sCP[0].sCPR[118].nDCNum =1;       sT[0].sCP[0].sCPR[118].nSCStart=446;        sT[0].sCP[0].sCPR[118].nAckStart=447;  	sT[0].sCP[0].sCPR[118].nAckNum=1;     sT[0].sCP[0].sCPR[118].nSPOffsetCS= 2272;       sT[0].sCP[0].sCPR[118].nSPOffsetLek= 2273;
sT[0].sCP[0].sCPR[119].nDCStart= 442;  		sT[0].sCP[0].sCPR[119].nDCNum =1;       sT[0].sCP[0].sCPR[119].nSCStart=443;        sT[0].sCP[0].sCPR[119].nAckStart=444;  	sT[0].sCP[0].sCPR[119].nAckNum=1;     sT[0].sCP[0].sCPR[119].nSPOffsetCS= 2256;       sT[0].sCP[0].sCPR[119].nSPOffsetLek= 2257;
sT[0].sCP[0].sCPR[120].nDCStart= 448;  		sT[0].sCP[0].sCPR[120].nDCNum =4;       sT[0].sCP[0].sCPR[120].nSCStart=453;        sT[0].sCP[0].sCPR[120].nAckStart=452;  	sT[0].sCP[0].sCPR[120].nAckNum=1;     sT[0].sCP[0].sCPR[120].nSPOffsetCS= 2309;       sT[0].sCP[0].sCPR[120].nSPOffsetLek= 2310;
sT[0].sCP[0].sCPR[121].nDCStart= 454;  		sT[0].sCP[0].sCPR[121].nDCNum =1;       sT[0].sCP[0].sCPR[121].nSCStart=455;        sT[0].sCP[0].sCPR[121].nAckStart=0;  	sT[0].sCP[0].sCPR[121].nAckNum=0;     sT[0].sCP[0].sCPR[121].nSPOffsetCS= 2325;       sT[0].sCP[0].sCPR[121].nSPOffsetLek= 2326;
sT[0].sCP[0].sCPR[122].nDCStart= 457;  		sT[0].sCP[0].sCPR[122].nDCNum =1;       sT[0].sCP[0].sCPR[122].nSCStart=458;        sT[0].sCP[0].sCPR[122].nAckStart=459;  	sT[0].sCP[0].sCPR[122].nAckNum=1;     sT[0].sCP[0].sCPR[122].nSPOffsetCS= 2341;       sT[0].sCP[0].sCPR[122].nSPOffsetLek= 2342;
sT[0].sCP[0].sCPR[123].nDCStart= 460;  		sT[0].sCP[0].sCPR[123].nDCNum =1;       sT[0].sCP[0].sCPR[123].nSCStart=461;        sT[0].sCP[0].sCPR[123].nAckStart=462;  	sT[0].sCP[0].sCPR[123].nAckNum=1;     sT[0].sCP[0].sCPR[123].nSPOffsetCS= 2357;       sT[0].sCP[0].sCPR[123].nSPOffsetLek= 2358;
sT[0].sCP[0].sCPR[124].nDCStart= 463;  		sT[0].sCP[0].sCPR[124].nDCNum =1;       sT[0].sCP[0].sCPR[124].nSCStart=464;        sT[0].sCP[0].sCPR[124].nAckStart=465;  	sT[0].sCP[0].sCPR[124].nAckNum=1;     sT[0].sCP[0].sCPR[124].nSPOffsetCS= 2373;       sT[0].sCP[0].sCPR[124].nSPOffsetLek= 2374;

sT[0].sCP[0].sCPR[125].nDCStart= 466;  		sT[0].sCP[0].sCPR[125].nDCNum =1;       sT[0].sCP[0].sCPR[125].nSCStart=467;        sT[0].sCP[0].sCPR[125].nAckStart=468;  	sT[0].sCP[0].sCPR[125].nAckNum=1;     sT[0].sCP[0].sCPR[125].nSPOffsetCS= 2389;       sT[0].sCP[0].sCPR[125].nSPOffsetLek= 2390;
sT[0].sCP[0].sCPR[126].nDCStart= 469;  		sT[0].sCP[0].sCPR[126].nDCNum =1;       sT[0].sCP[0].sCPR[126].nSCStart=470;        sT[0].sCP[0].sCPR[126].nAckStart=471;  	sT[0].sCP[0].sCPR[126].nAckNum=1;     sT[0].sCP[0].sCPR[126].nSPOffsetCS= 2405;       sT[0].sCP[0].sCPR[126].nSPOffsetLek= 2406;
sT[0].sCP[0].sCPR[127].nDCStart= 472;  		sT[0].sCP[0].sCPR[127].nDCNum =1;       sT[0].sCP[0].sCPR[127].nSCStart=473;        sT[0].sCP[0].sCPR[127].nAckStart=474;  	sT[0].sCP[0].sCPR[127].nAckNum=1;     sT[0].sCP[0].sCPR[127].nSPOffsetCS= 2421;       sT[0].sCP[0].sCPR[127].nSPOffsetLek= 2422;
sT[0].sCP[0].sCPR[128].nDCStart= 475;  		sT[0].sCP[0].sCPR[128].nDCNum =1;       sT[0].sCP[0].sCPR[128].nSCStart=476;        sT[0].sCP[0].sCPR[128].nAckStart=477;  	sT[0].sCP[0].sCPR[128].nAckNum=1;     sT[0].sCP[0].sCPR[128].nSPOffsetCS= 2437;       sT[0].sCP[0].sCPR[128].nSPOffsetLek= 2438;
sT[0].sCP[0].sCPR[129].nDCStart= 478;  		sT[0].sCP[0].sCPR[129].nDCNum =1;       sT[0].sCP[0].sCPR[129].nSCStart=479;        sT[0].sCP[0].sCPR[129].nAckStart=480;  	sT[0].sCP[0].sCPR[129].nAckNum=1;     sT[0].sCP[0].sCPR[129].nSPOffsetCS= 2453;       sT[0].sCP[0].sCPR[129].nSPOffsetLek= 2454;
sT[0].sCP[0].sCPR[130].nDCStart= 481;  		sT[0].sCP[0].sCPR[130].nDCNum =1;       sT[0].sCP[0].sCPR[130].nSCStart=482;        sT[0].sCP[0].sCPR[130].nAckStart=483;  	sT[0].sCP[0].sCPR[130].nAckNum=1;     sT[0].sCP[0].sCPR[130].nSPOffsetCS= 2469;       sT[0].sCP[0].sCPR[130].nSPOffsetLek= 2470;
sT[0].sCP[0].sCPR[131].nDCStart= 484;  		sT[0].sCP[0].sCPR[131].nDCNum =1;       sT[0].sCP[0].sCPR[131].nSCStart=485;        sT[0].sCP[0].sCPR[131].nAckStart=486;  	sT[0].sCP[0].sCPR[131].nAckNum=1;     sT[0].sCP[0].sCPR[131].nSPOffsetCS= 2485;       sT[0].sCP[0].sCPR[131].nSPOffsetLek= 2486;
sT[0].sCP[0].sCPR[132].nDCStart= 487;  		sT[0].sCP[0].sCPR[132].nDCNum =1;       sT[0].sCP[0].sCPR[132].nSCStart=488;        sT[0].sCP[0].sCPR[132].nAckStart=489;  	sT[0].sCP[0].sCPR[132].nAckNum=1;     sT[0].sCP[0].sCPR[132].nSPOffsetCS= 2501;       sT[0].sCP[0].sCPR[132].nSPOffsetLek= 2502;
sT[0].sCP[0].sCPR[133].nDCStart= 490;  		sT[0].sCP[0].sCPR[133].nDCNum =1;       sT[0].sCP[0].sCPR[133].nSCStart=491;        sT[0].sCP[0].sCPR[133].nAckStart=492;  	sT[0].sCP[0].sCPR[133].nAckNum=1;     sT[0].sCP[0].sCPR[133].nSPOffsetCS= 2517;       sT[0].sCP[0].sCPR[133].nSPOffsetLek= 2518;
sT[0].sCP[0].sCPR[134].nDCStart= 493;  		sT[0].sCP[0].sCPR[134].nDCNum =1;       sT[0].sCP[0].sCPR[134].nSCStart=494;        sT[0].sCP[0].sCPR[134].nAckStart=495;  	sT[0].sCP[0].sCPR[134].nAckNum=1;     sT[0].sCP[0].sCPR[134].nSPOffsetCS= 2533;       sT[0].sCP[0].sCPR[134].nSPOffsetLek= 2534;
sT[0].sCP[0].sCPR[135].nDCStart= 496;  		sT[0].sCP[0].sCPR[135].nDCNum =1;       sT[0].sCP[0].sCPR[135].nSCStart=497;        sT[0].sCP[0].sCPR[135].nAckStart=498;  	sT[0].sCP[0].sCPR[135].nAckNum=1;     sT[0].sCP[0].sCPR[135].nSPOffsetCS= 2549;       sT[0].sCP[0].sCPR[135].nSPOffsetLek= 2550;
sT[0].sCP[0].sCPR[136].nDCStart= 499;  		sT[0].sCP[0].sCPR[136].nDCNum =1;       sT[0].sCP[0].sCPR[136].nSCStart=500;        sT[0].sCP[0].sCPR[136].nAckStart=501;  	sT[0].sCP[0].sCPR[136].nAckNum=1;     sT[0].sCP[0].sCPR[136].nSPOffsetCS= 2565;       sT[0].sCP[0].sCPR[136].nSPOffsetLek= 2566;
sT[0].sCP[0].sCPR[137].nDCStart= 502;  		sT[0].sCP[0].sCPR[137].nDCNum =1;       sT[0].sCP[0].sCPR[137].nSCStart=503;        sT[0].sCP[0].sCPR[137].nAckStart=504;  	sT[0].sCP[0].sCPR[137].nAckNum=1;     sT[0].sCP[0].sCPR[137].nSPOffsetCS= 2581;       sT[0].sCP[0].sCPR[137].nSPOffsetLek= 2582;
sT[0].sCP[0].sCPR[138].nDCStart= 505;  		sT[0].sCP[0].sCPR[138].nDCNum =1;       sT[0].sCP[0].sCPR[138].nSCStart=506;        sT[0].sCP[0].sCPR[138].nAckStart=507;  	sT[0].sCP[0].sCPR[138].nAckNum=1;     sT[0].sCP[0].sCPR[138].nSPOffsetCS= 2597;       sT[0].sCP[0].sCPR[138].nSPOffsetLek= 2598;
sT[0].sCP[0].sCPR[139].nDCStart= 508;  		sT[0].sCP[0].sCPR[139].nDCNum =1;       sT[0].sCP[0].sCPR[139].nSCStart=509;        sT[0].sCP[0].sCPR[139].nAckStart=510;  	sT[0].sCP[0].sCPR[139].nAckNum=1;     sT[0].sCP[0].sCPR[139].nSPOffsetCS= 2613;       sT[0].sCP[0].sCPR[139].nSPOffsetLek= 2614;
sT[0].sCP[0].sCPR[140].nDCStart= 511;  		sT[0].sCP[0].sCPR[140].nDCNum =1;       sT[0].sCP[0].sCPR[140].nSCStart=512;        sT[0].sCP[0].sCPR[140].nAckStart=513;  	sT[0].sCP[0].sCPR[140].nAckNum=1;     sT[0].sCP[0].sCPR[140].nSPOffsetCS= 2629;       sT[0].sCP[0].sCPR[140].nSPOffsetLek= 2630;
sT[0].sCP[0].sCPR[141].nDCStart= 514;  		sT[0].sCP[0].sCPR[141].nDCNum =1;       sT[0].sCP[0].sCPR[141].nSCStart=515;        sT[0].sCP[0].sCPR[141].nAckStart=516;  	sT[0].sCP[0].sCPR[141].nAckNum=1;     sT[0].sCP[0].sCPR[141].nSPOffsetCS= 2645;       sT[0].sCP[0].sCPR[141].nSPOffsetLek= 2646;
sT[0].sCP[0].sCPR[142].nDCStart= 517;  		sT[0].sCP[0].sCPR[142].nDCNum =1;       sT[0].sCP[0].sCPR[142].nSCStart=518;        sT[0].sCP[0].sCPR[142].nAckStart=519;  	sT[0].sCP[0].sCPR[142].nAckNum=1;     sT[0].sCP[0].sCPR[142].nSPOffsetCS= 2661;       sT[0].sCP[0].sCPR[142].nSPOffsetLek= 2662;
sT[0].sCP[0].sCPR[143].nDCStart= 520;  		sT[0].sCP[0].sCPR[143].nDCNum =1;       sT[0].sCP[0].sCPR[143].nSCStart=521;        sT[0].sCP[0].sCPR[143].nAckStart=522;  	sT[0].sCP[0].sCPR[143].nAckNum=1;     sT[0].sCP[0].sCPR[143].nSPOffsetCS= 2677;       sT[0].sCP[0].sCPR[143].nSPOffsetLek= 2678;
sT[0].sCP[0].sCPR[144].nDCStart= 523;  		sT[0].sCP[0].sCPR[144].nDCNum =1;       sT[0].sCP[0].sCPR[144].nSCStart=524;        sT[0].sCP[0].sCPR[144].nAckStart=525;  	sT[0].sCP[0].sCPR[144].nAckNum=1;     sT[0].sCP[0].sCPR[144].nSPOffsetCS= 2693;       sT[0].sCP[0].sCPR[144].nSPOffsetLek= 2694;
sT[0].sCP[0].sCPR[145].nDCStart= 526;  		sT[0].sCP[0].sCPR[145].nDCNum =1;       sT[0].sCP[0].sCPR[145].nSCStart=527;        sT[0].sCP[0].sCPR[145].nAckStart=528;  	sT[0].sCP[0].sCPR[145].nAckNum=1;     sT[0].sCP[0].sCPR[145].nSPOffsetCS= 2709;       sT[0].sCP[0].sCPR[145].nSPOffsetLek= 2710;
sT[0].sCP[0].sCPR[146].nDCStart= 529;  		sT[0].sCP[0].sCPR[146].nDCNum =1;       sT[0].sCP[0].sCPR[146].nSCStart=530;        sT[0].sCP[0].sCPR[146].nAckStart=531;  	sT[0].sCP[0].sCPR[146].nAckNum=1;     sT[0].sCP[0].sCPR[146].nSPOffsetCS= 2725;       sT[0].sCP[0].sCPR[146].nSPOffsetLek= 2726;
sT[0].sCP[0].sCPR[147].nDCStart= 532;  		sT[0].sCP[0].sCPR[147].nDCNum =1;       sT[0].sCP[0].sCPR[147].nSCStart=533;        sT[0].sCP[0].sCPR[147].nAckStart=534;  	sT[0].sCP[0].sCPR[147].nAckNum=1;     sT[0].sCP[0].sCPR[147].nSPOffsetCS= 2741;       sT[0].sCP[0].sCPR[147].nSPOffsetLek= 2742;
sT[0].sCP[0].sCPR[148].nDCStart= 535;  		sT[0].sCP[0].sCPR[148].nDCNum =1;       sT[0].sCP[0].sCPR[148].nSCStart=536;        sT[0].sCP[0].sCPR[148].nAckStart=537;  	sT[0].sCP[0].sCPR[148].nAckNum=1;     sT[0].sCP[0].sCPR[148].nSPOffsetCS= 2757;       sT[0].sCP[0].sCPR[148].nSPOffsetLek= 2758;
sT[0].sCP[0].sCPR[149].nDCStart= 538;  		sT[0].sCP[0].sCPR[149].nDCNum =1;       sT[0].sCP[0].sCPR[149].nSCStart=539;        sT[0].sCP[0].sCPR[149].nAckStart=540;  	sT[0].sCP[0].sCPR[149].nAckNum=1;     sT[0].sCP[0].sCPR[149].nSPOffsetCS= 2773;       sT[0].sCP[0].sCPR[149].nSPOffsetLek= 2774;
sT[0].sCP[0].sCPR[150].nDCStart= 541;  		sT[0].sCP[0].sCPR[150].nDCNum =1;       sT[0].sCP[0].sCPR[150].nSCStart=542;        sT[0].sCP[0].sCPR[150].nAckStart=543;  	sT[0].sCP[0].sCPR[150].nAckNum=1;     sT[0].sCP[0].sCPR[150].nSPOffsetCS= 2789;       sT[0].sCP[0].sCPR[150].nSPOffsetLek= 2790;
sT[0].sCP[0].sCPR[151].nDCStart= 544;  		sT[0].sCP[0].sCPR[151].nDCNum =1;       sT[0].sCP[0].sCPR[151].nSCStart=545;        sT[0].sCP[0].sCPR[151].nAckStart=546;  	sT[0].sCP[0].sCPR[151].nAckNum=1;     sT[0].sCP[0].sCPR[151].nSPOffsetCS= 2805;       sT[0].sCP[0].sCPR[151].nSPOffsetLek= 2806;
sT[0].sCP[0].sCPR[152].nDCStart= 547;  		sT[0].sCP[0].sCPR[152].nDCNum =1;       sT[0].sCP[0].sCPR[152].nSCStart=548;        sT[0].sCP[0].sCPR[152].nAckStart=549;  	sT[0].sCP[0].sCPR[152].nAckNum=1;     sT[0].sCP[0].sCPR[152].nSPOffsetCS= 2821;       sT[0].sCP[0].sCPR[152].nSPOffsetLek= 2822;
sT[0].sCP[0].sCPR[153].nDCStart= 550;  		sT[0].sCP[0].sCPR[153].nDCNum =1;       sT[0].sCP[0].sCPR[153].nSCStart=551;        sT[0].sCP[0].sCPR[153].nAckStart=552;  	sT[0].sCP[0].sCPR[153].nAckNum=1;     sT[0].sCP[0].sCPR[153].nSPOffsetCS= 2837;       sT[0].sCP[0].sCPR[153].nSPOffsetLek= 2838;
sT[0].sCP[0].sCPR[154].nDCStart= 553;  		sT[0].sCP[0].sCPR[154].nDCNum =1;       sT[0].sCP[0].sCPR[154].nSCStart=554;        sT[0].sCP[0].sCPR[154].nAckStart=555;  	sT[0].sCP[0].sCPR[154].nAckNum=1;     sT[0].sCP[0].sCPR[154].nSPOffsetCS= 2853;       sT[0].sCP[0].sCPR[154].nSPOffsetLek= 2854;
sT[0].sCP[0].sCPR[155].nDCStart= 556;  		sT[0].sCP[0].sCPR[155].nDCNum =1;       sT[0].sCP[0].sCPR[155].nSCStart=557;        sT[0].sCP[0].sCPR[155].nAckStart=558;  	sT[0].sCP[0].sCPR[155].nAckNum=1;     sT[0].sCP[0].sCPR[155].nSPOffsetCS= 2869;       sT[0].sCP[0].sCPR[155].nSPOffsetLek= 2870;
sT[0].sCP[0].sCPR[156].nDCStart= 559;  		sT[0].sCP[0].sCPR[156].nDCNum =1;       sT[0].sCP[0].sCPR[156].nSCStart=560;        sT[0].sCP[0].sCPR[156].nAckStart=561;  	sT[0].sCP[0].sCPR[156].nAckNum=1;     sT[0].sCP[0].sCPR[156].nSPOffsetCS= 2885;       sT[0].sCP[0].sCPR[156].nSPOffsetLek= 2886;
sT[0].sCP[0].sCPR[157].nDCStart= 562;  		sT[0].sCP[0].sCPR[157].nDCNum =1;       sT[0].sCP[0].sCPR[157].nSCStart=563;        sT[0].sCP[0].sCPR[157].nAckStart=564;  	sT[0].sCP[0].sCPR[157].nAckNum=1;     sT[0].sCP[0].sCPR[157].nSPOffsetCS= 2901;       sT[0].sCP[0].sCPR[157].nSPOffsetLek= 2902;
sT[0].sCP[0].sCPR[158].nDCStart= 565;  		sT[0].sCP[0].sCPR[158].nDCNum =1;       sT[0].sCP[0].sCPR[158].nSCStart=566;        sT[0].sCP[0].sCPR[158].nAckStart=567;  	sT[0].sCP[0].sCPR[158].nAckNum=1;     sT[0].sCP[0].sCPR[158].nSPOffsetCS= 2917;       sT[0].sCP[0].sCPR[158].nSPOffsetLek= 2918;
sT[0].sCP[0].sCPR[159].nDCStart= 568;  		sT[0].sCP[0].sCPR[159].nDCNum =1;       sT[0].sCP[0].sCPR[159].nSCStart=569;        sT[0].sCP[0].sCPR[159].nAckStart=570;  	sT[0].sCP[0].sCPR[159].nAckNum=1;     sT[0].sCP[0].sCPR[159].nSPOffsetCS= 2933;       sT[0].sCP[0].sCPR[159].nSPOffsetLek= 2934;
sT[0].sCP[0].sCPR[160].nDCStart= 571;  		sT[0].sCP[0].sCPR[160].nDCNum =1;       sT[0].sCP[0].sCPR[160].nSCStart=572;        sT[0].sCP[0].sCPR[160].nAckStart=573;  	sT[0].sCP[0].sCPR[160].nAckNum=1;     sT[0].sCP[0].sCPR[160].nSPOffsetCS= 2949;       sT[0].sCP[0].sCPR[160].nSPOffsetLek= 2950;
sT[0].sCP[0].sCPR[161].nDCStart= 574;  		sT[0].sCP[0].sCPR[161].nDCNum =1;       sT[0].sCP[0].sCPR[161].nSCStart=575;        sT[0].sCP[0].sCPR[161].nAckStart=576;  	sT[0].sCP[0].sCPR[161].nAckNum=1;     sT[0].sCP[0].sCPR[161].nSPOffsetCS= 2965;       sT[0].sCP[0].sCPR[161].nSPOffsetLek= 2966;
sT[0].sCP[0].sCPR[162].nDCStart= 577;  		sT[0].sCP[0].sCPR[162].nDCNum =1;       sT[0].sCP[0].sCPR[162].nSCStart=578;        sT[0].sCP[0].sCPR[162].nAckStart=579;  	sT[0].sCP[0].sCPR[162].nAckNum=1;     sT[0].sCP[0].sCPR[162].nSPOffsetCS= 2981;       sT[0].sCP[0].sCPR[162].nSPOffsetLek= 2982;
sT[0].sCP[0].sCPR[163].nDCStart= 580;  		sT[0].sCP[0].sCPR[163].nDCNum =1;       sT[0].sCP[0].sCPR[163].nSCStart=581;        sT[0].sCP[0].sCPR[163].nAckStart=582;  	sT[0].sCP[0].sCPR[163].nAckNum=1;     sT[0].sCP[0].sCPR[163].nSPOffsetCS= 2997;       sT[0].sCP[0].sCPR[163].nSPOffsetLek= 2998;
sT[0].sCP[0].sCPR[164].nDCStart= 592;  		sT[0].sCP[0].sCPR[164].nDCNum =4;       sT[0].sCP[0].sCPR[164].nSCStart=596;        sT[0].sCP[0].sCPR[164].nAckStart=0;  	sT[0].sCP[0].sCPR[164].nAckNum=0;     sT[0].sCP[0].sCPR[164].nSPOffsetCS= 3061;       sT[0].sCP[0].sCPR[164].nSPOffsetLek= 3062;
sT[0].sCP[0].sCPR[165].nDCStart= 583;  		sT[0].sCP[0].sCPR[165].nDCNum =1;       sT[0].sCP[0].sCPR[165].nSCStart=584;        sT[0].sCP[0].sCPR[165].nAckStart=585;  	sT[0].sCP[0].sCPR[165].nAckNum=1;     sT[0].sCP[0].sCPR[165].nSPOffsetCS= 3013;       sT[0].sCP[0].sCPR[165].nSPOffsetLek= 3014;
sT[0].sCP[0].sCPR[166].nDCStart= 586;  		sT[0].sCP[0].sCPR[166].nDCNum =1;       sT[0].sCP[0].sCPR[166].nSCStart=587;        sT[0].sCP[0].sCPR[166].nAckStart=588;  	sT[0].sCP[0].sCPR[166].nAckNum=1;     sT[0].sCP[0].sCPR[166].nSPOffsetCS= 3029;       sT[0].sCP[0].sCPR[166].nSPOffsetLek= 3030;
sT[0].sCP[0].sCPR[167].nDCStart= 589;  		sT[0].sCP[0].sCPR[167].nDCNum =1;       sT[0].sCP[0].sCPR[167].nSCStart=590;        sT[0].sCP[0].sCPR[167].nAckStart=591;  	sT[0].sCP[0].sCPR[167].nAckNum=1;     sT[0].sCP[0].sCPR[167].nSPOffsetCS= 3045;       sT[0].sCP[0].sCPR[167].nSPOffsetLek= 3046;
sT[0].sCP[0].sCPR[168].nDCStart= 597;  		sT[0].sCP[0].sCPR[168].nDCNum =1;       sT[0].sCP[0].sCPR[168].nSCStart=598;        sT[0].sCP[0].sCPR[168].nAckStart=599;  	sT[0].sCP[0].sCPR[168].nAckNum=1;     sT[0].sCP[0].sCPR[168].nSPOffsetCS= 3077;       sT[0].sCP[0].sCPR[168].nSPOffsetLek= 3078;
sT[0].sCP[0].sCPR[169].nDCStart= 600;  		sT[0].sCP[0].sCPR[169].nDCNum =4;       sT[0].sCP[0].sCPR[169].nSCStart=605;        sT[0].sCP[0].sCPR[169].nAckStart=604;  	sT[0].sCP[0].sCPR[169].nAckNum=1;     sT[0].sCP[0].sCPR[169].nSPOffsetCS= 3114;       sT[0].sCP[0].sCPR[169].nSPOffsetLek= 3115;
sT[0].sCP[0].sCPR[170].nDCStart= 606;  		sT[0].sCP[0].sCPR[170].nDCNum =4;       sT[0].sCP[0].sCPR[170].nSCStart=611;        sT[0].sCP[0].sCPR[170].nAckStart=610;  	sT[0].sCP[0].sCPR[170].nAckNum=1;     sT[0].sCP[0].sCPR[170].nSPOffsetCS= 3151;       sT[0].sCP[0].sCPR[170].nSPOffsetLek= 3152;
sT[0].sCP[0].sCPR[171].nDCStart= 612;  		sT[0].sCP[0].sCPR[171].nDCNum =4;       sT[0].sCP[0].sCPR[171].nSCStart=617;        sT[0].sCP[0].sCPR[171].nAckStart=616;  	sT[0].sCP[0].sCPR[171].nAckNum=1;     sT[0].sCP[0].sCPR[171].nSPOffsetCS= 3188;       sT[0].sCP[0].sCPR[171].nSPOffsetLek= 3189;

sT[0].sCP[0].sCPR[172].nDCStart= 618;  		sT[0].sCP[0].sCPR[172].nDCNum =1;       sT[0].sCP[0].sCPR[172].nSCStart=619;        sT[0].sCP[0].sCPR[172].nAckStart=0;  	sT[0].sCP[0].sCPR[172].nAckNum=0;     sT[0].sCP[0].sCPR[172].nSPOffsetCS= 3204;       sT[0].sCP[0].sCPR[172].nSPOffsetLek= 3205;
sT[0].sCP[0].sCPR[173].nDCStart= 621;  		sT[0].sCP[0].sCPR[173].nDCNum =1;       sT[0].sCP[0].sCPR[173].nSCStart=622;        sT[0].sCP[0].sCPR[173].nAckStart=623;  	sT[0].sCP[0].sCPR[173].nAckNum=1;	  sT[0].sCP[0].sCPR[173].nSPOffsetCS= 3220;       sT[0].sCP[0].sCPR[173].nSPOffsetLek= 3221;
sT[0].sCP[0].sCPR[174].nDCStart= 624;  		sT[0].sCP[0].sCPR[174].nDCNum =1;       sT[0].sCP[0].sCPR[174].nSCStart=625;        sT[0].sCP[0].sCPR[174].nAckStart=626;  	sT[0].sCP[0].sCPR[174].nAckNum=1;     sT[0].sCP[0].sCPR[174].nSPOffsetCS= 3236;       sT[0].sCP[0].sCPR[174].nSPOffsetLek= 3237;
sT[0].sCP[0].sCPR[175].nDCStart= 627;  		sT[0].sCP[0].sCPR[175].nDCNum =1;       sT[0].sCP[0].sCPR[175].nSCStart=628;        sT[0].sCP[0].sCPR[175].nAckStart=0;  	sT[0].sCP[0].sCPR[175].nAckNum=0;     sT[0].sCP[0].sCPR[175].nSPOffsetCS= 3252;       sT[0].sCP[0].sCPR[175].nSPOffsetLek= 3253;
sT[0].sCP[0].sCPR[176].nDCStart= 630;  		sT[0].sCP[0].sCPR[176].nDCNum =1;       sT[0].sCP[0].sCPR[176].nSCStart=631;        sT[0].sCP[0].sCPR[176].nAckStart=632;  	sT[0].sCP[0].sCPR[176].nAckNum=1;     sT[0].sCP[0].sCPR[176].nSPOffsetCS= 3268;       sT[0].sCP[0].sCPR[176].nSPOffsetLek= 3269;
sT[0].sCP[0].sCPR[177].nDCStart= 633;  		sT[0].sCP[0].sCPR[177].nDCNum =1;       sT[0].sCP[0].sCPR[177].nSCStart=634;        sT[0].sCP[0].sCPR[177].nAckStart=0;  	sT[0].sCP[0].sCPR[177].nAckNum=0;     sT[0].sCP[0].sCPR[177].nSPOffsetCS= 3284;       sT[0].sCP[0].sCPR[177].nSPOffsetLek= 3285;
sT[0].sCP[0].sCPR[178].nDCStart= 636;  		sT[0].sCP[0].sCPR[178].nDCNum =1;       sT[0].sCP[0].sCPR[178].nSCStart=637;        sT[0].sCP[0].sCPR[178].nAckStart=638;  	sT[0].sCP[0].sCPR[178].nAckNum=1;     sT[0].sCP[0].sCPR[178].nSPOffsetCS= 3300;       sT[0].sCP[0].sCPR[178].nSPOffsetLek= 3301;
sT[0].sCP[0].sCPR[179].nDCStart= 639;  		sT[0].sCP[0].sCPR[179].nDCNum =1;       sT[0].sCP[0].sCPR[179].nSCStart=640;        sT[0].sCP[0].sCPR[179].nAckStart=0;  	sT[0].sCP[0].sCPR[179].nAckNum=0;     sT[0].sCP[0].sCPR[179].nSPOffsetCS= 3316;       sT[0].sCP[0].sCPR[179].nSPOffsetLek= 3317;
sT[0].sCP[0].sCPR[180].nDCStart= 642;  		sT[0].sCP[0].sCPR[180].nDCNum =1;       sT[0].sCP[0].sCPR[180].nSCStart=643;        sT[0].sCP[0].sCPR[180].nAckStart=644;  	sT[0].sCP[0].sCPR[180].nAckNum=1;     sT[0].sCP[0].sCPR[180].nSPOffsetCS= 3332;       sT[0].sCP[0].sCPR[180].nSPOffsetLek= 3333;
sT[0].sCP[0].sCPR[181].nDCStart= 645;  		sT[0].sCP[0].sCPR[181].nDCNum =1;       sT[0].sCP[0].sCPR[181].nSCStart=646;        sT[0].sCP[0].sCPR[181].nAckStart=647;  	sT[0].sCP[0].sCPR[181].nAckNum=1;     sT[0].sCP[0].sCPR[181].nSPOffsetCS= 3348;       sT[0].sCP[0].sCPR[181].nSPOffsetLek= 3349;
sT[0].sCP[0].sCPR[182].nDCStart= 648;  		sT[0].sCP[0].sCPR[182].nDCNum =1;       sT[0].sCP[0].sCPR[182].nSCStart=649;        sT[0].sCP[0].sCPR[182].nAckStart=650;  	sT[0].sCP[0].sCPR[182].nAckNum=1;     sT[0].sCP[0].sCPR[182].nSPOffsetCS= 3364;       sT[0].sCP[0].sCPR[182].nSPOffsetLek= 3365;
sT[0].sCP[0].sCPR[183].nDCStart= 651;  		sT[0].sCP[0].sCPR[183].nDCNum =1;       sT[0].sCP[0].sCPR[183].nSCStart=652;        sT[0].sCP[0].sCPR[183].nAckStart=0;  	sT[0].sCP[0].sCPR[183].nAckNum=0;     sT[0].sCP[0].sCPR[183].nSPOffsetCS= 3380;       sT[0].sCP[0].sCPR[183].nSPOffsetLek= 3381;
sT[0].sCP[0].sCPR[184].nDCStart= 654;  		sT[0].sCP[0].sCPR[184].nDCNum =1;       sT[0].sCP[0].sCPR[184].nSCStart=655;        sT[0].sCP[0].sCPR[184].nAckStart=656;  	sT[0].sCP[0].sCPR[184].nAckNum=1;     sT[0].sCP[0].sCPR[184].nSPOffsetCS= 3396;       sT[0].sCP[0].sCPR[184].nSPOffsetLek= 3397;
sT[0].sCP[0].sCPR[185].nDCStart= 657;  		sT[0].sCP[0].sCPR[185].nDCNum =1;       sT[0].sCP[0].sCPR[185].nSCStart=658;        sT[0].sCP[0].sCPR[185].nAckStart=659;  	sT[0].sCP[0].sCPR[185].nAckNum=1;     sT[0].sCP[0].sCPR[185].nSPOffsetCS= 3412;       sT[0].sCP[0].sCPR[185].nSPOffsetLek= 3413;
sT[0].sCP[0].sCPR[186].nDCStart= 660;  		sT[0].sCP[0].sCPR[186].nDCNum =1;       sT[0].sCP[0].sCPR[186].nSCStart=661;        sT[0].sCP[0].sCPR[186].nAckStart=0;  	sT[0].sCP[0].sCPR[186].nAckNum=0;     sT[0].sCP[0].sCPR[186].nSPOffsetCS= 3428;       sT[0].sCP[0].sCPR[186].nSPOffsetLek= 3429;
sT[0].sCP[0].sCPR[187].nDCStart= 663;  		sT[0].sCP[0].sCPR[187].nDCNum =1;       sT[0].sCP[0].sCPR[187].nSCStart=664;        sT[0].sCP[0].sCPR[187].nAckStart=0;  	sT[0].sCP[0].sCPR[187].nAckNum=0;     sT[0].sCP[0].sCPR[187].nSPOffsetCS= 3444;       sT[0].sCP[0].sCPR[187].nSPOffsetLek= 3445;
sT[0].sCP[0].sCPR[188].nDCStart= 666;  		sT[0].sCP[0].sCPR[188].nDCNum =1;       sT[0].sCP[0].sCPR[188].nSCStart=667;        sT[0].sCP[0].sCPR[188].nAckStart=0;  	sT[0].sCP[0].sCPR[188].nAckNum=0;     sT[0].sCP[0].sCPR[188].nSPOffsetCS= 3460;       sT[0].sCP[0].sCPR[188].nSPOffsetLek= 3461;
sT[0].sCP[0].sCPR[189].nDCStart= 669;  		sT[0].sCP[0].sCPR[189].nDCNum =4;       sT[0].sCP[0].sCPR[189].nSCStart=674;        sT[0].sCP[0].sCPR[189].nAckStart=673;  	sT[0].sCP[0].sCPR[189].nAckNum=1;     sT[0].sCP[0].sCPR[189].nSPOffsetCS= 3497;       sT[0].sCP[0].sCPR[189].nSPOffsetLek= 3498;
sT[0].sCP[0].sCPR[190].nDCStart= 675;  		sT[0].sCP[0].sCPR[190].nDCNum =4;       sT[0].sCP[0].sCPR[190].nSCStart=679;        sT[0].sCP[0].sCPR[190].nAckStart=0;  	sT[0].sCP[0].sCPR[190].nAckNum=0;     sT[0].sCP[0].sCPR[190].nSPOffsetCS= 3515;       sT[0].sCP[0].sCPR[190].nSPOffsetLek= 3516;
sT[0].sCP[0].sCPR[191].nDCStart= 680;  		sT[0].sCP[0].sCPR[191].nDCNum =4;       sT[0].sCP[0].sCPR[191].nSCStart=684;        sT[0].sCP[0].sCPR[191].nAckStart=0;  	sT[0].sCP[0].sCPR[191].nAckNum=0;     sT[0].sCP[0].sCPR[191].nSPOffsetCS= 3533;       sT[0].sCP[0].sCPR[191].nSPOffsetLek= 3534;
sT[0].sCP[0].sCPR[192].nDCStart= 685;  		sT[0].sCP[0].sCPR[192].nDCNum =4;       sT[0].sCP[0].sCPR[192].nSCStart=689;        sT[0].sCP[0].sCPR[192].nAckStart=0;  	sT[0].sCP[0].sCPR[192].nAckNum=0;     sT[0].sCP[0].sCPR[192].nSPOffsetCS= 3551;       sT[0].sCP[0].sCPR[192].nSPOffsetLek= 3552;
sT[0].sCP[0].sCPR[193].nDCStart= 690;  		sT[0].sCP[0].sCPR[193].nDCNum =4;       sT[0].sCP[0].sCPR[193].nSCStart=694;        sT[0].sCP[0].sCPR[193].nAckStart=0;  	sT[0].sCP[0].sCPR[193].nAckNum=0;     sT[0].sCP[0].sCPR[193].nSPOffsetCS= 3567;       sT[0].sCP[0].sCPR[193].nSPOffsetLek= 3568;
sT[0].sCP[0].sCPR[194].nDCStart= 695;  		sT[0].sCP[0].sCPR[194].nDCNum =1;       sT[0].sCP[0].sCPR[194].nSCStart=696;        sT[0].sCP[0].sCPR[194].nAckStart=697;  	sT[0].sCP[0].sCPR[194].nAckNum=1;     sT[0].sCP[0].sCPR[194].nSPOffsetCS= 3583;       sT[0].sCP[0].sCPR[194].nSPOffsetLek= 3584;
sT[0].sCP[0].sCPR[195].nDCStart= 698;  		sT[0].sCP[0].sCPR[195].nDCNum =4;       sT[0].sCP[0].sCPR[195].nSCStart=702;        sT[0].sCP[0].sCPR[195].nAckStart=0;  	sT[0].sCP[0].sCPR[195].nAckNum=0;     sT[0].sCP[0].sCPR[195].nSPOffsetCS= 3601;       sT[0].sCP[0].sCPR[195].nSPOffsetLek= 3602;
sT[0].sCP[0].sCPR[196].nDCStart= 703;  		sT[0].sCP[0].sCPR[196].nDCNum =4;       sT[0].sCP[0].sCPR[196].nSCStart=707;        sT[0].sCP[0].sCPR[196].nAckStart=0;  	sT[0].sCP[0].sCPR[196].nAckNum=0;     sT[0].sCP[0].sCPR[196].nSPOffsetCS= 3619;       sT[0].sCP[0].sCPR[196].nSPOffsetLek= 3620;
sT[0].sCP[0].sCPR[197].nDCStart= 708;  		sT[0].sCP[0].sCPR[197].nDCNum =1;       sT[0].sCP[0].sCPR[197].nSCStart=709;        sT[0].sCP[0].sCPR[197].nAckStart=710;  	sT[0].sCP[0].sCPR[197].nAckNum=1;     sT[0].sCP[0].sCPR[197].nSPOffsetCS= 3635;       sT[0].sCP[0].sCPR[197].nSPOffsetLek= 3636;
sT[0].sCP[0].sCPR[198].nDCStart= 711;  		sT[0].sCP[0].sCPR[198].nDCNum =1;       sT[0].sCP[0].sCPR[198].nSCStart=712;        sT[0].sCP[0].sCPR[198].nAckStart=713;  	sT[0].sCP[0].sCPR[198].nAckNum=1;     sT[0].sCP[0].sCPR[198].nSPOffsetCS= 3651;       sT[0].sCP[0].sCPR[198].nSPOffsetLek= 3652;
sT[0].sCP[0].sCPR[199].nDCStart= 714;  		sT[0].sCP[0].sCPR[199].nDCNum =4;       sT[0].sCP[0].sCPR[199].nSCStart=718;        sT[0].sCP[0].sCPR[199].nAckStart=0;  	sT[0].sCP[0].sCPR[199].nAckNum=0;     sT[0].sCP[0].sCPR[199].nSPOffsetCS= 3669;       sT[0].sCP[0].sCPR[199].nSPOffsetLek= 3670;
sT[0].sCP[0].sCPR[200].nDCStart= 719;  		sT[0].sCP[0].sCPR[200].nDCNum =1;       sT[0].sCP[0].sCPR[200].nSCStart=720;        sT[0].sCP[0].sCPR[200].nAckStart=721;  	sT[0].sCP[0].sCPR[200].nAckNum=1;     sT[0].sCP[0].sCPR[200].nSPOffsetCS= 3685;       sT[0].sCP[0].sCPR[200].nSPOffsetLek= 3686;
sT[0].sCP[0].sCPR[201].nDCStart= 722;  		sT[0].sCP[0].sCPR[201].nDCNum =1;       sT[0].sCP[0].sCPR[201].nSCStart=723;        sT[0].sCP[0].sCPR[201].nAckStart=724;  	sT[0].sCP[0].sCPR[201].nAckNum=1;     sT[0].sCP[0].sCPR[201].nSPOffsetCS= 3701;       sT[0].sCP[0].sCPR[201].nSPOffsetLek= 3702;

sT[0].sCP[0].sCPR[202].nDCStart= 725;  		sT[0].sCP[0].sCPR[202].nDCNum =4;       sT[0].sCP[0].sCPR[202].nSCStart=729;        sT[0].sCP[0].sCPR[202].nAckStart=0;  	sT[0].sCP[0].sCPR[202].nAckNum=0;     sT[0].sCP[0].sCPR[202].nSPOffsetCS= 3717;       sT[0].sCP[0].sCPR[202].nSPOffsetLek= 3718;
sT[0].sCP[0].sCPR[203].nDCStart= 730;  		sT[0].sCP[0].sCPR[203].nDCNum =4;       sT[0].sCP[0].sCPR[203].nSCStart=734;        sT[0].sCP[0].sCPR[203].nAckStart=0;  	sT[0].sCP[0].sCPR[203].nAckNum=0;     sT[0].sCP[0].sCPR[203].nSPOffsetCS= 3735;       sT[0].sCP[0].sCPR[203].nSPOffsetLek= 3736;
sT[0].sCP[0].sCPR[204].nDCStart= 735;  		sT[0].sCP[0].sCPR[204].nDCNum =4;       sT[0].sCP[0].sCPR[204].nSCStart=739;        sT[0].sCP[0].sCPR[204].nAckStart=0;  	sT[0].sCP[0].sCPR[204].nAckNum=0;     sT[0].sCP[0].sCPR[204].nSPOffsetCS= 3751;       sT[0].sCP[0].sCPR[204].nSPOffsetLek= 3752;
sT[0].sCP[0].sCPR[205].nDCStart= 740;  		sT[0].sCP[0].sCPR[205].nDCNum =4;       sT[0].sCP[0].sCPR[205].nSCStart=744;        sT[0].sCP[0].sCPR[205].nAckStart=0;  	sT[0].sCP[0].sCPR[205].nAckNum=0;     sT[0].sCP[0].sCPR[205].nSPOffsetCS= 3767;       sT[0].sCP[0].sCPR[205].nSPOffsetLek= 3768;
sT[0].sCP[0].sCPR[206].nDCStart= 745;  		sT[0].sCP[0].sCPR[206].nDCNum =4;       sT[0].sCP[0].sCPR[206].nSCStart=749;        sT[0].sCP[0].sCPR[206].nAckStart=0;  	sT[0].sCP[0].sCPR[206].nAckNum=0;     sT[0].sCP[0].sCPR[206].nSPOffsetCS= 3785;       sT[0].sCP[0].sCPR[206].nSPOffsetLek= 3786;

sT[0].sCP[0].sCPR[207].nDCStart= 750;  		sT[0].sCP[0].sCPR[207].nDCNum =1;       sT[0].sCP[0].sCPR[207].nSCStart=751;        sT[0].sCP[0].sCPR[207].nAckStart=752;  	sT[0].sCP[0].sCPR[207].nAckNum=1;     sT[0].sCP[0].sCPR[207].nSPOffsetCS= 3801;       sT[0].sCP[0].sCPR[207].nSPOffsetLek= 3802;
sT[0].sCP[0].sCPR[208].nDCStart= 753;  		sT[0].sCP[0].sCPR[208].nDCNum =1;       sT[0].sCP[0].sCPR[208].nSCStart=754;        sT[0].sCP[0].sCPR[208].nAckStart=755;  	sT[0].sCP[0].sCPR[208].nAckNum=1;     sT[0].sCP[0].sCPR[208].nSPOffsetCS= 3817;       sT[0].sCP[0].sCPR[208].nSPOffsetLek= 3818;
sT[0].sCP[0].sCPR[209].nDCStart= 756;  		sT[0].sCP[0].sCPR[209].nDCNum =1;       sT[0].sCP[0].sCPR[209].nSCStart=757;        sT[0].sCP[0].sCPR[209].nAckStart=758;  	sT[0].sCP[0].sCPR[209].nAckNum=1;     sT[0].sCP[0].sCPR[209].nSPOffsetCS= 3833;       sT[0].sCP[0].sCPR[209].nSPOffsetLek= 3834;
sT[0].sCP[0].sCPR[210].nDCStart= 759;  		sT[0].sCP[0].sCPR[210].nDCNum =1;       sT[0].sCP[0].sCPR[210].nSCStart=760;        sT[0].sCP[0].sCPR[210].nAckStart=761;  	sT[0].sCP[0].sCPR[210].nAckNum=1;     sT[0].sCP[0].sCPR[210].nSPOffsetCS= 3849;       sT[0].sCP[0].sCPR[210].nSPOffsetLek= 3850;
sT[0].sCP[0].sCPR[211].nDCStart= 762;  		sT[0].sCP[0].sCPR[211].nDCNum =1;       sT[0].sCP[0].sCPR[211].nSCStart=763;        sT[0].sCP[0].sCPR[211].nAckStart=764;  	sT[0].sCP[0].sCPR[211].nAckNum=1;     sT[0].sCP[0].sCPR[211].nSPOffsetCS= 3865;       sT[0].sCP[0].sCPR[211].nSPOffsetLek= 3866;
sT[0].sCP[0].sCPR[212].nDCStart= 765;  		sT[0].sCP[0].sCPR[212].nDCNum =1;       sT[0].sCP[0].sCPR[212].nSCStart=766;        sT[0].sCP[0].sCPR[212].nAckStart=767;  	sT[0].sCP[0].sCPR[212].nAckNum=1;     sT[0].sCP[0].sCPR[212].nSPOffsetCS= 3881;       sT[0].sCP[0].sCPR[212].nSPOffsetLek= 3882;
sT[0].sCP[0].sCPR[213].nDCStart= 768;  		sT[0].sCP[0].sCPR[213].nDCNum =1;       sT[0].sCP[0].sCPR[213].nSCStart=769;        sT[0].sCP[0].sCPR[213].nAckStart=770;  	sT[0].sCP[0].sCPR[213].nAckNum=1;     sT[0].sCP[0].sCPR[213].nSPOffsetCS= 3897;       sT[0].sCP[0].sCPR[213].nSPOffsetLek= 3898;
sT[0].sCP[0].sCPR[214].nDCStart= 771;  		sT[0].sCP[0].sCPR[214].nDCNum =1;       sT[0].sCP[0].sCPR[214].nSCStart=772;        sT[0].sCP[0].sCPR[214].nAckStart=773;  	sT[0].sCP[0].sCPR[214].nAckNum=1;     sT[0].sCP[0].sCPR[214].nSPOffsetCS= 3913;       sT[0].sCP[0].sCPR[214].nSPOffsetLek= 3914;
sT[0].sCP[0].sCPR[215].nDCStart= 774;  		sT[0].sCP[0].sCPR[215].nDCNum =1;       sT[0].sCP[0].sCPR[215].nSCStart=775;        sT[0].sCP[0].sCPR[215].nAckStart=776;  	sT[0].sCP[0].sCPR[215].nAckNum=1;     sT[0].sCP[0].sCPR[215].nSPOffsetCS= 3929;       sT[0].sCP[0].sCPR[215].nSPOffsetLek= 3930;
sT[0].sCP[0].sCPR[216].nDCStart= 777;  		sT[0].sCP[0].sCPR[216].nDCNum =1;       sT[0].sCP[0].sCPR[216].nSCStart=778;        sT[0].sCP[0].sCPR[216].nAckStart=779;  	sT[0].sCP[0].sCPR[216].nAckNum=1;     sT[0].sCP[0].sCPR[216].nSPOffsetCS= 3945;       sT[0].sCP[0].sCPR[216].nSPOffsetLek= 3946;
sT[0].sCP[0].sCPR[217].nDCStart= 780;  		sT[0].sCP[0].sCPR[217].nDCNum =1;       sT[0].sCP[0].sCPR[217].nSCStart=781;        sT[0].sCP[0].sCPR[217].nAckStart=782;  	sT[0].sCP[0].sCPR[217].nAckNum=1;     sT[0].sCP[0].sCPR[217].nSPOffsetCS= 3961;       sT[0].sCP[0].sCPR[217].nSPOffsetLek= 3962;
sT[0].sCP[0].sCPR[218].nDCStart= 783;  		sT[0].sCP[0].sCPR[218].nDCNum =1;       sT[0].sCP[0].sCPR[218].nSCStart=784;        sT[0].sCP[0].sCPR[218].nAckStart=785;  	sT[0].sCP[0].sCPR[218].nAckNum=1;     sT[0].sCP[0].sCPR[218].nSPOffsetCS= 3977;       sT[0].sCP[0].sCPR[218].nSPOffsetLek= 3978;
sT[0].sCP[0].sCPR[219].nDCStart= 786;  		sT[0].sCP[0].sCPR[219].nDCNum =1;       sT[0].sCP[0].sCPR[219].nSCStart=787;        sT[0].sCP[0].sCPR[219].nAckStart=788;  	sT[0].sCP[0].sCPR[219].nAckNum=1;     sT[0].sCP[0].sCPR[219].nSPOffsetCS= 3993;       sT[0].sCP[0].sCPR[219].nSPOffsetLek= 3994;
sT[0].sCP[0].sCPR[220].nDCStart= 789;  		sT[0].sCP[0].sCPR[220].nDCNum =1;       sT[0].sCP[0].sCPR[220].nSCStart=790;        sT[0].sCP[0].sCPR[220].nAckStart=791;  	sT[0].sCP[0].sCPR[220].nAckNum=1;     sT[0].sCP[0].sCPR[220].nSPOffsetCS= 4009;       sT[0].sCP[0].sCPR[220].nSPOffsetLek= 4010;
sT[0].sCP[0].sCPR[221].nDCStart= 792;  		sT[0].sCP[0].sCPR[221].nDCNum =1;       sT[0].sCP[0].sCPR[221].nSCStart=793;        sT[0].sCP[0].sCPR[221].nAckStart=794;  	sT[0].sCP[0].sCPR[221].nAckNum=1;     sT[0].sCP[0].sCPR[221].nSPOffsetCS= 4025;       sT[0].sCP[0].sCPR[221].nSPOffsetLek= 4026;
sT[0].sCP[0].sCPR[222].nDCStart= 795;  		sT[0].sCP[0].sCPR[222].nDCNum =1;       sT[0].sCP[0].sCPR[222].nSCStart=796;        sT[0].sCP[0].sCPR[222].nAckStart=797;  	sT[0].sCP[0].sCPR[222].nAckNum=1;     sT[0].sCP[0].sCPR[222].nSPOffsetCS= 4041;       sT[0].sCP[0].sCPR[222].nSPOffsetLek= 4042;
sT[0].sCP[0].sCPR[223].nDCStart= 798;  		sT[0].sCP[0].sCPR[223].nDCNum =1;       sT[0].sCP[0].sCPR[223].nSCStart=799;        sT[0].sCP[0].sCPR[223].nAckStart=800;  	sT[0].sCP[0].sCPR[223].nAckNum=1;     sT[0].sCP[0].sCPR[223].nSPOffsetCS= 4057;       sT[0].sCP[0].sCPR[223].nSPOffsetLek= 4058;
sT[0].sCP[0].sCPR[224].nDCStart= 801;  		sT[0].sCP[0].sCPR[224].nDCNum =1;       sT[0].sCP[0].sCPR[224].nSCStart=802;        sT[0].sCP[0].sCPR[224].nAckStart=803;  	sT[0].sCP[0].sCPR[224].nAckNum=1;     sT[0].sCP[0].sCPR[224].nSPOffsetCS= 4073;       sT[0].sCP[0].sCPR[224].nSPOffsetLek= 4074;
sT[0].sCP[0].sCPR[225].nDCStart= 804;  		sT[0].sCP[0].sCPR[225].nDCNum =1;       sT[0].sCP[0].sCPR[225].nSCStart=805;        sT[0].sCP[0].sCPR[225].nAckStart=806;  	sT[0].sCP[0].sCPR[225].nAckNum=1;     sT[0].sCP[0].sCPR[225].nSPOffsetCS= 4089;       sT[0].sCP[0].sCPR[225].nSPOffsetLek= 4090;
sT[0].sCP[0].sCPR[226].nDCStart= 807;  		sT[0].sCP[0].sCPR[226].nDCNum =1;       sT[0].sCP[0].sCPR[226].nSCStart=808;        sT[0].sCP[0].sCPR[226].nAckStart=809;  	sT[0].sCP[0].sCPR[226].nAckNum=1;     sT[0].sCP[0].sCPR[226].nSPOffsetCS= 4105;       sT[0].sCP[0].sCPR[226].nSPOffsetLek= 4106;
sT[0].sCP[0].sCPR[227].nDCStart= 810;  		sT[0].sCP[0].sCPR[227].nDCNum =1;       sT[0].sCP[0].sCPR[227].nSCStart=811;        sT[0].sCP[0].sCPR[227].nAckStart=812;  	sT[0].sCP[0].sCPR[227].nAckNum=1;     sT[0].sCP[0].sCPR[227].nSPOffsetCS= 4121;       sT[0].sCP[0].sCPR[227].nSPOffsetLek= 4122;
sT[0].sCP[0].sCPR[228].nDCStart= 813;  		sT[0].sCP[0].sCPR[228].nDCNum =1;       sT[0].sCP[0].sCPR[228].nSCStart=814;        sT[0].sCP[0].sCPR[228].nAckStart=815;  	sT[0].sCP[0].sCPR[228].nAckNum=1;     sT[0].sCP[0].sCPR[228].nSPOffsetCS= 4137;       sT[0].sCP[0].sCPR[228].nSPOffsetLek= 4138;
sT[0].sCP[0].sCPR[229].nDCStart= 816;  		sT[0].sCP[0].sCPR[229].nDCNum =1;       sT[0].sCP[0].sCPR[229].nSCStart=817;        sT[0].sCP[0].sCPR[229].nAckStart=818;  	sT[0].sCP[0].sCPR[229].nAckNum=1;     sT[0].sCP[0].sCPR[229].nSPOffsetCS= 4153;       sT[0].sCP[0].sCPR[229].nSPOffsetLek= 4154;
sT[0].sCP[0].sCPR[230].nDCStart= 819;  		sT[0].sCP[0].sCPR[230].nDCNum =4;       sT[0].sCP[0].sCPR[230].nSCStart=823;        sT[0].sCP[0].sCPR[230].nAckStart=0;  	sT[0].sCP[0].sCPR[230].nAckNum=0;     sT[0].sCP[0].sCPR[230].nSPOffsetCS= 4169;       sT[0].sCP[0].sCPR[230].nSPOffsetLek= 4170;
sT[0].sCP[0].sCPR[231].nDCStart= 825;  		sT[0].sCP[0].sCPR[231].nDCNum =1;       sT[0].sCP[0].sCPR[231].nSCStart=826;        sT[0].sCP[0].sCPR[231].nAckStart=827;  	sT[0].sCP[0].sCPR[231].nAckNum=1;     sT[0].sCP[0].sCPR[231].nSPOffsetCS= 4185;       sT[0].sCP[0].sCPR[231].nSPOffsetLek= 4186;
sT[0].sCP[0].sCPR[232].nDCStart= 828;  		sT[0].sCP[0].sCPR[232].nDCNum =4;       sT[0].sCP[0].sCPR[232].nSCStart=832;        sT[0].sCP[0].sCPR[232].nAckStart=0;  	sT[0].sCP[0].sCPR[232].nAckNum=0;     sT[0].sCP[0].sCPR[232].nSPOffsetCS= 4203;       sT[0].sCP[0].sCPR[232].nSPOffsetLek= 4204;
sT[0].sCP[0].sCPR[233].nDCStart= 896;  		sT[0].sCP[0].sCPR[233].nDCNum =4;       sT[0].sCP[0].sCPR[233].nSCStart=900;        sT[0].sCP[0].sCPR[233].nAckStart=0;  	sT[0].sCP[0].sCPR[233].nAckNum=0;     sT[0].sCP[0].sCPR[233].nSPOffsetCS= 4555;       sT[0].sCP[0].sCPR[233].nSPOffsetLek= 4556;
sT[0].sCP[0].sCPR[234].nDCStart= 901;  		sT[0].sCP[0].sCPR[234].nDCNum =4;       sT[0].sCP[0].sCPR[234].nSCStart=905;        sT[0].sCP[0].sCPR[234].nAckStart=0;  	sT[0].sCP[0].sCPR[234].nAckNum=0;     sT[0].sCP[0].sCPR[234].nSPOffsetCS= 4571;       sT[0].sCP[0].sCPR[234].nSPOffsetLek= 4572;
sT[0].sCP[0].sCPR[235].nDCStart= 906;  		sT[0].sCP[0].sCPR[235].nDCNum =4;       sT[0].sCP[0].sCPR[235].nSCStart=910;        sT[0].sCP[0].sCPR[235].nAckStart=0;  	sT[0].sCP[0].sCPR[235].nAckNum=0;     sT[0].sCP[0].sCPR[235].nSPOffsetCS= 4589;       sT[0].sCP[0].sCPR[235].nSPOffsetLek= 4590;

sT[0].sCP[0].sCPR[236].nDCStart= 833;  		sT[0].sCP[0].sCPR[236].nDCNum =1;       sT[0].sCP[0].sCPR[236].nSCStart=834;        sT[0].sCP[0].sCPR[236].nAckStart=835;  	sT[0].sCP[0].sCPR[236].nAckNum=1;     sT[0].sCP[0].sCPR[236].nSPOffsetCS= 4219;       sT[0].sCP[0].sCPR[236].nSPOffsetLek= 4220;
sT[0].sCP[0].sCPR[237].nDCStart= 836;  		sT[0].sCP[0].sCPR[237].nDCNum =1;       sT[0].sCP[0].sCPR[237].nSCStart=837;        sT[0].sCP[0].sCPR[237].nAckStart=838;  	sT[0].sCP[0].sCPR[237].nAckNum=1;     sT[0].sCP[0].sCPR[237].nSPOffsetCS= 4235;       sT[0].sCP[0].sCPR[237].nSPOffsetLek= 4236;
sT[0].sCP[0].sCPR[238].nDCStart= 839;  		sT[0].sCP[0].sCPR[238].nDCNum =1;       sT[0].sCP[0].sCPR[238].nSCStart=840;        sT[0].sCP[0].sCPR[238].nAckStart=841;  	sT[0].sCP[0].sCPR[238].nAckNum=1;     sT[0].sCP[0].sCPR[238].nSPOffsetCS= 4251;       sT[0].sCP[0].sCPR[238].nSPOffsetLek= 4252;
sT[0].sCP[0].sCPR[239].nDCStart= 842;  		sT[0].sCP[0].sCPR[239].nDCNum =1;       sT[0].sCP[0].sCPR[239].nSCStart=843;        sT[0].sCP[0].sCPR[239].nAckStart=844;  	sT[0].sCP[0].sCPR[239].nAckNum=1;     sT[0].sCP[0].sCPR[239].nSPOffsetCS= 4267;       sT[0].sCP[0].sCPR[239].nSPOffsetLek= 4268;
sT[0].sCP[0].sCPR[240].nDCStart= 845;  		sT[0].sCP[0].sCPR[240].nDCNum =1;       sT[0].sCP[0].sCPR[240].nSCStart=846;        sT[0].sCP[0].sCPR[240].nAckStart=847;  	sT[0].sCP[0].sCPR[240].nAckNum=1;     sT[0].sCP[0].sCPR[240].nSPOffsetCS= 4283;       sT[0].sCP[0].sCPR[240].nSPOffsetLek= 4284;
sT[0].sCP[0].sCPR[241].nDCStart= 848;  		sT[0].sCP[0].sCPR[241].nDCNum =1;       sT[0].sCP[0].sCPR[241].nSCStart=849;        sT[0].sCP[0].sCPR[241].nAckStart=850;  	sT[0].sCP[0].sCPR[241].nAckNum=1;     sT[0].sCP[0].sCPR[241].nSPOffsetCS= 4299;       sT[0].sCP[0].sCPR[241].nSPOffsetLek= 4300;
sT[0].sCP[0].sCPR[242].nDCStart= 851;  		sT[0].sCP[0].sCPR[242].nDCNum =1;       sT[0].sCP[0].sCPR[242].nSCStart=852;        sT[0].sCP[0].sCPR[242].nAckStart=853;  	sT[0].sCP[0].sCPR[242].nAckNum=1;     sT[0].sCP[0].sCPR[242].nSPOffsetCS= 4315;       sT[0].sCP[0].sCPR[242].nSPOffsetLek= 4316;
sT[0].sCP[0].sCPR[243].nDCStart= 854;  		sT[0].sCP[0].sCPR[243].nDCNum =1;       sT[0].sCP[0].sCPR[243].nSCStart=855;        sT[0].sCP[0].sCPR[243].nAckStart=856;  	sT[0].sCP[0].sCPR[243].nAckNum=1;     sT[0].sCP[0].sCPR[243].nSPOffsetCS= 4331;       sT[0].sCP[0].sCPR[243].nSPOffsetLek= 4332;
sT[0].sCP[0].sCPR[244].nDCStart= 857;  		sT[0].sCP[0].sCPR[244].nDCNum =1;       sT[0].sCP[0].sCPR[244].nSCStart=858;        sT[0].sCP[0].sCPR[244].nAckStart=859;  	sT[0].sCP[0].sCPR[244].nAckNum=1;     sT[0].sCP[0].sCPR[244].nSPOffsetCS= 4347;       sT[0].sCP[0].sCPR[244].nSPOffsetLek= 4348;
sT[0].sCP[0].sCPR[245].nDCStart= 860;  		sT[0].sCP[0].sCPR[245].nDCNum =1;       sT[0].sCP[0].sCPR[245].nSCStart=861;        sT[0].sCP[0].sCPR[245].nAckStart=862;  	sT[0].sCP[0].sCPR[245].nAckNum=1;     sT[0].sCP[0].sCPR[245].nSPOffsetCS= 4363;       sT[0].sCP[0].sCPR[245].nSPOffsetLek= 4364;
sT[0].sCP[0].sCPR[246].nDCStart= 863;  		sT[0].sCP[0].sCPR[246].nDCNum =1;       sT[0].sCP[0].sCPR[246].nSCStart=864;        sT[0].sCP[0].sCPR[246].nAckStart=865;  	sT[0].sCP[0].sCPR[246].nAckNum=1;     sT[0].sCP[0].sCPR[246].nSPOffsetCS= 4379;       sT[0].sCP[0].sCPR[246].nSPOffsetLek= 4380;
sT[0].sCP[0].sCPR[247].nDCStart= 866;  		sT[0].sCP[0].sCPR[247].nDCNum =1;       sT[0].sCP[0].sCPR[247].nSCStart=867;        sT[0].sCP[0].sCPR[247].nAckStart=868;  	sT[0].sCP[0].sCPR[247].nAckNum=1;     sT[0].sCP[0].sCPR[247].nSPOffsetCS= 4395;       sT[0].sCP[0].sCPR[247].nSPOffsetLek= 4396;
sT[0].sCP[0].sCPR[248].nDCStart= 869;  		sT[0].sCP[0].sCPR[248].nDCNum =1;       sT[0].sCP[0].sCPR[248].nSCStart=870;        sT[0].sCP[0].sCPR[248].nAckStart=871;  	sT[0].sCP[0].sCPR[248].nAckNum=1;     sT[0].sCP[0].sCPR[248].nSPOffsetCS= 4411;       sT[0].sCP[0].sCPR[248].nSPOffsetLek= 4412;
sT[0].sCP[0].sCPR[250].nDCStart= 872;  		sT[0].sCP[0].sCPR[250].nDCNum =1;       sT[0].sCP[0].sCPR[250].nSCStart=873;        sT[0].sCP[0].sCPR[250].nAckStart=874;  	sT[0].sCP[0].sCPR[250].nAckNum=1;     sT[0].sCP[0].sCPR[250].nSPOffsetCS= 4427;       sT[0].sCP[0].sCPR[250].nSPOffsetLek= 4428;
sT[0].sCP[0].sCPR[251].nDCStart= 875;  		sT[0].sCP[0].sCPR[251].nDCNum =1;       sT[0].sCP[0].sCPR[251].nSCStart=876;        sT[0].sCP[0].sCPR[251].nAckStart=877;  	sT[0].sCP[0].sCPR[251].nAckNum=1;     sT[0].sCP[0].sCPR[251].nSPOffsetCS= 4443;       sT[0].sCP[0].sCPR[251].nSPOffsetLek= 4444;
sT[0].sCP[0].sCPR[252].nDCStart= 878;  		sT[0].sCP[0].sCPR[252].nDCNum =1;       sT[0].sCP[0].sCPR[252].nSCStart=879;        sT[0].sCP[0].sCPR[252].nAckStart=880;  	sT[0].sCP[0].sCPR[252].nAckNum=1;     sT[0].sCP[0].sCPR[252].nSPOffsetCS= 4459;       sT[0].sCP[0].sCPR[252].nSPOffsetLek= 4460;
sT[0].sCP[0].sCPR[253].nDCStart= 881;  		sT[0].sCP[0].sCPR[253].nDCNum =1;       sT[0].sCP[0].sCPR[253].nSCStart=882;        sT[0].sCP[0].sCPR[253].nAckStart=883;  	sT[0].sCP[0].sCPR[253].nAckNum=1;     sT[0].sCP[0].sCPR[253].nSPOffsetCS= 4475;       sT[0].sCP[0].sCPR[253].nSPOffsetLek= 4476;
sT[0].sCP[0].sCPR[254].nDCStart= 884;  		sT[0].sCP[0].sCPR[254].nDCNum =1;       sT[0].sCP[0].sCPR[254].nSCStart=885;        sT[0].sCP[0].sCPR[254].nAckStart=886;  	sT[0].sCP[0].sCPR[254].nAckNum=1;     sT[0].sCP[0].sCPR[254].nSPOffsetCS= 4491;       sT[0].sCP[0].sCPR[254].nSPOffsetLek= 4492;
sT[0].sCP[0].sCPR[255].nDCStart= 887;  		sT[0].sCP[0].sCPR[255].nDCNum =1;       sT[0].sCP[0].sCPR[255].nSCStart=888;        sT[0].sCP[0].sCPR[255].nAckStart=889;  	sT[0].sCP[0].sCPR[255].nAckNum=1;     sT[0].sCP[0].sCPR[255].nSPOffsetCS= 4507;       sT[0].sCP[0].sCPR[255].nSPOffsetLek= 4508;
sT[0].sCP[0].sCPR[256].nDCStart= 890;  		sT[0].sCP[0].sCPR[256].nDCNum =1;       sT[0].sCP[0].sCPR[256].nSCStart=891;        sT[0].sCP[0].sCPR[256].nAckStart=892;  	sT[0].sCP[0].sCPR[256].nAckNum=1;     sT[0].sCP[0].sCPR[256].nSPOffsetCS= 4523;       sT[0].sCP[0].sCPR[256].nSPOffsetLek= 4524;
sT[0].sCP[0].sCPR[257].nDCStart= 893;  		sT[0].sCP[0].sCPR[257].nDCNum =1;       sT[0].sCP[0].sCPR[257].nSCStart=894;        sT[0].sCP[0].sCPR[257].nAckStart=895;  	sT[0].sCP[0].sCPR[257].nAckNum=1;     sT[0].sCP[0].sCPR[257].nSPOffsetCS= 4539;       sT[0].sCP[0].sCPR[257].nSPOffsetLek= 4540;
sT[0].sCP[0].sCPR[258].nDCStart= 911;  		sT[0].sCP[0].sCPR[258].nDCNum =8;       sT[0].sCP[0].sCPR[258].nSCStart=920;        sT[0].sCP[0].sCPR[258].nAckStart=919;  	sT[0].sCP[0].sCPR[258].nAckNum=1;     sT[0].sCP[0].sCPR[258].nSPOffsetCS= 4658;       sT[0].sCP[0].sCPR[258].nSPOffsetLek= 4659;
sT[0].sCP[0].sCPR[259].nDCStart= 921;  		sT[0].sCP[0].sCPR[259].nDCNum =1;       sT[0].sCP[0].sCPR[259].nSCStart=922;        sT[0].sCP[0].sCPR[259].nAckStart=923;  	sT[0].sCP[0].sCPR[259].nAckNum=1;     sT[0].sCP[0].sCPR[259].nSPOffsetCS= 4674;       sT[0].sCP[0].sCPR[259].nSPOffsetLek= 4675;
sT[0].sCP[0].sCPR[260].nDCStart= 924;  		sT[0].sCP[0].sCPR[260].nDCNum =1;       sT[0].sCP[0].sCPR[260].nSCStart=925;        sT[0].sCP[0].sCPR[260].nAckStart=926;  	sT[0].sCP[0].sCPR[260].nAckNum=1;     sT[0].sCP[0].sCPR[260].nSPOffsetCS= 4690;       sT[0].sCP[0].sCPR[260].nSPOffsetLek= 4691;
sT[0].sCP[0].sCPR[261].nDCStart= 927;  		sT[0].sCP[0].sCPR[261].nDCNum =1;       sT[0].sCP[0].sCPR[261].nSCStart=928;        sT[0].sCP[0].sCPR[261].nAckStart=929;  	sT[0].sCP[0].sCPR[261].nAckNum=1;     sT[0].sCP[0].sCPR[261].nSPOffsetCS= 4706;       sT[0].sCP[0].sCPR[261].nSPOffsetLek= 4707;
sT[0].sCP[0].sCPR[262].nDCStart= 930;  		sT[0].sCP[0].sCPR[262].nDCNum =1;       sT[0].sCP[0].sCPR[262].nSCStart=931;        sT[0].sCP[0].sCPR[262].nAckStart=932;  	sT[0].sCP[0].sCPR[262].nAckNum=1;     sT[0].sCP[0].sCPR[262].nSPOffsetCS= 4722;       sT[0].sCP[0].sCPR[262].nSPOffsetLek= 4723;
sT[0].sCP[0].sCPR[263].nDCStart= 933;  		sT[0].sCP[0].sCPR[263].nDCNum =1;       sT[0].sCP[0].sCPR[263].nSCStart=934;        sT[0].sCP[0].sCPR[263].nAckStart=935;  	sT[0].sCP[0].sCPR[263].nAckNum=1;     sT[0].sCP[0].sCPR[263].nSPOffsetCS= 4738;       sT[0].sCP[0].sCPR[263].nSPOffsetLek= 4739;
sT[0].sCP[0].sCPR[264].nDCStart= 936;  		sT[0].sCP[0].sCPR[264].nDCNum =1;       sT[0].sCP[0].sCPR[264].nSCStart=937;        sT[0].sCP[0].sCPR[264].nAckStart=938;  	sT[0].sCP[0].sCPR[264].nAckNum=1;     sT[0].sCP[0].sCPR[264].nSPOffsetCS= 4754;       sT[0].sCP[0].sCPR[264].nSPOffsetLek= 4755;
sT[0].sCP[0].sCPR[265].nDCStart= 939;  		sT[0].sCP[0].sCPR[265].nDCNum =1;       sT[0].sCP[0].sCPR[265].nSCStart=940;        sT[0].sCP[0].sCPR[265].nAckStart=941;  	sT[0].sCP[0].sCPR[265].nAckNum=1;     sT[0].sCP[0].sCPR[265].nSPOffsetCS= 4770;       sT[0].sCP[0].sCPR[265].nSPOffsetLek= 4771;
sT[0].sCP[0].sCPR[266].nDCStart= 942;  		sT[0].sCP[0].sCPR[266].nDCNum =1;       sT[0].sCP[0].sCPR[266].nSCStart=943;        sT[0].sCP[0].sCPR[266].nAckStart=944;  	sT[0].sCP[0].sCPR[266].nAckNum=1;     sT[0].sCP[0].sCPR[266].nSPOffsetCS= 4786;       sT[0].sCP[0].sCPR[266].nSPOffsetLek= 4787;
sT[0].sCP[0].sCPR[267].nDCStart= 945;  		sT[0].sCP[0].sCPR[267].nDCNum =1;       sT[0].sCP[0].sCPR[267].nSCStart=946;        sT[0].sCP[0].sCPR[267].nAckStart=947;  	sT[0].sCP[0].sCPR[267].nAckNum=1;     sT[0].sCP[0].sCPR[267].nSPOffsetCS= 4802;       sT[0].sCP[0].sCPR[267].nSPOffsetLek= 4803;
sT[0].sCP[0].sCPR[268].nDCStart= 948;  		sT[0].sCP[0].sCPR[268].nDCNum =1;       sT[0].sCP[0].sCPR[268].nSCStart=949;        sT[0].sCP[0].sCPR[268].nAckStart=950;  	sT[0].sCP[0].sCPR[268].nAckNum=1;     sT[0].sCP[0].sCPR[268].nSPOffsetCS= 4818;       sT[0].sCP[0].sCPR[268].nSPOffsetLek= 4819;
sT[0].sCP[0].sCPR[269].nDCStart= 951;  		sT[0].sCP[0].sCPR[269].nDCNum =1;       sT[0].sCP[0].sCPR[269].nSCStart=952;        sT[0].sCP[0].sCPR[269].nAckStart=953;  	sT[0].sCP[0].sCPR[269].nAckNum=1;     sT[0].sCP[0].sCPR[269].nSPOffsetCS= 4834;       sT[0].sCP[0].sCPR[269].nSPOffsetLek= 4835;
sT[0].sCP[0].sCPR[270].nDCStart= 954;  		sT[0].sCP[0].sCPR[270].nDCNum =1;       sT[0].sCP[0].sCPR[270].nSCStart=955;        sT[0].sCP[0].sCPR[270].nAckStart=956;  	sT[0].sCP[0].sCPR[270].nAckNum=1;     sT[0].sCP[0].sCPR[270].nSPOffsetCS= 4850;       sT[0].sCP[0].sCPR[270].nSPOffsetLek= 4851;
sT[0].sCP[0].sCPR[271].nDCStart= 957;  		sT[0].sCP[0].sCPR[271].nDCNum =1;       sT[0].sCP[0].sCPR[271].nSCStart=958;        sT[0].sCP[0].sCPR[271].nAckStart=959;  	sT[0].sCP[0].sCPR[271].nAckNum=1;     sT[0].sCP[0].sCPR[271].nSPOffsetCS= 4866;       sT[0].sCP[0].sCPR[271].nSPOffsetLek= 4867;
sT[0].sCP[0].sCPR[272].nDCStart= 960;  		sT[0].sCP[0].sCPR[272].nDCNum =1;       sT[0].sCP[0].sCPR[272].nSCStart=961;        sT[0].sCP[0].sCPR[272].nAckStart=962;  	sT[0].sCP[0].sCPR[272].nAckNum=1;     sT[0].sCP[0].sCPR[272].nSPOffsetCS= 4882;       sT[0].sCP[0].sCPR[272].nSPOffsetLek= 4883;
sT[0].sCP[0].sCPR[273].nDCStart= 963;  		sT[0].sCP[0].sCPR[273].nDCNum =1;       sT[0].sCP[0].sCPR[273].nSCStart=964;        sT[0].sCP[0].sCPR[273].nAckStart=965;  	sT[0].sCP[0].sCPR[273].nAckNum=1;     sT[0].sCP[0].sCPR[273].nSPOffsetCS= 4898;       sT[0].sCP[0].sCPR[273].nSPOffsetLek= 4899;
sT[0].sCP[0].sCPR[274].nDCStart= 966;  		sT[0].sCP[0].sCPR[274].nDCNum =1;       sT[0].sCP[0].sCPR[274].nSCStart=967;        sT[0].sCP[0].sCPR[274].nAckStart=968;  	sT[0].sCP[0].sCPR[274].nAckNum=1;     sT[0].sCP[0].sCPR[274].nSPOffsetCS= 4914;       sT[0].sCP[0].sCPR[274].nSPOffsetLek= 4915;
sT[0].sCP[0].sCPR[275].nDCStart= 969;  		sT[0].sCP[0].sCPR[275].nDCNum =1;       sT[0].sCP[0].sCPR[275].nSCStart=970;        sT[0].sCP[0].sCPR[275].nAckStart=971;  	sT[0].sCP[0].sCPR[275].nAckNum=1;     sT[0].sCP[0].sCPR[275].nSPOffsetCS= 4930;       sT[0].sCP[0].sCPR[275].nSPOffsetLek= 4931;
sT[0].sCP[0].sCPR[276].nDCStart= 972;  		sT[0].sCP[0].sCPR[276].nDCNum =1;       sT[0].sCP[0].sCPR[276].nSCStart=973;        sT[0].sCP[0].sCPR[276].nAckStart=974;  	sT[0].sCP[0].sCPR[276].nAckNum=1;     sT[0].sCP[0].sCPR[276].nSPOffsetCS= 4946;       sT[0].sCP[0].sCPR[276].nSPOffsetLek= 4947;
sT[0].sCP[0].sCPR[277].nDCStart= 975;  		sT[0].sCP[0].sCPR[277].nDCNum =1;       sT[0].sCP[0].sCPR[277].nSCStart=976;        sT[0].sCP[0].sCPR[277].nAckStart=977;  	sT[0].sCP[0].sCPR[277].nAckNum=1;     sT[0].sCP[0].sCPR[277].nSPOffsetCS= 4962;       sT[0].sCP[0].sCPR[277].nSPOffsetLek= 4963;
sT[0].sCP[0].sCPR[278].nDCStart= 978;  		sT[0].sCP[0].sCPR[278].nDCNum =1;       sT[0].sCP[0].sCPR[278].nSCStart=979;        sT[0].sCP[0].sCPR[278].nAckStart=980;  	sT[0].sCP[0].sCPR[278].nAckNum=1;     sT[0].sCP[0].sCPR[278].nSPOffsetCS= 4978;       sT[0].sCP[0].sCPR[278].nSPOffsetLek= 4979;
sT[0].sCP[0].sCPR[279].nDCStart= 981;  		sT[0].sCP[0].sCPR[279].nDCNum =1;       sT[0].sCP[0].sCPR[279].nSCStart=982;        sT[0].sCP[0].sCPR[279].nAckStart=983;  	sT[0].sCP[0].sCPR[279].nAckNum=1;     sT[0].sCP[0].sCPR[279].nSPOffsetCS= 4994;       sT[0].sCP[0].sCPR[279].nSPOffsetLek= 4995;
sT[0].sCP[0].sCPR[280].nDCStart= 984;  		sT[0].sCP[0].sCPR[280].nDCNum =1;       sT[0].sCP[0].sCPR[280].nSCStart=985;        sT[0].sCP[0].sCPR[280].nAckStart=986;  	sT[0].sCP[0].sCPR[280].nAckNum=1;     sT[0].sCP[0].sCPR[280].nSPOffsetCS= 5010;       sT[0].sCP[0].sCPR[280].nSPOffsetLek= 5011;
sT[0].sCP[0].sCPR[281].nDCStart= 987;  		sT[0].sCP[0].sCPR[281].nDCNum =1;       sT[0].sCP[0].sCPR[281].nSCStart=988;        sT[0].sCP[0].sCPR[281].nAckStart=989;  	sT[0].sCP[0].sCPR[281].nAckNum=1;     sT[0].sCP[0].sCPR[281].nSPOffsetCS= 5026;       sT[0].sCP[0].sCPR[281].nSPOffsetLek= 5027;
sT[0].sCP[0].sCPR[282].nDCStart= 990;  		sT[0].sCP[0].sCPR[282].nDCNum =1;       sT[0].sCP[0].sCPR[282].nSCStart=991;        sT[0].sCP[0].sCPR[282].nAckStart=992;  	sT[0].sCP[0].sCPR[282].nAckNum=1;     sT[0].sCP[0].sCPR[282].nSPOffsetCS= 5042;       sT[0].sCP[0].sCPR[282].nSPOffsetLek= 5043;
sT[0].sCP[0].sCPR[283].nDCStart= 993;  		sT[0].sCP[0].sCPR[283].nDCNum =1;       sT[0].sCP[0].sCPR[283].nSCStart=994;        sT[0].sCP[0].sCPR[283].nAckStart=995;  	sT[0].sCP[0].sCPR[283].nAckNum=1;     sT[0].sCP[0].sCPR[283].nSPOffsetCS= 5058;       sT[0].sCP[0].sCPR[283].nSPOffsetLek= 5059;
sT[0].sCP[0].sCPR[284].nDCStart= 996;  		sT[0].sCP[0].sCPR[284].nDCNum =1;       sT[0].sCP[0].sCPR[284].nSCStart=997;        sT[0].sCP[0].sCPR[284].nAckStart=998;  	sT[0].sCP[0].sCPR[284].nAckNum=1;     sT[0].sCP[0].sCPR[284].nSPOffsetCS= 5074;       sT[0].sCP[0].sCPR[284].nSPOffsetLek= 5075;
sT[0].sCP[0].sCPR[285].nDCStart= 999;  		sT[0].sCP[0].sCPR[285].nDCNum =1;       sT[0].sCP[0].sCPR[285].nSCStart=1000;       sT[0].sCP[0].sCPR[285].nAckStart=1001; 	sT[0].sCP[0].sCPR[285].nAckNum=1;     sT[0].sCP[0].sCPR[285].nSPOffsetCS= 5090;       sT[0].sCP[0].sCPR[285].nSPOffsetLek= 5091;
sT[0].sCP[0].sCPR[286].nDCStart= 1002; 		sT[0].sCP[0].sCPR[286].nDCNum =1;       sT[0].sCP[0].sCPR[286].nSCStart=1003;       sT[0].sCP[0].sCPR[286].nAckStart=1004; 	sT[0].sCP[0].sCPR[286].nAckNum=1;     sT[0].sCP[0].sCPR[286].nSPOffsetCS= 5106;       sT[0].sCP[0].sCPR[286].nSPOffsetLek= 5107;
sT[0].sCP[0].sCPR[287].nDCStart= 1005; 		sT[0].sCP[0].sCPR[287].nDCNum =1;       sT[0].sCP[0].sCPR[287].nSCStart=1006;       sT[0].sCP[0].sCPR[287].nAckStart=1007; 	sT[0].sCP[0].sCPR[287].nAckNum=1;     sT[0].sCP[0].sCPR[287].nSPOffsetCS= 5122;       sT[0].sCP[0].sCPR[287].nSPOffsetLek= 5123;
sT[0].sCP[0].sCPR[288].nDCStart= 1008; 		sT[0].sCP[0].sCPR[288].nDCNum =1;       sT[0].sCP[0].sCPR[288].nSCStart=1009;       sT[0].sCP[0].sCPR[288].nAckStart=1010; 	sT[0].sCP[0].sCPR[288].nAckNum=1;     sT[0].sCP[0].sCPR[288].nSPOffsetCS= 5138;       sT[0].sCP[0].sCPR[288].nSPOffsetLek= 5139;
sT[0].sCP[0].sCPR[289].nDCStart= 1011; 		sT[0].sCP[0].sCPR[289].nDCNum =1;       sT[0].sCP[0].sCPR[289].nSCStart=1012;       sT[0].sCP[0].sCPR[289].nAckStart=1013; 	sT[0].sCP[0].sCPR[289].nAckNum=1;     sT[0].sCP[0].sCPR[289].nSPOffsetCS= 5154;       sT[0].sCP[0].sCPR[289].nSPOffsetLek= 5155;
sT[0].sCP[0].sCPR[290].nDCStart= 1014; 		sT[0].sCP[0].sCPR[290].nDCNum =1;       sT[0].sCP[0].sCPR[290].nSCStart=1015;       sT[0].sCP[0].sCPR[290].nAckStart=1016; 	sT[0].sCP[0].sCPR[290].nAckNum=1;     sT[0].sCP[0].sCPR[290].nSPOffsetCS= 5170;       sT[0].sCP[0].sCPR[290].nSPOffsetLek= 5171;
sT[0].sCP[0].sCPR[291].nDCStart= 1017; 		sT[0].sCP[0].sCPR[291].nDCNum =1;       sT[0].sCP[0].sCPR[291].nSCStart=1018;       sT[0].sCP[0].sCPR[291].nAckStart=1019; 	sT[0].sCP[0].sCPR[291].nAckNum=1;     sT[0].sCP[0].sCPR[291].nSPOffsetCS= 5186;       sT[0].sCP[0].sCPR[291].nSPOffsetLek= 5187;
sT[0].sCP[0].sCPR[292].nDCStart= 1020; 		sT[0].sCP[0].sCPR[292].nDCNum =1;       sT[0].sCP[0].sCPR[292].nSCStart=1021;       sT[0].sCP[0].sCPR[292].nAckStart=1022; 	sT[0].sCP[0].sCPR[292].nAckNum=1;     sT[0].sCP[0].sCPR[292].nSPOffsetCS= 5202;       sT[0].sCP[0].sCPR[292].nSPOffsetLek= 5203;
sT[0].sCP[0].sCPR[293].nDCStart= 1023; 		sT[0].sCP[0].sCPR[293].nDCNum =1;       sT[0].sCP[0].sCPR[293].nSCStart=1024;       sT[0].sCP[0].sCPR[293].nAckStart=1025; 	sT[0].sCP[0].sCPR[293].nAckNum=1;     sT[0].sCP[0].sCPR[293].nSPOffsetCS= 5218;       sT[0].sCP[0].sCPR[293].nSPOffsetLek= 5219;
sT[0].sCP[0].sCPR[294].nDCStart= 1026; 		sT[0].sCP[0].sCPR[294].nDCNum =1;       sT[0].sCP[0].sCPR[294].nSCStart=1027;       sT[0].sCP[0].sCPR[294].nAckStart=1028; 	sT[0].sCP[0].sCPR[294].nAckNum=1;     sT[0].sCP[0].sCPR[294].nSPOffsetCS= 5234;       sT[0].sCP[0].sCPR[294].nSPOffsetLek= 5235;

sT[0].sCP[0].sCPR[295].nDCStart= 1029; 		sT[0].sCP[0].sCPR[295].nDCNum =1;       sT[0].sCP[0].sCPR[295].nSCStart=1030;       sT[0].sCP[0].sCPR[295].nAckStart=1031; 	sT[0].sCP[0].sCPR[295].nAckNum=1;     sT[0].sCP[0].sCPR[295].nSPOffsetCS= 5250;       sT[0].sCP[0].sCPR[295].nSPOffsetLek= 5251;
sT[0].sCP[0].sCPR[296].nDCStart= 1032; 		sT[0].sCP[0].sCPR[296].nDCNum =1;       sT[0].sCP[0].sCPR[296].nSCStart=1033;       sT[0].sCP[0].sCPR[296].nAckStart=1034; 	sT[0].sCP[0].sCPR[296].nAckNum=1;     sT[0].sCP[0].sCPR[296].nSPOffsetCS= 5266;       sT[0].sCP[0].sCPR[296].nSPOffsetLek= 5267;
sT[0].sCP[0].sCPR[297].nDCStart= 1035; 		sT[0].sCP[0].sCPR[297].nDCNum =1;       sT[0].sCP[0].sCPR[297].nSCStart=1036;       sT[0].sCP[0].sCPR[297].nAckStart=1037; 	sT[0].sCP[0].sCPR[297].nAckNum=1;     sT[0].sCP[0].sCPR[297].nSPOffsetCS= 5282;       sT[0].sCP[0].sCPR[297].nSPOffsetLek= 5283;
sT[0].sCP[0].sCPR[298].nDCStart= 1038; 		sT[0].sCP[0].sCPR[298].nDCNum =1;       sT[0].sCP[0].sCPR[298].nSCStart=1039;       sT[0].sCP[0].sCPR[298].nAckStart=1040; 	sT[0].sCP[0].sCPR[298].nAckNum=1;     sT[0].sCP[0].sCPR[298].nSPOffsetCS= 5298;       sT[0].sCP[0].sCPR[298].nSPOffsetLek= 5299;
sT[0].sCP[0].sCPR[299].nDCStart= 1041; 		sT[0].sCP[0].sCPR[299].nDCNum =1;       sT[0].sCP[0].sCPR[299].nSCStart=1042;       sT[0].sCP[0].sCPR[299].nAckStart=1043; 	sT[0].sCP[0].sCPR[299].nAckNum=1;     sT[0].sCP[0].sCPR[299].nSPOffsetCS= 5314;       sT[0].sCP[0].sCPR[299].nSPOffsetLek= 5315;

sT[0].sCP[0].sCPR[300].nDCStart= 1044; 		sT[0].sCP[0].sCPR[300].nDCNum =1;       sT[0].sCP[0].sCPR[300].nSCStart=1045;       sT[0].sCP[0].sCPR[300].nAckStart=1046; 	sT[0].sCP[0].sCPR[300].nAckNum=1;     sT[0].sCP[0].sCPR[300].nSPOffsetCS= 5330;       sT[0].sCP[0].sCPR[300].nSPOffsetLek= 5331;
sT[0].sCP[0].sCPR[301].nDCStart= 1047; 		sT[0].sCP[0].sCPR[301].nDCNum =1;       sT[0].sCP[0].sCPR[301].nSCStart=1048;       sT[0].sCP[0].sCPR[301].nAckStart=1049; 	sT[0].sCP[0].sCPR[301].nAckNum=1;     sT[0].sCP[0].sCPR[301].nSPOffsetCS= 5346;       sT[0].sCP[0].sCPR[301].nSPOffsetLek= 5347;
sT[0].sCP[0].sCPR[302].nDCStart= 1050; 		sT[0].sCP[0].sCPR[302].nDCNum =1;       sT[0].sCP[0].sCPR[302].nSCStart=1051;       sT[0].sCP[0].sCPR[302].nAckStart=1052; 	sT[0].sCP[0].sCPR[302].nAckNum=1;     sT[0].sCP[0].sCPR[302].nSPOffsetCS= 5362;       sT[0].sCP[0].sCPR[302].nSPOffsetLek= 5363;
sT[0].sCP[0].sCPR[303].nDCStart= 1053; 		sT[0].sCP[0].sCPR[303].nDCNum =1;       sT[0].sCP[0].sCPR[303].nSCStart=1054;       sT[0].sCP[0].sCPR[303].nAckStart=1055; 	sT[0].sCP[0].sCPR[303].nAckNum=1;     sT[0].sCP[0].sCPR[303].nSPOffsetCS= 5378;       sT[0].sCP[0].sCPR[303].nSPOffsetLek= 5379;
sT[0].sCP[0].sCPR[304].nDCStart= 1056; 		sT[0].sCP[0].sCPR[304].nDCNum =1;       sT[0].sCP[0].sCPR[304].nSCStart=1057;       sT[0].sCP[0].sCPR[304].nAckStart=1058; 	sT[0].sCP[0].sCPR[304].nAckNum=1;     sT[0].sCP[0].sCPR[304].nSPOffsetCS= 5394;       sT[0].sCP[0].sCPR[304].nSPOffsetLek= 5395;
sT[0].sCP[0].sCPR[305].nDCStart= 1059; 		sT[0].sCP[0].sCPR[305].nDCNum =1;       sT[0].sCP[0].sCPR[305].nSCStart=1060;       sT[0].sCP[0].sCPR[305].nAckStart=1061; 	sT[0].sCP[0].sCPR[305].nAckNum=1;     sT[0].sCP[0].sCPR[305].nSPOffsetCS= 5410;       sT[0].sCP[0].sCPR[305].nSPOffsetLek= 5411;
sT[0].sCP[0].sCPR[306].nDCStart= 1062; 		sT[0].sCP[0].sCPR[306].nDCNum =1;       sT[0].sCP[0].sCPR[306].nSCStart=1063;       sT[0].sCP[0].sCPR[306].nAckStart=1064; 	sT[0].sCP[0].sCPR[306].nAckNum=1;     sT[0].sCP[0].sCPR[306].nSPOffsetCS= 5426;       sT[0].sCP[0].sCPR[306].nSPOffsetLek= 5427;
sT[0].sCP[0].sCPR[307].nDCStart= 1065; 		sT[0].sCP[0].sCPR[307].nDCNum =1;       sT[0].sCP[0].sCPR[307].nSCStart=1066;       sT[0].sCP[0].sCPR[307].nAckStart=1067; 	sT[0].sCP[0].sCPR[307].nAckNum=1;     sT[0].sCP[0].sCPR[307].nSPOffsetCS= 5442;       sT[0].sCP[0].sCPR[307].nSPOffsetLek= 5443;
sT[0].sCP[0].sCPR[308].nDCStart= 1068; 		sT[0].sCP[0].sCPR[308].nDCNum =1;       sT[0].sCP[0].sCPR[308].nSCStart=1069;       sT[0].sCP[0].sCPR[308].nAckStart=1070; 	sT[0].sCP[0].sCPR[308].nAckNum=1;     sT[0].sCP[0].sCPR[308].nSPOffsetCS= 5458;       sT[0].sCP[0].sCPR[308].nSPOffsetLek= 5459;
sT[0].sCP[0].sCPR[309].nDCStart= 1071; 		sT[0].sCP[0].sCPR[309].nDCNum =1;       sT[0].sCP[0].sCPR[309].nSCStart=1072;       sT[0].sCP[0].sCPR[309].nAckStart=1073; 	sT[0].sCP[0].sCPR[309].nAckNum=1;     sT[0].sCP[0].sCPR[309].nSPOffsetCS= 5474;       sT[0].sCP[0].sCPR[309].nSPOffsetLek= 5475;
sT[0].sCP[0].sCPR[310].nDCStart= 1074; 		sT[0].sCP[0].sCPR[310].nDCNum =1;       sT[0].sCP[0].sCPR[310].nSCStart=1075;       sT[0].sCP[0].sCPR[310].nAckStart=1076; 	sT[0].sCP[0].sCPR[310].nAckNum=1;     sT[0].sCP[0].sCPR[310].nSPOffsetCS= 5490;       sT[0].sCP[0].sCPR[310].nSPOffsetLek= 5491;
sT[0].sCP[0].sCPR[311].nDCStart= 1077; 		sT[0].sCP[0].sCPR[311].nDCNum =1;       sT[0].sCP[0].sCPR[311].nSCStart=1078;       sT[0].sCP[0].sCPR[311].nAckStart=1079; 	sT[0].sCP[0].sCPR[311].nAckNum=1;     sT[0].sCP[0].sCPR[311].nSPOffsetCS= 5506;       sT[0].sCP[0].sCPR[311].nSPOffsetLek= 5507;
sT[0].sCP[0].sCPR[312].nDCStart= 1080; 		sT[0].sCP[0].sCPR[312].nDCNum =1;       sT[0].sCP[0].sCPR[312].nSCStart=1081;       sT[0].sCP[0].sCPR[312].nAckStart=1082; 	sT[0].sCP[0].sCPR[312].nAckNum=1;     sT[0].sCP[0].sCPR[312].nSPOffsetCS= 5522;       sT[0].sCP[0].sCPR[312].nSPOffsetLek= 5523;
sT[0].sCP[0].sCPR[313].nDCStart= 1083; 		sT[0].sCP[0].sCPR[313].nDCNum =1;       sT[0].sCP[0].sCPR[313].nSCStart=1084;       sT[0].sCP[0].sCPR[313].nAckStart=1085; 	sT[0].sCP[0].sCPR[313].nAckNum=1;     sT[0].sCP[0].sCPR[313].nSPOffsetCS= 5538;       sT[0].sCP[0].sCPR[313].nSPOffsetLek= 5539;
sT[0].sCP[0].sCPR[314].nDCStart= 1086; 		sT[0].sCP[0].sCPR[314].nDCNum =1;       sT[0].sCP[0].sCPR[314].nSCStart=1087;       sT[0].sCP[0].sCPR[314].nAckStart=1088; 	sT[0].sCP[0].sCPR[314].nAckNum=1;     sT[0].sCP[0].sCPR[314].nSPOffsetCS= 5554;       sT[0].sCP[0].sCPR[314].nSPOffsetLek= 5555;
sT[0].sCP[0].sCPR[315].nDCStart= 1089; 		sT[0].sCP[0].sCPR[315].nDCNum =1;       sT[0].sCP[0].sCPR[315].nSCStart=1090;       sT[0].sCP[0].sCPR[315].nAckStart=1091; 	sT[0].sCP[0].sCPR[315].nAckNum=1;     sT[0].sCP[0].sCPR[315].nSPOffsetCS= 5570;       sT[0].sCP[0].sCPR[315].nSPOffsetLek= 5571;
sT[0].sCP[0].sCPR[316].nDCStart= 1092; 		sT[0].sCP[0].sCPR[316].nDCNum =1;       sT[0].sCP[0].sCPR[316].nSCStart=1093;       sT[0].sCP[0].sCPR[316].nAckStart=1094; 	sT[0].sCP[0].sCPR[316].nAckNum=1;     sT[0].sCP[0].sCPR[316].nSPOffsetCS= 5586;       sT[0].sCP[0].sCPR[316].nSPOffsetLek= 5587;
sT[0].sCP[0].sCPR[317].nDCStart= 1095; 		sT[0].sCP[0].sCPR[317].nDCNum =1;       sT[0].sCP[0].sCPR[317].nSCStart=1096;       sT[0].sCP[0].sCPR[317].nAckStart=1097; 	sT[0].sCP[0].sCPR[317].nAckNum=1;     sT[0].sCP[0].sCPR[317].nSPOffsetCS= 5602;       sT[0].sCP[0].sCPR[317].nSPOffsetLek= 5603;
sT[0].sCP[0].sCPR[318].nDCStart= 1098; 		sT[0].sCP[0].sCPR[318].nDCNum =1;       sT[0].sCP[0].sCPR[318].nSCStart=1099;       sT[0].sCP[0].sCPR[318].nAckStart=1100; 	sT[0].sCP[0].sCPR[318].nAckNum=1;     sT[0].sCP[0].sCPR[318].nSPOffsetCS= 5618;       sT[0].sCP[0].sCPR[318].nSPOffsetLek= 5619;
sT[0].sCP[0].sCPR[319].nDCStart= 1101; 		sT[0].sCP[0].sCPR[319].nDCNum =1;       sT[0].sCP[0].sCPR[319].nSCStart=1102;       sT[0].sCP[0].sCPR[319].nAckStart=1103; 	sT[0].sCP[0].sCPR[319].nAckNum=1;     sT[0].sCP[0].sCPR[319].nSPOffsetCS= 5634;       sT[0].sCP[0].sCPR[319].nSPOffsetLek= 5635;
sT[0].sCP[0].sCPR[320].nDCStart= 1105; 		sT[0].sCP[0].sCPR[320].nDCNum =1;       sT[0].sCP[0].sCPR[320].nSCStart=1106;       sT[0].sCP[0].sCPR[320].nAckStart=1107; 	sT[0].sCP[0].sCPR[320].nAckNum=1;     sT[0].sCP[0].sCPR[320].nSPOffsetCS= 5650;       sT[0].sCP[0].sCPR[320].nSPOffsetLek= 5651;
sT[0].sCP[0].sCPR[321].nDCStart= 0; 		  sT[0].sCP[0].sCPR[321].nDCNum =0;       sT[0].sCP[0].sCPR[321].nSCStart=0;          sT[0].sCP[0].sCPR[321].nAckStart=0; 	  sT[0].sCP[0].sCPR[321].nAckNum=0;     sT[0].sCP[0].sCPR[321].nSPOffsetCS= 0;          sT[0].sCP[0].sCPR[321].nSPOffsetLek= 0;
sT[0].sCP[0].sCPR[322].nDCStart= 0; 		  sT[0].sCP[0].sCPR[322].nDCNum =0;       sT[0].sCP[0].sCPR[322].nSCStart=0;          sT[0].sCP[0].sCPR[322].nAckStart=0; 	  sT[0].sCP[0].sCPR[322].nAckNum=0;     sT[0].sCP[0].sCPR[322].nSPOffsetCS= 0;          sT[0].sCP[0].sCPR[322].nSPOffsetLek= 0;
sT[0].sCP[0].sCPR[323].nDCStart= 0; 		  sT[0].sCP[0].sCPR[323].nDCNum =0;       sT[0].sCP[0].sCPR[323].nSCStart=0;          sT[0].sCP[0].sCPR[323].nAckStart=0; 	  sT[0].sCP[0].sCPR[323].nAckNum=0;     sT[0].sCP[0].sCPR[323].nSPOffsetCS= 0;          sT[0].sCP[0].sCPR[323].nSPOffsetLek= 0;
sT[0].sCP[0].sCPR[324].nDCStart= 0; 		  sT[0].sCP[0].sCPR[324].nDCNum =0;       sT[0].sCP[0].sCPR[324].nSCStart=0;          sT[0].sCP[0].sCPR[324].nAckStart=0; 	  sT[0].sCP[0].sCPR[324].nAckNum=0;     sT[0].sCP[0].sCPR[324].nSPOffsetCS= 0;          sT[0].sCP[0].sCPR[324].nSPOffsetLek= 0;


/* TMOK jelszámok inicializálása ciklusban */	
for (nI = 0;nI<	MAX_RTU;nI++)
{
	sT[0].sMOT[nI].nIEC_SP_NUM = 14;
	sT[0].sMOT[nI].nIEC_DP_NUM  = 1;
	sT[0].sMOT[nI].nNMNum      = 3;
	
	/* Biztonsagi ellenorzes*/
	if (sT[0].sCP[0].sCPR[nI].nAckNum>4)
	{
		sT[0].sCP[0].sCPR[nI].nAckNum = 1;
	}	
}



/* 32-89 TMOK -----------------------------------------------------------*/
sT[0].sTI[0].nType = TYP_TMOK;

	sT[0].sMOT[0].nIEC_SP				= 292;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[0].nIEC_DP				= 27;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[0].nIEC_NM				= 61;		/* Mérések IEC kezdõcíme */


/* 30-13 TMOK -----------------------------------------------------------*/
sT[0].sTI[1].nType = TYP_TMOK;

	sT[0].sMOT[1].nIEC_SP				= 20;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[1].nIEC_DP				= 10;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[1].nIEC_NM				= 10;		/* Mérések IEC kezdõcíme */

/* 30-35 TMOK -----------------------------------------------------------*/
sT[0].sTI[2].nType = TYP_TMOK;

	sT[0].sMOT[2].nIEC_SP				= 36;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[2].nIEC_DP				= 11;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[2].nIEC_NM				= 13;		/* Mérések IEC kezdõcíme */

/* 30-57 TMOK -----------------------------------------------------------*/
sT[0].sTI[3].nType = TYP_TMOK;

	sT[0].sMOT[3].nIEC_SP				= 52;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[3].nIEC_DP				= 12;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[3].nIEC_NM				= 1267;		/* Mérések IEC kezdõcíme */

	sT[0].sMOT[3].nNMNum     		= 4;		/* Mérések száma */
	sT[0].sMOT[3].nIEC_NM2		= 1271;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[3].nNMNum2			= 2;		/* Analóg mérések száma*/

/* 30-98 TMOK -----------------------------------------------------------*/
sT[0].sTI[4].nType = TYP_TMOK;

	sT[0].sMOT[4].nIEC_SP				= 68;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[4].nIEC_DP				= 13;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[4].nIEC_NM				= 19;		/* Mérések IEC kezdõcíme */

/* 31-30 TMOK -----------------------------------------------------------*/
sT[0].sTI[5].nType = TYP_TMOK;

	sT[0].sMOT[5].nIEC_SP				= 84;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[5].nIEC_DP				= 14;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[5].nIEC_NM				= 22;		/* Mérések IEC kezdõcíme */

/* 32-91 TMOK -----------------------------------------------------------*/
sT[0].sTI[6].nType = TYP_TMOK;

	sT[0].sMOT[6].nIEC_SP				= 100;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[6].nIEC_DP				= 15;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[6].nIEC_NM				= 25;		/* Mérések IEC kezdõcíme */

/* 41-89 TMOK -----------------------------------------------------------*/
sT[0].sTI[7].nType = TYP_TMOK;

	sT[0].sMOT[7].nIEC_SP				= 116;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[7].nIEC_DP				= 16;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[7].nIEC_NM				= 28;		/* Mérések IEC kezdõcíme */

/* 30-80 TMOK -----------------------------------------------------------*/
sT[0].sTI[8].nType = TYP_TMOK;

	sT[0].sMOT[8].nIEC_SP				= 132;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[8].nIEC_DP				= 17;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[8].nIEC_NM				= 31;		/* Mérések IEC kezdõcíme */

/* 86-57, 86-38 TMOK -----------------------------------------------------------*/
sT[0].sTI[9].nType = TYP_TMOK;

	sT[0].sMOT[9].nIEC_SP				= 308;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[9].nIEC_SP_NUM			= 30;		/* Egybites értékek száma*/
	sT[0].sMOT[9].nIEC_DP				= 18;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[9].nIEC_DP_NUM			= 2;   		/* Két bites értékek száma*/
	sT[0].sMOT[9].nIEC_NM				= 64;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[9].nNMNum				= 4;		/* Analóg mérések száma*/

/*  85-03 TMOK -----------------------------------------------------------*/
sT[0].sTI[10].nType = TYP_TMOK;

	sT[0].sMOT[10].nIEC_SP				= 148;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[10].nIEC_DP				= 28;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[10].nIEC_NM				= 1064;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[10].nNMNum      			= 4;



/* 80-96,80-97 TMOK -----------------------------------------------------------*/
sT[0].sTI[11].nType = TYP_TMOK;

	sT[0].sMOT[11].nIEC_SP				= 342;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[11].nIEC_SP_NUM			= 30;		/* Egybites értékek száma*/
	sT[0].sMOT[11].nIEC_DP				= 20;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[11].nIEC_DP_NUM			= 2;   		/* Két bites értékek száma*/
	sT[0].sMOT[11].nIEC_NM				= 68;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[11].nNMNum				= 4;		/* Analóg mérések száma*/

/*  70-19 TMOK -----------------------------------------------------------*/
sT[0].sTI[12].nType = TYP_TMOK;

	sT[0].sMOT[12].nIEC_SP				= 164;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[12].nIEC_DP				= 29;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[12].nIEC_NM				= 1385;		/* Mérések IEC kezdõcíme */

  sT[0].sMOT[12].nNMNum     			= 4;		/* Mérések száma */
	sT[0].sMOT[12].nIEC_NM2				  = 1389;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[12].nNMNum2				  = 2;		/* Analóg mérések száma*/

/* 82-14 TMOK -----------------------------------------------------------*/
sT[0].sTI[13].nType = TYP_TMOK;

	sT[0].sMOT[13].nIEC_SP				= 212;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[13].nIEC_DP				= 22;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[13].nIEC_NM				= 46;		/* Mérések IEC kezdõcíme */

/* 82-67 TMOK -----------------------------------------------------------*/
sT[0].sTI[14].nType = TYP_TMOK;

	sT[0].sMOT[14].nIEC_SP				= 228;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[14].nIEC_DP				= 23;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[14].nIEC_NM				= 49;		/* Mérések IEC kezdõcíme */

/* 82-37 TMOK -----------------------------------------------------------*/
sT[0].sTI[15].nType = TYP_TMOK;

	sT[0].sMOT[15].nIEC_SP				= 244;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[15].nIEC_DP				= 24;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[15].nIEC_NM				= 52;		/* Mérések IEC kezdõcíme */

/* 31-54 TMOK -----------------------------------------------------------*/
sT[0].sTI[16].nType = TYP_TMOK;

	sT[0].sMOT[16].nIEC_SP				= 260;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[16].nIEC_DP				= 25;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[16].nIEC_NM				= 55;		/* Mérések IEC kezdõcíme */

/* 31-66 TMOK -----------------------------------------------------------*/
sT[0].sTI[17].nType = TYP_TMOK;

	sT[0].sMOT[17].nIEC_SP				= 276;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[17].nIEC_DP				= 26;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[17].nIEC_NM				= 58;		/* Mérések IEC kezdõcíme */

/* 35-45 TMOK -----------------------------------------------------------*/
sT[0].sTI[18].nType = TYP_TMOK;

	sT[0].sMOT[18].nIEC_SP				= 180;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[18].nIEC_DP				= 30;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[18].nIEC_NM				= 40;		/* Mérések IEC kezdõcíme */

/* 86-81 TMOK -----------------------------------------------------------*/
sT[0].sTI[19].nType = TYP_TMOK;

	sT[0].sMOT[19].nIEC_SP				= 376;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[19].nIEC_DP				= 32;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[19].nIEC_NM				= 72;		/* Mérések IEC kezdõcíme */

/* 41-38 TMOK -----------------------------------------------------------*/
sT[0].sTI[20].nType = TYP_TMOK;

	sT[0].sMOT[20].nIEC_SP				= 196;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[20].nIEC_DP				= 31;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[20].nIEC_NM				= 43;		/* Mérések IEC kezdõcíme */

/* 12-48 TMOK -----------------------------------------------------------*/
sT[0].sTI[21].nType = TYP_TMOK;

	sT[0].sMOT[21].nIEC_SP				= 408;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[21].nIEC_DP				= 34;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[21].nIEC_NM				= 1291;		/* Mérések IEC kezdõcíme */

  sT[0].sMOT[21].nNMNum     			= 4;		/* Mérések száma */
	sT[0].sMOT[21].nIEC_NM2				  = 1295;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[21].nNMNum2				  = 2;		/* Analóg mérések száma*/


/* 85-24 TMOK -----------------------------------------------------------*/
sT[0].sTI[22].nType = TYP_TMOK;

	sT[0].sMOT[22].nIEC_SP				= 424;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[22].nIEC_DP				= 35;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[22].nIEC_NM				= 1321;		/* Mérések IEC kezdõcíme */

  sT[0].sMOT[22].nNMNum     			= 4;		/* Mérések száma */
	sT[0].sMOT[22].nIEC_NM2				  = 1325;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[22].nNMNum2				  = 2;		/* Analóg mérések száma*/

/* 14-20 TMOK -----------------------------------------------------------*/
sT[0].sTI[23].nType = TYP_TMOK;

	sT[0].sMOT[23].nIEC_SP				= 440;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[23].nIEC_DP				= 36;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[23].nIEC_NM				= 84;		/* Mérések IEC kezdõcíme */

/* 32-36 TMOK ZE -----------------------------------------------------------*/
sT[0].sTI[24].nType = TYP_TMOK;

	sT[0].sMOT[24].nIEC_SP				= 456;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[24].nIEC_DP				= 37;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[24].nIEC_NM				= 1092;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[24].nNMNum      			= 4;

	sT[0].sMOT[24].nIEC_NM2				  = 1383;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[24].nNMNum2				  = 2;		/* Analóg mérések száma*/

/* 40-85 TMOK ZE -----------------------------------------------------------*/
sT[0].sTI[25].nType = TYP_TMOK;

	sT[0].sMOT[25].nIEC_SP				= 472;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[25].nIEC_DP				= 38;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[25].nIEC_NM				= 1112;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[25].nNMNum      			= 4;


/* 34-68 (30-44) TMOK ZE -----------------------------------------------------------*/
sT[0].sTI[26].nType = TYP_TMOK;

	sT[0].sMOT[26].nIEC_SP				= 488;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[26].nIEC_DP				= 39;		/* Kétbites értékek IEC kezdõcíme*/
	/*sT[0].sMOT[26].nIEC_NM				= 93;		 Mérések IEC kezdõcíme */
	sT[0].sMOT[26].nIEC_NM				= 1036;		 /* Mérések IEC kezdõcíme */
	sT[0].sMOT[26].nNMNum      			= 4;


/* 85-46 TMOK  -----------------------------------------------------------*/
sT[0].sTI[27].nType = TYP_TMOK;

	sT[0].sMOT[27].nIEC_SP				= 504;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[27].nIEC_DP				= 40;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[27].nIEC_NM				= 1068;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[27].nNMNum      			= 4;


/* 92-57 TMOK ZE -----------------------------------------------------------*/
sT[0].sTI[28].nType = TYP_TMOK;

	sT[0].sMOT[28].nIEC_SP				= 520;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[28].nIEC_DP				= 41;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[28].nIEC_NM				= 1128;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[28].nNMNum      			= 4;


/* 31-03 TMOK ZE -----------------------------------------------------------*/
sT[0].sTI[29].nType = TYP_TMOK;

	sT[0].sMOT[29].nIEC_SP				= 536;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[29].nIEC_DP				= 42;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[29].nIEC_NM				= 1225;		/* Mérések IEC kezdõcíme */

  sT[0].sMOT[29].nNMNum     			= 4;		/* Mérések száma */
	sT[0].sMOT[29].nIEC_NM2				  = 1229;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[29].nNMNum2				  = 2;		/* Analóg mérések száma*/

/* 40-57 TMOK ZE -----------------------------------------------------------*/
sT[0].sTI[30].nType = TYP_TMOK;

	sT[0].sMOT[30].nIEC_SP				= 392;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[30].nIEC_DP				= 33;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[30].nIEC_NM				= 75;		/* Mérések IEC kezdõcíme */

/* 32-17 TMOK ZE -----------------------------------------------------------*/
sT[0].sTI[31].nType = TYP_TMOK;

	sT[0].sMOT[31].nIEC_SP				= 568;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[31].nIEC_DP				= 44;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[31].nIEC_NM				= 1080;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[31].nNMNum      			= 4;

	sT[0].sMOT[31].nIEC_NM2				  = 478;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[31].nNMNum2				  = 2;		/* Analóg mérések száma*/

/* 92-65 TMOK ZE -----------------------------------------------------------*/
sT[0].sTI[32].nType = TYP_TMOK;

	sT[0].sMOT[32].nIEC_SP				= 584;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[32].nIEC_DP				= 45;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[32].nIEC_NM				= 1132;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[32].nNMNum      			= 4;

/* 32-61 TMOK ZE -----------------------------------------------------------*/
sT[0].sTI[33].nType = TYP_TMOK;

	sT[0].sMOT[33].nIEC_SP				= 616;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[33].nIEC_DP				= 47;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[33].nIEC_NM				= 1096;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[33].nNMNum      			= 4;

	sT[0].sMOT[33].nIEC_NM2				  = 1397;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[33].nNMNum2				  = 2;		/* Analóg mérések száma*/

/* 92-68 TMOK ZE -----------------------------------------------------------*/
sT[0].sTI[34].nType = TYP_TMOK;

	sT[0].sMOT[34].nIEC_SP				= 632;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[34].nIEC_DP				= 48;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[34].nIEC_NM				= 1136;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[34].nNMNum      			= 4;

/* 32-25 TMOK ZE -----------------------------------------------------------*/
sT[0].sTI[35].nType = TYP_TMOK;

	sT[0].sMOT[35].nIEC_SP				= 664;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[35].nIEC_DP				= 50;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[35].nIEC_NM				= 1088;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[35].nNMNum      			= 4;

	sT[0].sMOT[35].nIEC_NM2				  = 718;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[35].nNMNum2				  = 2;		/* Analóg mérések száma*/
/* 37-15 TMOK ZE -----------------------------------------------------------*/
sT[0].sTI[36].nType = TYP_TMOK;

	sT[0].sMOT[36].nIEC_SP				= 648;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[36].nIEC_DP				= 49;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[36].nIEC_NM				= 123;		/* Mérések IEC kezdõcíme */

/* 14-99 TMOK ZE -----------------------------------------------------------*/
sT[0].sTI[37].nType = TYP_TMOK;

	sT[0].sMOT[37].nIEC_SP				= 552;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[37].nIEC_DP				= 43;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[37].nIEC_NM				= 105;		/* Mérések IEC kezdõcíme */

/* 32-24 TMOK ZE -----------------------------------------------------------*/
sT[0].sTI[38].nType = TYP_TMOK;

	sT[0].sMOT[38].nIEC_SP				= 696;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[38].nIEC_DP				= 52;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[38].nIEC_NM				= 1231;		/* Mérések IEC kezdõcíme */

  sT[0].sMOT[38].nNMNum     			= 4;		/* Mérések száma */
	sT[0].sMOT[38].nIEC_NM2				= 1235;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[38].nNMNum2				  = 2;		/* Analóg mérések száma*/

/* 37-199 TMOK  -----------------------------------------------------------*/
sT[0].sTI[39].nType = TYP_TMOK;

	sT[0].sMOT[39].nIEC_SP				= 680;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[39].nIEC_DP				= 51;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[39].nIEC_NM				= 129;		/* Mérések IEC kezdõcíme */

/* 15-20 TMOK  -----------------------------------------------------------*/
sT[0].sTI[40].nType = TYP_TMOK;

	sT[0].sMOT[40].nIEC_SP				= 600;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[40].nIEC_DP				= 46;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[40].nIEC_NM				= 1285;		/* Mérések IEC kezdõcíme */

  sT[0].sMOT[40].nNMNum     			= 4;		/* Mérések száma */
	sT[0].sMOT[40].nIEC_NM2				= 1289;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[40].nNMNum2				  = 2;		/* Analóg mérések száma*/

/* 70-46 TMOK  -----------------------------------------------------------*/
sT[0].sTI[41].nType = TYP_TMOK;

	sT[0].sMOT[41].nIEC_SP				= 712;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[41].nIEC_DP				= 53;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[41].nIEC_NM				= 135;		/* Mérések IEC kezdõcíme */

/* 21-39 TMOK  -----------------------------------------------------------*/
sT[0].sTI[42].nType = TYP_TMOK;

	sT[0].sMOT[42].nIEC_SP				= 728;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[42].nIEC_DP				= 54;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[42].nIEC_NM				= 1048;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[42].nNMNum      			= 4;


/* 70-27 TMOK  -----------------------------------------------------------*/
sT[0].sTI[43].nType = TYP_TMOK;

	sT[0].sMOT[43].nIEC_SP				= 744;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[43].nIEC_DP				= 55;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[43].nIEC_NM				= 141;		/* Mérések IEC kezdõcíme */

/* 90-82 TMOK  -----------------------------------------------------------*/
sT[0].sTI[44].nType = TYP_TMOK;

	sT[0].sMOT[44].nIEC_SP				= 760;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[44].nIEC_DP				= 56;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[44].nIEC_NM				= 144;		/* Mérések IEC kezdõcíme */

/* 81-19 TMOK  -----------------------------------------------------------*/
sT[0].sTI[45].nType = TYP_TMOK;

	sT[0].sMOT[45].nIEC_SP				= 776;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[45].nIEC_DP				= 57;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[45].nIEC_NM				= 1056;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[45].nNMNum      			= 4;

/* 37-23 TMOK  -----------------------------------------------------------*/
sT[0].sTI[46].nType = TYP_TMOK;

	sT[0].sMOT[46].nIEC_SP				= 792;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[46].nIEC_DP				= 58;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[46].nIEC_NM				= 150;		/* Mérések IEC kezdõcíme */

/* 86-45 TMOK  -----------------------------------------------------------*/
sT[0].sTI[47].nType = TYP_TMOK;

	sT[0].sMOT[47].nIEC_SP				= 808;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[47].nIEC_DP				= 59;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[47].nIEC_NM				= 153;		/* Mérések IEC kezdõcíme */

/* 81-01 TMOK  -----------------------------------------------------------*/
sT[0].sTI[48].nType = TYP_TMOK;

	sT[0].sMOT[48].nIEC_SP				= 824;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[48].nIEC_DP				= 60;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[48].nIEC_NM				= 156;		/* Mérések IEC kezdõcíme */

/* 81-31 TMOK  -----------------------------------------------------------*/
sT[0].sTI[49].nType = TYP_TMOK;

	sT[0].sMOT[49].nIEC_SP				= 840;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[49].nIEC_DP				= 61;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[49].nIEC_NM				= 1060;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[49].nNMNum      			= 4;


/* 92-85 TMOK  -----------------------------------------------------------*/
sT[0].sTI[50].nType = TYP_TMOK;

	sT[0].sMOT[50].nIEC_SP				= 856;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[50].nIEC_DP				= 62;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[50].nIEC_NM				= 1140;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[50].nNMNum      			= 4;
 
/* 91-30 TMOK  -----------------------------------------------------------*/
sT[0].sTI[51].nType = TYP_TMOK;

	sT[0].sMOT[51].nIEC_SP				= 872;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[51].nIEC_DP				= 63;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[51].nIEC_NM				= 1120;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[51].nNMNum      			= 4;

/* 31-15 TMOK  -----------------------------------------------------------*/
sT[0].sTI[52].nType = TYP_TMOK;

	sT[0].sMOT[52].nIEC_SP				= 888;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[52].nIEC_DP				= 64;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[52].nIEC_NM				= 1219;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[52].nNMNum      			= 4;

  sT[0].sMOT[52].nNMNum     			= 4;		/* Mérések száma */
	sT[0].sMOT[52].nIEC_NM2				= 1223;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[52].nNMNum2				  = 2;		/* Analóg mérések száma*/

/* 81-10 TMOK  -----------------------------------------------------------*/
sT[0].sTI[53].nType = TYP_TMOK;

	sT[0].sMOT[53].nIEC_SP				= 904;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[53].nIEC_DP				= 65;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[53].nIEC_NM				= 1052;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[53].nNMNum      			= 4;

/* 90-90 TMOK  -----------------------------------------------------------*/
sT[0].sTI[54].nType = TYP_TMOK;

	sT[0].sMOT[54].nIEC_SP				= 920;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[54].nIEC_DP				= 66;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[54].nIEC_NM				= 174;		/* Mérések IEC kezdõcíme */

/* 91-96 TMOK  -----------------------------------------------------------*/
sT[0].sTI[55].nType = TYP_TMOK;

	sT[0].sMOT[55].nIEC_SP				= 936;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[55].nIEC_DP				= 67;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[55].nIEC_NM				= 1124;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[55].nNMNum      			= 4;


/* 34-18 TMOK  -----------------------------------------------------------*/
sT[0].sTI[56].nType = TYP_TMOK;

	sT[0].sMOT[56].nIEC_SP				= 952;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[56].nIEC_DP				= 68;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[56].nIEC_NM				= 180;		/* Mérések IEC kezdõcíme */

/* 40-98 TMOK  -----------------------------------------------------------*/
sT[0].sTI[57].nType = TYP_TMOK;

	sT[0].sMOT[57].nIEC_SP				= 968;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[57].nIEC_DP				= 69;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[57].nIEC_NM				= 1116;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[57].nNMNum      			= 4;

/* 35-11 TMOK  -----------------------------------------------------------*/
sT[0].sTI[58].nType = TYP_TMOK;

	sT[0].sMOT[58].nIEC_SP				= 984;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[58].nIEC_DP				= 70;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[58].nIEC_NM				= 1303;		/* Mérések IEC kezdõcíme */

  sT[0].sMOT[58].nNMNum     			= 4;		/* Mérések száma */
	sT[0].sMOT[58].nIEC_NM2				= 1307;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[58].nNMNum2				  = 2;		/* Analóg mérések száma*/

/* 70-29 TMOK  -----------------------------------------------------------*/
sT[0].sTI[59].nType = TYP_TMOK;

	sT[0].sMOT[59].nIEC_SP				= 1000;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[59].nIEC_DP				= 71;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[59].nIEC_NM				= 1357;		/* Mérések IEC kezdõcíme */

  sT[0].sMOT[59].nNMNum     			= 4;		/* Mérések száma */
	sT[0].sMOT[59].nIEC_NM2				= 1361;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[59].nNMNum2				  = 2;		/* Analóg mérések száma*/


/* 80-49 TMOK  -----------------------------------------------------------*/
sT[0].sTI[60].nType = TYP_TMOK;

	sT[0].sMOT[60].nIEC_SP				= 1016;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[60].nIEC_DP				= 72;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[60].nIEC_NM				= 1345;		/* Mérések IEC kezdõcíme */

  sT[0].sMOT[60].nNMNum     			= 4;		/* Mérések száma */
	sT[0].sMOT[60].nIEC_NM2				  = 1349;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[60].nNMNum2				  = 2;		/* Analóg mérések száma*/

/* 72-33 TMOK  -----------------------------------------------------------*/
sT[0].sTI[61].nType = TYP_TMOK;

	sT[0].sMOT[61].nIEC_SP				= 1032;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[61].nIEC_DP				= 73;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[61].nIEC_NM				= 195;		/* Mérések IEC kezdõcíme */

/* 71-39 TMOK  -----------------------------------------------------------*/
sT[0].sTI[62].nType = TYP_TMOK;

	sT[0].sMOT[62].nIEC_SP				= 1048;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[62].nIEC_DP				= 74;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[62].nIEC_NM				= 1108;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[62].nNMNum      			= 4;

/* 32-88 TMOK  -----------------------------------------------------------*/
sT[0].sTI[63].nType = TYP_TMOK;

	sT[0].sMOT[63].nIEC_SP				= 1064;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[63].nIEC_DP				= 75;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[63].nIEC_NM				= 1100;		/* Mérések IEC kezdõcíme */

  sT[0].sMOT[63].nNMNum     			= 4;		/* Mérések száma */
	sT[0].sMOT[63].nIEC_NM2				  = 1431;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[63].nNMNum2				  = 2;		/* Analóg mérések száma*/

/* 31-25 TMOK  -----------------------------------------------------------*/
sT[0].sTI[64].nType = TYP_TMOK;

	sT[0].sMOT[64].nIEC_SP				= 1080;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[64].nIEC_DP				= 76;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[64].nIEC_NM				= 1076;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[64].nNMNum      			= 4;
	sT[0].sMOT[64].nIEC_NM2				  = 1369;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[64].nNMNum2				  = 2;		/* Analóg mérések száma*/

/* 71-70 TMOK  -----------------------------------------------------------*/
sT[0].sTI[65].nType = TYP_TMOK;

	sT[0].sMOT[65].nIEC_SP				= 1096;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[65].nIEC_DP				= 77;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[65].nIEC_NM				= 207;		/* Mérések IEC kezdõcíme */

/* 21-37 TMOK  -----------------------------------------------------------*/
sT[0].sTI[66].nType = TYP_TMOK;

	sT[0].sMOT[66].nIEC_SP				= 1112;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[66].nIEC_DP				= 78;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[66].nIEC_NM				= 1044;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[66].nNMNum      			= 4;

/* 54-24 TMOK  -----------------------------------------------------------*/
sT[0].sTI[67].nType = TYP_TMOK;

	sT[0].sMOT[67].nIEC_SP				= 1128;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[67].nIEC_DP				= 79;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[67].nIEC_NM				= 1152;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[67].nNMNum      			= 4;

/* 20-16 TMOK  -----------------------------------------------------------*/
sT[0].sTI[68].nType = TYP_TMOK;

	sT[0].sMOT[68].nIEC_SP				= 1144;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[68].nIEC_DP				= 80;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[68].nIEC_NM				= 1201;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[68].nNMNum      			= 4;

 	sT[0].sMOT[68].nNMNum     			= 4;		/* Mérések száma */
	sT[0].sMOT[68].nIEC_NM2				  = 1205;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[68].nNMNum2				  = 2;		/* Analóg mérések száma*/

/* 54-33 TMOK  -----------------------------------------------------------*/
sT[0].sTI[69].nType = TYP_TMOK;

	sT[0].sMOT[69].nIEC_SP				= 1160;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[69].nIEC_DP				= 81;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[69].nIEC_NM				= 219;		/* Mérések IEC kezdõcíme */

/* Sárvár, Vadkert2 TALUS -------------------------------------------------------------*/
sT[0].sTI[70].nType = TYP_TAL;	

		sT[0].sTAL[70].nIEC_SP       		= 1176;
		sT[0].sTAL[70].nIEC_OsszevontHiba	= 1208;
		sT[0].sTAL[70].nIEC_MT_KommHiba		= 1209;
		sT[0].sTAL[70].nIEC_DP       		= 82;
		sT[0].sTAL[70].nIEC_DP_FSZ1  		= 86;
		sT[0].sTAL[70].nIEC_NM				= 222;
		sT[0].sTAL[70].nNMNum		  		= 4;
		sT[0].sTAL[70].nIEC_DP_2BIT1 		= 90;
		sT[0].sTAL[70].nIEC_DP_2BIT_KINT1	= 912;
		sT[0].sTAL[70].nIEC_DP_2BIT_BENT1	= 913;

/* Sárvár, Termál Hotel TALUS -------------------------------------------------------------*/
sT[0].sTI[71].nType = TYP_TAL;	

		sT[0].sTAL[71].nIEC_SP       		= 1213;
		sT[0].sTAL[71].nIEC_OsszevontHiba	= 1245;
		sT[0].sTAL[71].nIEC_MT_KommHiba		= 1246;
		sT[0].sTAL[71].nIEC_DP       		= 91;
		sT[0].sTAL[71].nIEC_DP_FSZ1  		= 95;
		sT[0].sTAL[71].nIEC_NM				= 226;
		sT[0].sTAL[71].nNMNum		  		= 9;

/* 34-04 TMOK  -----------------------------------------------------------*/
sT[0].sTI[72].nType = TYP_TMOK;

	sT[0].sMOT[72].nIEC_SP				= 1250;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[72].nIEC_DP				= 99;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[72].nIEC_NM				= 1104;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[72].nNMNum      			= 4;

/* Szombathely, 11-es Huszar uti gazmotor -------------------------------------------------------------*/
sT[0].sTI[73].nType = TYP_MOT;	
	
	sT[0].sMOT[73].nIEC_SP				= 1266;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[73].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[73].nIEC_DP				= 100;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[73].nIEC_DP_NUM			= 4;   		/* Két bites értékek száma*/
	sT[0].sMOT[73].nIEC_NM				= 0;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[73].nNMNum				= 0;		/* Analóg mérések száma*/

/* Ostffyasszonyfa, szélgenerátor -----------------------------------------------------------------------------------*/
sT[0].sTI[74].nType = TYP_TAL;	

		sT[0].sTAL[74].nIEC_SP       		= 1284;
		sT[0].sTAL[74].nIEC_OsszevontHiba	= 1316;
		sT[0].sTAL[74].nIEC_MT_KommHiba		= 1317;
		sT[0].sTAL[74].nIEC_DP       		= 104;
		sT[0].sTAL[74].nIEC_DP_FSZ1  		= 108;
		sT[0].sTAL[74].nIEC_NM				= 238;
		sT[0].sTAL[74].nNMNum		  		= 9;

/* Agárd, Kisvelence -------------------------------------------------------------*/
sT[0].sTI[75].nType = TYP_MOT;	
	
	sT[0].sMOT[75].nIEC_SP				= 1321;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[75].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[75].nIEC_DP				= 112;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[75].nIEC_DP_NUM			= 5;   		/* Két bites értékek száma*/
	sT[0].sMOT[75].nIEC_NM				= 0;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[75].nNMNum				= 0;		/* Analóg mérések száma*/

/* Tatabánya, Szõlõs ---------------------------------------------------------------*/
sT[0].sTI[76].nType = TYP_MOT;	
	
	sT[0].sMOT[76].nIEC_SP				= 1339;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[76].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[76].nIEC_DP				= 117;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[76].nIEC_DP_NUM			= 12;   		/* Két bites értékek száma*/
	sT[0].sMOT[76].nIEC_NM				= 0;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[76].nNMNum				= 0;		/* Analóg mérések száma*/
	
/* Tatabánya, Óváros ---------------------------------------------------------------*/
sT[0].sTI[77].nType = TYP_MOT;	
	
	sT[0].sMOT[77].nIEC_SP				= 1357;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[77].nIEC_SP_NUM			= 26;		/* Egybites értékek száma*/
	sT[0].sMOT[77].nIEC_DP				= 129;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[77].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[77].nIEC_NM				= 0;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[77].nNMNum				= 0;		/* Analóg mérések száma*/
     
/* 37-50 TMOK  -----------------------------------------------------------*/
sT[0].sTI[78].nType = TYP_TMOK;

	sT[0].sMOT[78].nIEC_SP				= 1383;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[78].nIEC_DP				= 137;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[78].nIEC_NM				= 247;		/* Mérések IEC kezdõcíme */

/* Székesfehérvár, Feherpalota ---------------------------------------------------------------*/
sT[0].sTI[79].nType = TYP_MOT;	
	
	sT[0].sMOT[79].nIEC_SP				= 1399;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[79].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[79].nIEC_DP				= 138;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[79].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[79].nIEC_NM				= 0;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[79].nNMNum				= 0;		/* Analóg mérések száma*/
     
/* Tatabánya, Szent Borbála gézmotor TALUS -------------------------------------------------------------*/
sT[0].sTI[80].nType = TYP_TAL;	

		sT[0].sTAL[80].nIEC_SP       		= 1415;
		sT[0].sTAL[80].nIEC_OsszevontHiba	= 1447;
		sT[0].sTAL[80].nIEC_MT_KommHiba		= 1448;
		sT[0].sTAL[80].nIEC_DP       		= 146;
		sT[0].sTAL[80].nIEC_DP_FSZ1  		= 150;
		sT[0].sTAL[80].nIEC_NM				= 250;
		sT[0].sTAL[80].nNMNum		  		= 9;
		sT[0].sTAL[80].nIEC_DP_2BIT1 		= 154;
		sT[0].sTAL[80].nIEC_DP_2BIT_KINT1	= 912;
		sT[0].sTAL[80].nIEC_DP_2BIT_BENT1	= 913;

/* Tatabánya, Vertes center TALUS -------------------------------------------------------------*/
sT[0].sTI[81].nType = TYP_MOT;	
	
	sT[0].sMOT[81].nIEC_SP				= 1452;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[81].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[81].nIEC_DP				= 156;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[81].nIEC_DP_NUM			= 4;   		/* Két bites értékek száma*/
	sT[0].sMOT[81].nIEC_NM				= 1156;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[81].nNMNum				= 6;		/* Analóg mérések száma*/
		
/* 45-10 TMOK  -----------------------------------------------------------*/
sT[0].sTI[82].nType = TYP_TMOK;

	sT[0].sMOT[82].nIEC_SP				= 1489;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[82].nIEC_DP				= 164;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[82].nIEC_NM				= 263;		/* Mérések IEC kezdõcíme */

/* 45-11 TMOK  -----------------------------------------------------------*/
sT[0].sTI[83].nType = TYP_TMOK;

	sT[0].sMOT[83].nIEC_SP				= 1505;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[83].nIEC_DP				= 165;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[83].nIEC_NM				= 1413;		/* Mérések IEC kezdõcíme */

  sT[0].sMOT[83].nNMNum     			= 4;		/* Mérések száma */
	sT[0].sMOT[83].nIEC_NM2				  = 1417;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[83].nNMNum2				  = 2;		/* Analóg mérések száma*/

/* Mecser, szelgenerator TALUS -------------------------------------------------------------*/
sT[0].sTI[84].nType = TYP_TAL;	

		sT[0].sTAL[84].nIEC_SP       		= 1521;
		sT[0].sTAL[84].nIEC_OsszevontHiba	= 1553;
		sT[0].sTAL[84].nIEC_MT_KommHiba		= 1554;
		sT[0].sTAL[84].nIEC_DP       		= 166;
		sT[0].sTAL[84].nIEC_DP_FSZ1  		= 170;
		sT[0].sTAL[84].nIEC_NM				= 269;
		sT[0].sTAL[84].nNMNum		  		= 11;
		sT[0].sTAL[84].nKommStatusNum		= 2;

/* Sárvár, Spirit Hotel, TALUS -------------------------------------------------------------*/
sT[0].sTI[85].nType = TYP_TAL;	

		sT[0].sTAL[85].nIEC_SP       		= 1558;
		sT[0].sTAL[85].nIEC_OsszevontHiba	= 1590;
		sT[0].sTAL[85].nIEC_MT_KommHiba		= 1591;
		sT[0].sTAL[85].nIEC_DP       		= 174;
		sT[0].sTAL[85].nIEC_DP_FSZ1  		= 178;
		sT[0].sTAL[85].nIEC_NM				= 280;
		sT[0].sTAL[85].nNMNum		  		= 4;
		sT[0].sTAL[85].nKommStatusNum		= 2;
		sT[0].sTAL[85].nIEC_DP_2BIT1 		= 182;
		sT[0].sTAL[85].nIEC_DP_2BIT_KINT1	= 912;
		sT[0].sTAL[85].nIEC_DP_2BIT_BENT1	= 913;

/* Mosonszolnok, szelgenerator TALUS -------------------------------------------------------------*/
sT[0].sTI[86].nType = TYP_TAL;	

		sT[0].sTAL[86].nIEC_SP       		= 1595;
		sT[0].sTAL[86].nIEC_OsszevontHiba	= 1627;
		sT[0].sTAL[86].nIEC_MT_KommHiba		= 1628;
		sT[0].sTAL[86].nIEC_DP       		= 184;
		sT[0].sTAL[86].nIEC_DP_FSZ1  		= 188;
		sT[0].sTAL[86].nIEC_NM				= 284;
		sT[0].sTAL[86].nNMNum		  		= 11;
		sT[0].sTAL[86].nKommStatusNum		= 2;

/* Szombathely, szennyviztelep 1. resz -----------------------------------------------------------*/
sT[0].sTI[87].nType = TYP_TAL;

		sT[0].sTAL[87].nIEC_SP       		= 1632;
		sT[0].sTAL[87].nIEC_OsszevontHiba	= 1664;
		sT[0].sTAL[87].nIEC_MT_KommHiba		= 1665;
		sT[0].sTAL[87].nIEC_DP       		= 192;
		sT[0].sTAL[87].nIEC_DP_FSZ1  		= 196;
		sT[0].sTAL[87].nIEC_NM				= 295;
		sT[0].sTAL[87].nNMNum		  		= 9;
		sT[0].sTAL[87].nKommStatusNum		= 2;

/* Szombathely, szennyviztelep 2. resz -----------------------------------------------------------*/
sT[0].sTI[88].nType = TYP_TAL;

		sT[0].sTAL[88].nIEC_SP       		= 1669;
		sT[0].sTAL[88].nIEC_OsszevontHiba	= 1701;
		sT[0].sTAL[88].nIEC_MT_KommHiba		= 1702;
		sT[0].sTAL[88].nKommStatusNum		= 2;
		sT[0].sTAL[88].nIEC_DP       		= 202;
		sT[0].sTAL[88].nIEC_DP_FSZ1  		= 206;
		sT[0].sTAL[88].nIEC_NM				= 304;
		sT[0].sTAL[88].nNMNum		  		= 4;
		
		sT[0].sTAL[88].nIEC_DP_2BIT1 		= 210;
		sT[0].sTAL[88].nIEC_DP_2BIT_KINT1	= 913;
		sT[0].sTAL[88].nIEC_DP_2BIT_BENT1	= 912;
		
		sT[0].sTAL[88].nIEC_DP_12BIT1		= 211;
		sT[0].sTAL[88].nIEC_DP_2BIT_BK1		= 926;

/* Komárom, NOKIA OHUB -----------------------------------------------------------*/
sT[0].sTI[89].nType = TYP_TAL;

		sT[0].sTAL[89].nIEC_SP       		= 1706;
		sT[0].sTAL[89].nIEC_OsszevontHiba	= 1738;
		sT[0].sTAL[89].nIEC_MT_KommHiba		= 1739;
		sT[0].sTAL[89].nIEC_DP       		= 212;
		sT[0].sTAL[89].nIEC_DP_FSZ1  		= 216;
		sT[0].sTAL[89].nIEC_NM				= 308;
		sT[0].sTAL[89].nNMNum		  		= 4;
		sT[0].sTAL[89].nIEC_DP_2BIT1 		= 220;
		sT[0].sTAL[89].nIEC_DP_2BIT_KINT1	= 912;
		sT[0].sTAL[89].nIEC_DP_2BIT_BENT1	= 913;

/* 20-37 TMOK  -----------------------------------------------------------*/
sT[0].sTI[90].nType = TYP_TMOK;

	sT[0].sMOT[90].nIEC_SP				= 1743;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[90].nIEC_DP				= 222;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[90].nIEC_NM				= 1297;		/* Mérések IEC kezdõcíme */

  sT[0].sMOT[90].nNMNum     			= 4;		/* Mérések száma */
	sT[0].sMOT[90].nIEC_NM2				= 1301;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[90].nNMNum2				  = 2;		/* Analóg mérések száma*/

/*  Szentgotthard átjátszó -----------------------------------------------------------*/	
sT[0].sTI[91].nType = TYP_MOT;	

	sT[0].sMOT[91].nIEC_SP			= 1759;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[91].nIEC_SP_NUM		= 5;		/* Egybites értékek száma*/	
	sT[0].sMOT[91].nIEC_DP_NUM		= 0;
	sT[0].sMOT[91].nNMNum      		= 0;

/*  42-56 vTMOK  -----------------------------------------------------------*/
sT[0].sTI[92].nType = TYP_TMOK;

	sT[0].sMOT[92].nIEC_SP				= 1766;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[92].nIEC_DP				= 223;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[92].nIEC_NM				= 315;		/* Mérések IEC kezdõcíme */

/*  43-25 TMOK  -----------------------------------------------------------*/
sT[0].sTI[93].nType = TYP_TMOK;

	sT[0].sMOT[93].nIEC_SP				= 1782;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[93].nIEC_DP				= 224;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[93].nIEC_NM				= 318;		/* Mérések IEC kezdõcíme */

/*  TMOK  -----------------------------------------------------------*/
sT[0].sTI[94].nType = TYP_TMOK;

	sT[0].sMOT[94].nIEC_SP				= 1798;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[94].nIEC_DP				= 225;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[94].nIEC_NM				= 321;		/* Mérések IEC kezdõcíme */

/* Mór, Hammerstein -----------------------------------------------------------*/
sT[0].sTI[95].nType = TYP_TAL;

		sT[0].sTAL[95].nIEC_SP       		= 1814;
		sT[0].sTAL[95].nIEC_OsszevontHiba	= 1846;
		sT[0].sTAL[95].nIEC_MT_KommHiba		= 1847;
		sT[0].sTAL[95].nIEC_DP       		= 226;
		sT[0].sTAL[95].nIEC_DP_FSZ1  		= 230;
		sT[0].sTAL[95].nIEC_NM				= 324;
		sT[0].sTAL[95].nNMNum		  		= 4;
		sT[0].sTAL[95].nIEC_DP_2BIT1 		= 234;
		sT[0].sTAL[95].nIEC_DP_2BIT_KINT1	= 912;
		sT[0].sTAL[95].nIEC_DP_2BIT_BENT1	= 913;

/* Nick, vizieromu -----------------------------------------------------------*/
sT[0].sTI[96].nType = TYP_TAL;

		sT[0].sTAL[96].nIEC_SP       		= 1851;
		sT[0].sTAL[96].nIEC_OsszevontHiba	= 1883;
		sT[0].sTAL[96].nIEC_MT_KommHiba		= 1884;
		sT[0].sTAL[96].nIEC_DP       		= 236;
		sT[0].sTAL[96].nIEC_DP_FSZ1  		= 240;
		sT[0].sTAL[96].nIEC_NM				= 328;
		sT[0].sTAL[96].nNMNum		  		= 11;

/*  42-65 TMOK  -----------------------------------------------------------*/
sT[0].sTI[97].nType = TYP_TMOK;

	sT[0].sMOT[97].nIEC_SP				= 1888;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[97].nIEC_DP				= 244;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[97].nIEC_NM				= 339;		/* Mérések IEC kezdõcíme */
	
/* Szombathely, Merkur ---------------------------------------------------------------*/
sT[0].sTI[98].nType = TYP_MOT;	
	
	sT[0].sMOT[98].nIEC_SP				= 5660;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[98].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[98].nIEC_DP				= 263;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[98].nIEC_DP_NUM			= 6;   		/* Két bites értékek száma*/
	sT[0].sMOT[98].nIEC_NM				= 1180;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[98].nNMNum				= 9;		/* Analóg mérések száma*/
	
/* Tatabanya, Ipari park ---------------------------------------------------------------*/
sT[0].sTI[99].nType = TYP_MOT;		
	sT[0].sMOT[99].nIEC_SP				= 1952;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[99].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[99].nIEC_DP				= 255;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[99].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[99].nIEC_NM				= 348;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[99].nNMNum				= 2;		/* Analóg mérések száma*/

/*  42-70 TMOK  -----------------------------------------------------------*/
sT[0].sTI[100].nType = TYP_TMOK;

	sT[0].sMOT[100].nIEC_SP				= 1904;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[100].nIEC_DP				= 245;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[100].nIEC_NM				= 342;		/* Mérések IEC kezdõcíme */
	
/*  42-81 TMOK  -----------------------------------------------------------*/
sT[0].sTI[101].nType = TYP_TMOK;

	sT[0].sMOT[101].nIEC_SP				= 1920;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[101].nIEC_DP				= 246;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[101].nIEC_NM				= 345;		/* Mérések IEC kezdõcíme */

/* Oroszlány, Takács B ---------------------------------------------------------------*/
sT[0].sTI[102].nType = TYP_MOT;	
	
	sT[0].sMOT[102].nIEC_SP				= 1968;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[102].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[102].nIEC_DP				= 271;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[102].nIEC_DP_NUM			= 4;   		/* Két bites értékek száma*/
	sT[0].sMOT[102].nIEC_NM				= 0;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[102].nNMNum				= 0;		/* Analóg mérések száma*/

/* Oroszlány, B ---------------------------------------------------------------*/
sT[0].sTI[103].nType = TYP_MOT;	
	
	sT[0].sMOT[103].nIEC_SP				= 1984;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[103].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[103].nIEC_DP				= 275;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[103].nIEC_DP_NUM			= 4;   		/* Két bites értékek száma*/
	sT[0].sMOT[103].nIEC_NM				= 0;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[103].nNMNum				= 0;		/* Analóg mérések száma*/

/* Oroszlány, 35A ---------------------------------------------------------------*/
sT[0].sTI[104].nType = TYP_MOT;	
	
	sT[0].sMOT[104].nIEC_SP				= 2000;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[104].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[104].nIEC_DP				= 279;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[104].nIEC_DP_NUM			= 4;   		/* Két bites értékek száma*/
	sT[0].sMOT[104].nIEC_NM				= 0;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[104].nNMNum				= 0;		/* Analóg mérések száma*/

/* Oroszlány, 35 ---------------------------------------------------------------*/
sT[0].sTI[105].nType = TYP_MOT;	
	
	sT[0].sMOT[105].nIEC_SP				= 2016;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[105].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[105].nIEC_DP				= 283;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[105].nIEC_DP_NUM			= 4;   		/* Két bites értékek száma*/
	sT[0].sMOT[105].nIEC_NM				= 0;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[105].nNMNum				= 0;		/* Analóg mérések száma*/

/* Oroszlány, 14 ---------------------------------------------------------------*/
sT[0].sTI[106].nType = TYP_MOT;	
	
	sT[0].sMOT[106].nIEC_SP				= 2032;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[106].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[106].nIEC_DP				= 287;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[106].nIEC_DP_NUM			= 4;   		/* Két bites értékek száma*/
	sT[0].sMOT[106].nIEC_NM				= 0;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[106].nNMNum				= 0;		/* Analóg mérések száma*/






/* Oroszlány, 8 ---------------------------------------------------------------*/
sT[0].sTI[107].nType = TYP_MOT;	
	
	sT[0].sMOT[107].nIEC_SP				= 2048;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[107].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[107].nIEC_DP				= 291;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[107].nIEC_DP_NUM			= 4;   		/* Két bites értékek száma*/
	sT[0].sMOT[107].nIEC_NM				= 0;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[107].nNMNum				= 0;		/* Analóg mérések száma*/


/* Oroszlány, 7 ---------------------------------------------------------------*/
sT[0].sTI[108].nType = TYP_MOT;	
	
	sT[0].sMOT[108].nIEC_SP				= 2064;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[108].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[108].nIEC_DP				= 295;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[108].nIEC_DP_NUM			= 4;   		/* Két bites értékek száma*/
	sT[0].sMOT[108].nIEC_NM				= 0;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[108].nNMNum				= 0;		/* Analóg mérések száma*/

/* Oroszlány, 11 ---------------------------------------------------------------*/
sT[0].sTI[109].nType = TYP_MOT;	
	
	sT[0].sMOT[109].nIEC_SP				= 2080;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[109].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[109].nIEC_DP				= 299;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[109].nIEC_DP_NUM			= 4;   		/* Két bites értékek száma*/
	sT[0].sMOT[109].nIEC_NM				= 0;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[109].nNMNum				= 0;		/* Analóg mérések száma*/


/* Oroszlány, 33 ---------------------------------------------------------------*/
sT[0].sTI[110].nType = TYP_MOT;	
	
	sT[0].sMOT[110].nIEC_SP				= 2096;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[110].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[110].nIEC_DP				= 303;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[110].nIEC_DP_NUM			= 4;   		/* Két bites értékek száma*/
	sT[0].sMOT[110].nIEC_NM				= 0;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[110].nNMNum				= 0;		/* Analóg mérések száma*/


/* 21-34, 21-38 NPS-RTU-NPS TMOK ----------------------------------------------------*/
sT[0].sTI[111].nType = TYP_TMOK;

	sT[0].sMOT[111].nIEC_SP				= 2112;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[111].nIEC_SP_NUM			= 30;		/* Egybites értékek száma*/
	sT[0].sMOT[111].nIEC_DP				= 307;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[111].nIEC_DP_NUM			= 2;   		/* Két bites értékek száma*/
	sT[0].sMOT[111].nIEC_NM				= 350;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[111].nNMNum				= 4;		/* Analóg mérések száma*/


/* Oroszlány, Eszterházy ---------------------------------------------------------------*/
sT[0].sTI[112].nType = TYP_MOT;	
	
	sT[0].sMOT[112].nIEC_SP				= 2146;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[112].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[112].nIEC_DP				= 309;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[112].nIEC_DP_NUM			= 4;   		/* Két bites értékek száma*/
	sT[0].sMOT[112].nIEC_NM				= 0;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[112].nNMNum				= 0;		/* Analóg mérések száma*/

/*  82-44 NPS  -----------------------------------------------------------*/
sT[0].sTI[113].nType = TYP_TMOK;

	sT[0].sMOT[113].nIEC_SP				= 2162;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[113].nIEC_DP				= 313;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[113].nIEC_NM				= 354;		/* Mérések IEC kezdõcíme */


/* Tatabánya, Hõközpont ---------------------------------------------------------------*/
sT[0].sTI[114].nType = TYP_MOT;	
	
	sT[0].sMOT[114].nIEC_SP				= 2178;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[114].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[114].nIEC_DP				= 314;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[114].nIEC_DP_NUM			= 4;   		/* Két bites értékek száma*/
	sT[0].sMOT[114].nIEC_NM				= 0;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[114].nNMNum				= 0;		/* Analóg mérések száma*/

/* Tatabánya, Sárberek A ---------------------------------------------------------------*/
sT[0].sTI[115].nType = TYP_MOT;	
	
	sT[0].sMOT[115].nIEC_SP				= 2194;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[115].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[115].nIEC_DP				= 318;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[115].nIEC_DP_NUM			= 4;   		/* Két bites értékek száma*/
	sT[0].sMOT[115].nIEC_NM				= 0;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[115].nNMNum				= 0;		/* Analóg mérések száma*/

/* Oroszlány, Gimnázium ---------------------------------------------------------------*/
sT[0].sTI[116].nType = TYP_MOT;	
	
	sT[0].sMOT[116].nIEC_SP				= 2210;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[116].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[116].nIEC_DP				= 322;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[116].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[116].nIEC_NM				= 357;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[116].nNMNum				= 2;		/* Analóg mérések száma*/

/* Tatabánya, SCI ---------------------------------------------------------------*/
sT[0].sTI[117].nType = TYP_MOT;	
	
	sT[0].sMOT[117].nIEC_SP				= 2226;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[117].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[117].nIEC_DP				= 330;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[117].nIEC_DP_NUM			= 4;   		/* Két bites értékek száma*/
	sT[0].sMOT[117].nIEC_NM				= 0;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[117].nNMNum				= 0;		/* Analóg mérések száma*/

/*  81-92 NPS  -----------------------------------------------------------*/
sT[0].sTI[118].nType = TYP_TMOK;

	sT[0].sMOT[118].nIEC_SP				= 2258;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[118].nIEC_DP				= 335;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[118].nIEC_NM				= 362;		/* Mérések IEC kezdõcíme */

/*  81-41 NPS  -----------------------------------------------------------*/
sT[0].sTI[119].nType = TYP_TMOK;

	sT[0].sMOT[119].nIEC_SP				= 2242;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[119].nIEC_DP				= 334;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[119].nIEC_NM				= 359;		/* Mérések IEC kezdõcíme */

/* Jánossomorja J01, széleromu -----------------------------------------------------------*/
sT[0].sTI[120].nType = TYP_TAL;

		sT[0].sTAL[120].nIEC_SP       		= 2274;
		sT[0].sTAL[120].nIEC_OsszevontHiba	= 2306;
		sT[0].sTAL[120].nIEC_MT_KommHiba	= 2307;
		sT[0].sTAL[120].nIEC_DP       		= 336;
		sT[0].sTAL[120].nIEC_DP_FSZ1  		= 340;
		sT[0].sTAL[120].nIEC_NM				= 365;
		sT[0].sTAL[120].nNMNum		  		= 11;
		sT[0].sTAL[120].nKommStatusNum		= 2;
    
    sT[0].sTAL[120].nSP_EXTRA_OFFSET		= 5652;
  	sT[0].sTAL[120].nSP_EXTRA_NUM		= 2;


/*  82-66 OK2  -----------------------------------------------------------*/
sT[0].sTI[121].nType = TYP_TMOK;

	sT[0].sMOT[121].nIEC_SP				= 2311;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[121].nIEC_DP				= 344;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[121].nIEC_NM				= 376;		/* Mérések IEC kezdõcíme */
/*  82-40 OK2  -----------------------------------------------------------*/
sT[0].sTI[122].nType = TYP_TMOK;

	sT[0].sMOT[122].nIEC_SP				= 2327;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[122].nIEC_DP				= 345;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[122].nIEC_NM				= 379;		/* Mérések IEC kezdõcíme */
/*  82-63 OK2  -----------------------------------------------------------*/
sT[0].sTI[123].nType = TYP_TMOK;

	sT[0].sMOT[123].nIEC_SP				= 2343;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[123].nIEC_DP				= 346;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[123].nIEC_NM				= 382;		/* Mérések IEC kezdõcíme */
/*  82-79 OK2  -----------------------------------------------------------*/
sT[0].sTI[124].nType = TYP_TMOK;

	sT[0].sMOT[124].nIEC_SP				= 2359;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[124].nIEC_DP				= 347;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[124].nIEC_NM				= 385;		/* Mérések IEC kezdõcíme */
	
	
	
/*  41-08 OK2  -----------------------------------------------------------*/
sT[0].sTI[125].nType = TYP_TMOK;

	sT[0].sMOT[125].nIEC_SP				= 2375;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[125].nIEC_DP				= 348;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[125].nIEC_NM				= 388;		/* Mérések IEC kezdõcíme */
/*  40-55 OK2  -----------------------------------------------------------*/
sT[0].sTI[126].nType = TYP_TMOK;

	sT[0].sMOT[126].nIEC_SP				= 2391;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[126].nIEC_DP				= 349;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[126].nIEC_NM				= 391;		/* Mérések IEC kezdõcíme */
/*  41-23 OK2  -----------------------------------------------------------*/
sT[0].sTI[127].nType = TYP_TMOK;

	sT[0].sMOT[127].nIEC_SP				= 2407;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[127].nIEC_DP				= 350;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[127].nIEC_NM				= 394;		/* Mérések IEC kezdõcíme */
/*  41-28 OK2  -----------------------------------------------------------*/
sT[0].sTI[128].nType = TYP_TMOK;

	sT[0].sMOT[128].nIEC_SP				= 2423;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[128].nIEC_DP				= 351;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[128].nIEC_NM				= 397;		/* Mérések IEC kezdõcíme */
/*  41-68 OK2  -----------------------------------------------------------*/
sT[0].sTI[129].nType = TYP_TMOK;

	sT[0].sMOT[129].nIEC_SP				= 2439;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[129].nIEC_DP				= 352;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[129].nIEC_NM				= 400;		/* Mérések IEC kezdõcíme */
/*  42-63 OK2  -----------------------------------------------------------*/
sT[0].sTI[130].nType = TYP_TMOK;

	sT[0].sMOT[130].nIEC_SP				= 2455;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[130].nIEC_DP				= 353;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[130].nIEC_NM				= 403;		/* Mérések IEC kezdõcíme */
/*  42-66 OK2  -----------------------------------------------------------*/
sT[0].sTI[131].nType = TYP_TMOK;

	sT[0].sMOT[131].nIEC_SP				= 2471;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[131].nIEC_DP				= 354;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[131].nIEC_NM				= 406;		/* Mérések IEC kezdõcíme */
/*  48-500 OK2  -----------------------------------------------------------*/
sT[0].sTI[132].nType = TYP_TMOK;

	sT[0].sMOT[132].nIEC_SP				= 2487;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[132].nIEC_DP				= 355;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[132].nIEC_NM				= 409;		/* Mérések IEC kezdõcíme */
/*  48-523 OK2  -----------------------------------------------------------*/
sT[0].sTI[133].nType = TYP_TMOK;

	sT[0].sMOT[133].nIEC_SP				= 2503;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[133].nIEC_DP				= 356;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[133].nIEC_NM				= 412;		/* Mérések IEC kezdõcíme */
/*  31-01 OK2  -----------------------------------------------------------*/
sT[0].sTI[134].nType = TYP_TMOK;

	sT[0].sMOT[134].nIEC_SP				= 2519;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[134].nIEC_DP				= 357;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[134].nIEC_NM				= 1351;		/* Mérések IEC kezdõcíme */

  sT[0].sMOT[134].nNMNum     			= 4;		/* Mérések száma */
	sT[0].sMOT[134].nIEC_NM2				= 1355;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[134].nNMNum2				  = 2;		/* Analóg mérések száma*/

/*  30-26 OK2  -----------------------------------------------------------*/
sT[0].sTI[135].nType = TYP_TMOK;

	sT[0].sMOT[135].nIEC_SP				= 2535;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[135].nIEC_DP				= 358;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[135].nIEC_NM				= 1425;		/* Mérések IEC kezdõcíme */
  
  sT[0].sMOT[135].nNMNum     			= 4;		/* Mérések száma */
	sT[0].sMOT[135].nIEC_NM2				= 1429;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[135].nNMNum2				  = 2;		/* Analóg mérések száma*/
  
/*  30-79 OK2  -----------------------------------------------------------*/
sT[0].sTI[136].nType = TYP_TMOK;

	sT[0].sMOT[136].nIEC_SP				= 2551;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[136].nIEC_DP				= 359;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[136].nIEC_NM				= 1168;		/* Mérések IEC kezdõcíme */

  sT[0].sMOT[136].nNMNum     			= 4;		/* Mérések száma */
	sT[0].sMOT[136].nIEC_NM2				= 1172;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[136].nNMNum2				  = 2;		/* Analóg mérések száma*/

/*  30-93 OK2  -----------------------------------------------------------*/
sT[0].sTI[137].nType = TYP_TMOK;

	sT[0].sMOT[137].nIEC_SP				= 2567;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[137].nIEC_DP				= 360;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[137].nIEC_NM				= 1363;		/* Mérések IEC kezdõcíme */

  sT[0].sMOT[137].nNMNum     			= 4;		/* Mérések száma */
	sT[0].sMOT[137].nIEC_NM2				= 1367;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[137].nNMNum2				  = 2;		/* Analóg mérések száma*/

/*  31-96 OK2  -----------------------------------------------------------*/
sT[0].sTI[138].nType = TYP_TMOK;

	sT[0].sMOT[138].nIEC_SP				= 2583;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[138].nIEC_DP				= 361;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[138].nIEC_NM				= 1255;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[138].nNMNum     			= 4;		/* Mérések száma */
	sT[0].sMOT[138].nIEC_NM2			= 1259;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[138].nNMNum2				= 2;		/* Analóg mérések száma*/
	
/*  32-19 OK2  -----------------------------------------------------------*/
sT[0].sTI[139].nType = TYP_TMOK;

	sT[0].sMOT[139].nIEC_SP				= 2599;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[139].nIEC_DP				= 362;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[139].nIEC_NM				= 1195;		/* Mérések IEC kezdõcíme */

  sT[0].sMOT[139].nNMNum     			= 4;		/* Mérések száma */
	sT[0].sMOT[139].nIEC_NM2				= 1199;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[139].nNMNum2				  = 2;		/* Analóg mérések száma*/

/*  32-14 OK2  -----------------------------------------------------------*/
sT[0].sTI[140].nType = TYP_TMOK;

	sT[0].sMOT[140].nIEC_SP				= 2615;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[140].nIEC_DP				= 363;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[140].nIEC_NM				= 1189;		/* Mérések IEC kezdõcíme */

  sT[0].sMOT[140].nNMNum     			= 4;		/* Mérések száma */
	sT[0].sMOT[140].nIEC_NM2				= 1193;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[140].nNMNum2				  = 2;		/* Analóg mérések száma*/

/*  32-27 OK2  -----------------------------------------------------------*/
sT[0].sTI[141].nType = TYP_TMOK;

	sT[0].sMOT[141].nIEC_SP				= 2631;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[141].nIEC_DP				= 364;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[141].nIEC_NM				= 1377;		/* Mérések IEC kezdõcíme */
  
  sT[0].sMOT[141].nNMNum     			= 4;		/* Mérések száma */
	sT[0].sMOT[141].nIEC_NM2				= 1381;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[141].nNMNum2				  = 2;		/* Analóg mérések száma*/
  
/*  34-11 OK2  -----------------------------------------------------------*/
sT[0].sTI[142].nType = TYP_TMOK;

	sT[0].sMOT[142].nIEC_SP				= 2647;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[142].nIEC_DP				= 365;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[142].nIEC_NM				= 439;		/* Mérések IEC kezdõcíme */

/*  35-19 OK2  -----------------------------------------------------------*/
sT[0].sTI[143].nType = TYP_TMOK;

	sT[0].sMOT[143].nIEC_SP				= 2663;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[143].nIEC_DP				= 366;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[143].nIEC_NM				= 442;		/* Mérések IEC kezdõcíme */
/*  35-62 OK2  -----------------------------------------------------------*/
sT[0].sTI[144].nType = TYP_TMOK;

	sT[0].sMOT[144].nIEC_SP				= 2679;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[144].nIEC_DP				= 367;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[144].nIEC_NM				= 445;		/* Mérések IEC kezdõcíme */
	
	
/*  12-16 PM6  -----------------------------------------------------------*/
sT[0].sTI[145].nType = TYP_TMOK;

	sT[0].sMOT[145].nIEC_SP				= 2695;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[145].nIEC_DP				= 368;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[145].nIEC_NM				= 1405;		/* Mérések IEC kezdõcíme */
  
  sT[0].sMOT[145].nNMNum     			= 4;		/* Mérések száma */
	sT[0].sMOT[145].nIEC_NM2				= 1409;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[145].nNMNum2				  = 2;		/* Analóg mérések száma*/
  
/*  12-37 OK2  -----------------------------------------------------------*/
sT[0].sTI[146].nType = TYP_TMOK;

	sT[0].sMOT[146].nIEC_SP				= 2711;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[146].nIEC_DP				= 369;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[146].nIEC_NM				= 451;		/* Mérések IEC kezdõcíme */
/*  14-45 OK2  -----------------------------------------------------------*/
sT[0].sTI[147].nType = TYP_TMOK;

	sT[0].sMOT[147].nIEC_SP				= 2727;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[147].nIEC_DP				= 370;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[147].nIEC_NM				= 454;		/* Mérések IEC kezdõcíme */
/*  14-48 OK2  -----------------------------------------------------------*/
sT[0].sTI[148].nType = TYP_TMOK;

	sT[0].sMOT[148].nIEC_SP				= 2743;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[148].nIEC_DP				= 371;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[148].nIEC_NM				= 457;		/* Mérések IEC kezdõcíme */
/*  64-76 OK2  -----------------------------------------------------------*/
sT[0].sTI[149].nType = TYP_TMOK;

	sT[0].sMOT[149].nIEC_SP				= 2759;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[149].nIEC_DP				= 372;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[149].nIEC_NM				= 460;		/* Mérések IEC kezdõcíme */
/*  80-10 OK2  -----------------------------------------------------------*/
sT[0].sTI[150].nType = TYP_TMOK;

	sT[0].sMOT[150].nIEC_SP				= 2775;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[150].nIEC_DP				= 373;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[150].nIEC_NM				= 463;		/* Mérések IEC kezdõcíme */
/*  80-15 OK2  -----------------------------------------------------------*/
sT[0].sTI[151].nType = TYP_TMOK;

	sT[0].sMOT[151].nIEC_SP				= 2791;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[151].nIEC_DP				= 374;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[151].nIEC_NM				= 466;		/* Mérések IEC kezdõcíme */
/*  80-73 OK2  -----------------------------------------------------------*/
sT[0].sTI[152].nType = TYP_TMOK;

	sT[0].sMOT[152].nIEC_SP				= 2807;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[152].nIEC_DP				= 375;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[152].nIEC_NM				= 469;		/* Mérések IEC kezdõcíme */
/*  21-36 OK2  -----------------------------------------------------------*/
sT[0].sTI[153].nType = TYP_TMOK;

	sT[0].sMOT[153].nIEC_SP				= 2823;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[153].nIEC_DP				= 376;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[153].nIEC_NM				= 472;		/* Mérések IEC kezdõcíme */
/*  20-20 OK2  -----------------------------------------------------------*/
sT[0].sTI[154].nType = TYP_TMOK;

	sT[0].sMOT[154].nIEC_SP				= 2839;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[154].nIEC_DP				= 377;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[154].nIEC_NM				= 1273;		/* Mérések IEC kezdõcíme */
  
  sT[0].sMOT[154].nNMNum     			= 4;		/* Mérések száma */
	sT[0].sMOT[154].nIEC_NM2				= 1277;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[154].nNMNum2				  = 2;		/* Analóg mérések száma*/

/*  81-62 OK2  -----------------------------------------------------------*/
sT[0].sTI[155].nType = TYP_TMOK;

	sT[0].sMOT[155].nIEC_SP				= 2855;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[155].nIEC_DP				= 378;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[155].nIEC_NM				= 481;		/* Mérések IEC kezdõcíme */
/*  81-48 OK2  -----------------------------------------------------------*/
sT[0].sTI[156].nType = TYP_TMOK;

	sT[0].sMOT[156].nIEC_SP				= 2871;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[156].nIEC_DP				= 379;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[156].nIEC_NM				= 484;		/* Mérések IEC kezdõcíme */
/*  81-60 OK2  -----------------------------------------------------------*/
sT[0].sTI[157].nType = TYP_TMOK;

	sT[0].sMOT[157].nIEC_SP				= 2887;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[157].nIEC_DP				= 380;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[157].nIEC_NM				= 487;		/* Mérések IEC kezdõcíme */
/*  81-04 OK2  -----------------------------------------------------------*/
sT[0].sTI[158].nType = TYP_TMOK;

	sT[0].sMOT[158].nIEC_SP				= 2903;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[158].nIEC_DP				= 381;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[158].nIEC_NM				= 490;		/* Mérések IEC kezdõcíme */
/*  81-46 OK2  -----------------------------------------------------------*/
sT[0].sTI[159].nType = TYP_TMOK;

	sT[0].sMOT[159].nIEC_SP				= 2919;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[159].nIEC_DP				= 382;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[159].nIEC_NM				= 493;		/* Mérések IEC kezdõcíme */
/*  81-91 OK2  -----------------------------------------------------------*/
sT[0].sTI[160].nType = TYP_TMOK;

	sT[0].sMOT[160].nIEC_SP				= 2935;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[160].nIEC_DP				= 383;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[160].nIEC_NM				= 496;		/* Mérések IEC kezdõcíme */
/*  81-96 OK2  -----------------------------------------------------------*/
sT[0].sTI[161].nType = TYP_TMOK;

	sT[0].sMOT[161].nIEC_SP				= 2951;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[161].nIEC_DP				= 384;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[161].nIEC_NM				= 499;		/* Mérések IEC kezdõcíme */
/*  20-34 OK2  -----------------------------------------------------------*/
sT[0].sTI[162].nType = TYP_TMOK;

	sT[0].sMOT[162].nIEC_SP				= 2967;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[162].nIEC_DP				= 385;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[162].nIEC_NM				= 1213;		/* Mérések IEC kezdõcíme */

  sT[0].sMOT[162].nNMNum     			= 4;		/* Mérések száma */
	sT[0].sMOT[162].nIEC_NM2				= 1217;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[162].nNMNum2				  = 2;		/* Analóg mérések száma*/

/*  91-03 OK2  -----------------------------------------------------------*/
sT[0].sTI[163].nType = TYP_TMOK;

	sT[0].sMOT[163].nIEC_SP				= 2983;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[163].nIEC_DP				= 386;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[163].nIEC_NM				= 505;		/* Mérések IEC kezdõcíme */
	
/* Szentgotthárd, FERSINT ---------------------------------------------------------------*/
sT[0].sTI[164].nType = TYP_MOT;	
	
	sT[0].sMOT[164].nIEC_SP				= 3047;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[164].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[164].nIEC_DP				= 390;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[164].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[164].nIEC_NM				= 517;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[164].nNMNum				= 2;		/* Analóg mérések száma*/
	
/*  91-68 OK2  -----------------------------------------------------------*/
sT[0].sTI[165].nType = TYP_TMOK;

	sT[0].sMOT[165].nIEC_SP				= 2999;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[165].nIEC_DP				= 387;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[165].nIEC_NM				= 508;		/* Mérések IEC kezdõcíme */
	
/*  91-83 OK2  -----------------------------------------------------------*/
sT[0].sTI[166].nType = TYP_TMOK;

	sT[0].sMOT[166].nIEC_SP				= 3015;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[166].nIEC_DP				= 388;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[166].nIEC_NM				= 511;		/* Mérések IEC kezdõcíme */
	
/*  92-08 OK2  -----------------------------------------------------------*/
sT[0].sTI[167].nType = TYP_TMOK;

	sT[0].sMOT[167].nIEC_SP				= 3031;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[167].nIEC_DP				= 389;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[167].nIEC_NM				= 514;		/* Mérések IEC kezdõcíme */
	
/*  30-31 OK2  -----------------------------------------------------------*/
sT[0].sTI[168].nType = TYP_TMOK;

	sT[0].sMOT[168].nIEC_SP				= 3063;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[168].nIEC_DP				= 398;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[168].nIEC_NM				= 1309;		/* Mérések IEC kezdõcíme */

  sT[0].sMOT[168].nNMNum     			= 4;		  /* Mérések száma */
	sT[0].sMOT[168].nIEC_NM2				= 1313;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[168].nNMNum2				  = 2;		  /* Analóg mérések száma*/

/* Jánossomorja J06, széleromu -----------------------------------------------------------*/
sT[0].sTI[169].nType = TYP_TAL;

		sT[0].sTAL[169].nIEC_SP       		= 3079;
		sT[0].sTAL[169].nIEC_OsszevontHiba	= 3111;
		sT[0].sTAL[169].nIEC_MT_KommHiba	= 3112;
		sT[0].sTAL[169].nIEC_DP       		= 399;
		sT[0].sTAL[169].nIEC_DP_FSZ1  		= 403;
		sT[0].sTAL[169].nIEC_NM				= 522;
		sT[0].sTAL[169].nNMNum		  		= 11;
		sT[0].sTAL[169].nKommStatusNum		= 2;

    sT[0].sTAL[169].nSP_EXTRA_OFFSET		= 5654;
  	sT[0].sTAL[169].nSP_EXTRA_NUM		= 2;

/* Jánossomorja J02-3, széleromu -----------------------------------------------------------*/
sT[0].sTI[170].nType = TYP_TAL;

		sT[0].sTAL[170].nIEC_SP       		= 3116;
		sT[0].sTAL[170].nIEC_OsszevontHiba	= 3148;
		sT[0].sTAL[170].nIEC_MT_KommHiba	= 3149;
		sT[0].sTAL[170].nIEC_DP       		= 407;
		sT[0].sTAL[170].nIEC_DP_FSZ1  		= 411;
		sT[0].sTAL[170].nIEC_NM				= 533;
		sT[0].sTAL[170].nNMNum		  		= 11;
		sT[0].sTAL[170].nKommStatusNum		= 2;
		sT[0].sTAL[170].nIEC_DP_2BIT1 		= 415;
		sT[0].sTAL[170].nIEC_DP_2BIT_KINT1	= 913;
		sT[0].sTAL[170].nIEC_DP_2BIT_BENT1	= 912;
		sT[0].sTAL[170].nIEC_DP_2BIT2 		= 416;
		sT[0].sTAL[170].nIEC_DP_2BIT_KINT2	= 925;
		sT[0].sTAL[170].nIEC_DP_2BIT_BENT2	= 920;

    sT[0].sTAL[170].nSP_EXTRA_OFFSET		= 5656;
  	sT[0].sTAL[170].nSP_EXTRA_NUM		= 2;
		
/* Jánossomorja J04-5, széleromu -----------------------------------------------------------*/
sT[0].sTI[171].nType = TYP_TAL;

		sT[0].sTAL[171].nIEC_SP       		= 3153;
		sT[0].sTAL[171].nIEC_OsszevontHiba	= 3185;
		sT[0].sTAL[171].nIEC_MT_KommHiba	= 3186;
		sT[0].sTAL[171].nIEC_DP       		= 417;
		sT[0].sTAL[171].nIEC_DP_FSZ1  		= 421;
		sT[0].sTAL[171].nIEC_NM				= 544;
		sT[0].sTAL[171].nNMNum		  		= 11;
		sT[0].sTAL[171].nKommStatusNum		= 2;
		sT[0].sTAL[171].nIEC_DP_2BIT1 		= 425;
		sT[0].sTAL[171].nIEC_DP_2BIT_KINT1	= 913;
		sT[0].sTAL[171].nIEC_DP_2BIT_BENT1	= 912;
		sT[0].sTAL[171].nIEC_DP_2BIT2 		= 426;
		sT[0].sTAL[171].nIEC_DP_2BIT_KINT2	= 925;
		sT[0].sTAL[171].nIEC_DP_2BIT_BENT2	= 920;

    sT[0].sTAL[171].nSP_EXTRA_OFFSET		= 5658;
  	sT[0].sTAL[171].nSP_EXTRA_NUM		= 2;


/*  92-49 OK2  -----------------------------------------------------------*/
sT[0].sTI[172].nType = TYP_TMOK;

	sT[0].sMOT[172].nIEC_SP				= 3190;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[172].nIEC_DP				= 427;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[172].nIEC_NM				= 555;		/* Mérések IEC kezdõcíme */
/*  70-33 OK2  -----------------------------------------------------------*/
sT[0].sTI[173].nType = TYP_TMOK;

	sT[0].sMOT[173].nIEC_SP				= 3206;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[173].nIEC_DP				= 428;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[173].nIEC_NM				= 558;		/* Mérések IEC kezdõcíme */
/*  70-42 OK2  -----------------------------------------------------------*/
sT[0].sTI[174].nType = TYP_TMOK;

	sT[0].sMOT[174].nIEC_SP				= 3222;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[174].nIEC_DP				= 429;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[174].nIEC_NM				= 561;		/* Mérések IEC kezdõcíme */
/*  70-44 OK2  -----------------------------------------------------------*/
sT[0].sTI[175].nType = TYP_TMOK;

	sT[0].sMOT[175].nIEC_SP				= 3238;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[175].nIEC_DP				= 430;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[175].nIEC_NM				= 564;		/* Mérések IEC kezdõcíme */
/*  72-63 OK2  -----------------------------------------------------------*/
sT[0].sTI[176].nType = TYP_TMOK;

	sT[0].sMOT[176].nIEC_SP				= 3254;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[176].nIEC_DP				= 431;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[176].nIEC_NM				= 567;		/* Mérések IEC kezdõcíme */
/*  91-20 OK2  -----------------------------------------------------------*/
sT[0].sTI[177].nType = TYP_TMOK;

	sT[0].sMOT[177].nIEC_SP				= 3270;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[177].nIEC_DP				= 432;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[177].nIEC_NM				= 570;		/* Mérések IEC kezdõcíme */
/*  49-438 OK2  -----------------------------------------------------------*/
sT[0].sTI[178].nType = TYP_TMOK;

	sT[0].sMOT[178].nIEC_SP				= 3286;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[178].nIEC_DP				= 433;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[178].nIEC_NM				= 573;		/* Mérések IEC kezdõcíme */
/*  40-68 OK2  -----------------------------------------------------------*/
sT[0].sTI[179].nType = TYP_TMOK;

	sT[0].sMOT[179].nIEC_SP				= 3302;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[179].nIEC_DP				= 434;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[179].nIEC_NM				= 78;		/* Mérések IEC kezdõcíme */
  
  sT[0].sMOT[179].nNMNum     			= 4;		  /* Mérések száma */
	sT[0].sMOT[179].nIEC_NM2				= 82;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[179].nNMNum2				  = 2;		  /* Analóg mérések száma*/
  
/*  41-09 OK2  -----------------------------------------------------------*/
sT[0].sTI[180].nType = TYP_TMOK;

	sT[0].sMOT[180].nIEC_SP				= 3318;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[180].nIEC_DP				= 435;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[180].nIEC_NM				= 579;		/* Mérések IEC kezdõcíme */
/*  42-29 OK2  -----------------------------------------------------------*/
sT[0].sTI[181].nType = TYP_TMOK;

	sT[0].sMOT[181].nIEC_SP				= 3334;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[181].nIEC_DP				= 436;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[181].nIEC_NM				= 582;		/* Mérések IEC kezdõcíme */
/*  42-50 OK2  -----------------------------------------------------------*/
sT[0].sTI[182].nType = TYP_TMOK;

	sT[0].sMOT[182].nIEC_SP				= 3350;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[182].nIEC_DP				= 437;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[182].nIEC_NM				= 585;		/* Mérések IEC kezdõcíme */
/*  42-96 OK2  -----------------------------------------------------------*/
sT[0].sTI[183].nType = TYP_TMOK;

	sT[0].sMOT[183].nIEC_SP				= 3366;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[183].nIEC_DP				= 438;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[183].nIEC_NM				= 588;		/* Mérések IEC kezdõcíme */
/*  44-15 OK2  -----------------------------------------------------------*/
sT[0].sTI[184].nType = TYP_TMOK;

	sT[0].sMOT[184].nIEC_SP				= 3382;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[184].nIEC_DP				= 439;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[184].nIEC_NM				= 591;		/* Mérések IEC kezdõcíme */
/*  91-21 OK2  -----------------------------------------------------------*/
sT[0].sTI[185].nType = TYP_TMOK;

	sT[0].sMOT[185].nIEC_SP				= 3398;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[185].nIEC_DP				= 440;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[185].nIEC_NM				= 594;		/* Mérések IEC kezdõcíme */
/*  92-51 OK2  -----------------------------------------------------------*/
sT[0].sTI[186].nType = TYP_TMOK;

	sT[0].sMOT[186].nIEC_SP				= 3414;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[186].nIEC_DP				= 441;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[186].nIEC_NM				= 597;		/* Mérések IEC kezdõcíme */

/*  86-63 OK2  -----------------------------------------------------------*/
sT[0].sTI[187].nType = TYP_TMOK;

	sT[0].sMOT[187].nIEC_SP				= 3430;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[187].nIEC_DP				= 442;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[187].nIEC_NM				= 600;		/* Mérések IEC kezdõcíme */
/*  10-31 OK2  -----------------------------------------------------------*/
sT[0].sTI[188].nType = TYP_TMOK;

	sT[0].sMOT[188].nIEC_SP				= 3446;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[188].nIEC_DP				= 443;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[188].nIEC_NM				= 603;		/* Mérések IEC kezdõcíme */

/* Ács, széleromu -----------------------------------------------------------*/
sT[0].sTI[189].nType = TYP_TAL;

		sT[0].sTAL[189].nIEC_SP       		= 3462;
		sT[0].sTAL[189].nIEC_OsszevontHiba	= 3494;
		sT[0].sTAL[189].nIEC_MT_KommHiba	= 3495;
		sT[0].sTAL[189].nIEC_DP       		= 444;
		sT[0].sTAL[189].nIEC_DP_FSZ1  		= 448;
		sT[0].sTAL[189].nIEC_NM				= 606;
		sT[0].sTAL[189].nNMNum		  		= 11;
		sT[0].sTAL[189].nKommStatusNum		= 2;

/* Móvár, Frankel Leó ---------------------------------------------------------------*/
sT[0].sTI[190].nType = TYP_MOT;	
	
	sT[0].sMOT[190].nIEC_SP				= 3499;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[190].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[190].nIEC_DP				= 452;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[190].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[190].nIEC_NM				= 617;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[190].nNMNum				= 4;		/* Analóg mérések száma*/

/* Móvár, Fõ út ---------------------------------------------------------------*/
sT[0].sTI[191].nType = TYP_MOT;	
	
	sT[0].sMOT[191].nIEC_SP				= 3517;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[191].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[191].nIEC_DP				= 460;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[191].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[191].nIEC_NM				= 621;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[191].nNMNum				= 4;		/* Analóg mérések száma*/
/* Tata, Fazekas út ---------------------------------------------------------------*/
sT[0].sTI[192].nType = TYP_MOT;	
	
	sT[0].sMOT[192].nIEC_SP				= 3535;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[192].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[192].nIEC_DP				= 468;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[192].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[192].nIEC_NM				= 625;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[192].nNMNum				= 4;		/* Analóg mérések száma*/
/* Tata, Honvéd u. ---------------------------------------------------------------*/
sT[0].sTI[193].nType = TYP_MOT;	
	
	sT[0].sMOT[193].nIEC_SP				= 3553;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[193].nIEC_SP_NUM			= 14;		/* Egybites értékek száma*/
	sT[0].sMOT[193].nIEC_DP				= 476;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[193].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[193].nIEC_NM				= 629;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[193].nNMNum				= 4;		/* Analóg mérések száma*/
/*  91-84 OK2  -----------------------------------------------------------*/
sT[0].sTI[194].nType = TYP_TMOK;

	sT[0].sMOT[194].nIEC_SP				= 3569;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[194].nIEC_DP				= 484;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[194].nIEC_NM				= 633;		/* Mérések IEC kezdõcíme */
/* Zalaegerszeg, Kálvária ---------------------------------------------------------------*/
sT[0].sTI[195].nType = TYP_MOT;	
	
	sT[0].sMOT[195].nIEC_SP				= 3585;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[195].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[195].nIEC_DP				= 485;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[195].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[195].nIEC_NM				= 636;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[195].nNMNum				= 4;		/* Analóg mérések száma*/
/* Zalaegerszeg, Kórház ---------------------------------------------------------------*/
sT[0].sTI[196].nType = TYP_MOT;	
	
	sT[0].sMOT[196].nIEC_SP				= 3603;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[196].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[196].nIEC_DP				= 500;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[196].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[196].nIEC_NM				= 640;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[196].nNMNum				= 4;		/* Analóg mérések száma*/
	
/*  41-75 OK2  -----------------------------------------------------------*/
sT[0].sTI[197].nType = TYP_TMOK;

	sT[0].sMOT[197].nIEC_SP				= 3621;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[197].nIEC_DP				= 508;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[197].nIEC_NM				= 644;		/* Mérések IEC kezdõcíme */
/*  45-23 OK2  -----------------------------------------------------------*/
sT[0].sTI[198].nType = TYP_TMOK;

	sT[0].sMOT[198].nIEC_SP				= 3637;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[198].nIEC_DP				= 509;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[198].nIEC_NM				= 1148;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[198].nNMNum				= 4;		/* Analóg mérések száma*/
		sT[0].sMOT[198].nIEC_NM2				  = 1411;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[198].nNMNum2				  = 2;		/* Analóg mérések száma*/
	
/* Zalaegerszeg, Kórház ---------------------------------------------------------------*/
sT[0].sTI[199].nType = TYP_MOT;	
	
	sT[0].sMOT[199].nIEC_SP				= 3653;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[199].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[199].nIEC_DP				= 510;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[199].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[199].nIEC_NM				= 650;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[199].nNMNum				= 9;		/* Analóg mérések száma*/
/*  82-06 OK2  -----------------------------------------------------------*/
sT[0].sTI[200].nType = TYP_TMOK;

	sT[0].sMOT[200].nIEC_SP				= 3671;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[200].nIEC_DP				= 518;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[200].nIEC_NM				= 659;		/* Mérések IEC kezdõcíme */
	
/*  41-55 OK2  -----------------------------------------------------------*/
sT[0].sTI[201].nType = TYP_TMOK;

	sT[0].sMOT[201].nIEC_SP				= 3687;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[201].nIEC_DP				= 519;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[201].nIEC_NM				= 662;		/* Mérések IEC kezdõcíme */
	
/* Székesfehérvár, 119 ---------------------------------------------------------------*/
sT[0].sTI[202].nType = TYP_MOT;	
	
	sT[0].sMOT[202].nIEC_SP				= 3703;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[202].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[202].nIEC_DP				= 520;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[202].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[202].nIEC_NM				= 665;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[202].nNMNum				= 4;		/* Analóg mérések száma*/
/* Székesfehérvár, 252 ---------------------------------------------------------------*/
sT[0].sTI[203].nType = TYP_MOT;	
	
	sT[0].sMOT[203].nIEC_SP				= 3719;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[203].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[203].nIEC_DP				= 528;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[203].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[203].nIEC_NM				= 669;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[203].nNMNum				= 4;		/* Analóg mérések száma*/
/* Tata, 5x18 lakás ---------------------------------------------------------------*/
sT[0].sTI[204].nType = TYP_MOT;	
	
	sT[0].sMOT[204].nIEC_SP				= 3737;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[204].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[204].nIEC_DP				= 536;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[204].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[204].nIEC_NM				= 673;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[204].nNMNum				= 4;		/* Analóg mérések száma*/
/* Szõlõdomb, lakópark ---------------------------------------------------------------*/
sT[0].sTI[205].nType = TYP_MOT;	
	
	sT[0].sMOT[205].nIEC_SP				= 3753;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[205].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[205].nIEC_DP				= 544;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[205].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[205].nIEC_NM				= 677;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[205].nNMNum				= 4;		/* Analóg mérések száma*/
/* Székesfehérvár, Ipari park ---------------------------------------------------------------*/
sT[0].sTI[206].nType = TYP_MOT;	
	
	sT[0].sMOT[206].nIEC_SP				= 3769;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[206].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[206].nIEC_DP				= 552;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[206].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[206].nIEC_NM				= 681;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[206].nNMNum				= 4;		/* Analóg mérések száma*/
	
	
/*  30-86 OK2  -----------------------------------------------------------*/
sT[0].sTI[207].nType = TYP_TMOK;

	sT[0].sMOT[207].nIEC_SP				= 3787;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[207].nIEC_DP				= 560;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[207].nIEC_NM				= 1174;		/* Mérések IEC kezdõcíme */

  sT[0].sMOT[207].nNMNum     			= 4;		/* Mérések száma */
	sT[0].sMOT[207].nIEC_NM2				  = 1178;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[207].nNMNum2				  = 2;		/* Analóg mérések száma*/

/*  34-77 (31-77) OK2  -----------------------------------------------------------*/
sT[0].sTI[208].nType = TYP_TMOK;

	sT[0].sMOT[208].nIEC_SP				= 3803;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[208].nIEC_DP				= 561;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[208].nIEC_NM				= 688;		/* Mérések IEC kezdõcíme */
	
/*  32-10 OK2  -----------------------------------------------------------*/
sT[0].sTI[209].nType = TYP_TMOK;

	sT[0].sMOT[209].nIEC_SP				= 3819;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[209].nIEC_DP				= 562;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[209].nIEC_NM				= 691;		/* Mérések IEC kezdõcíme */
/*  30-60 OK2  -----------------------------------------------------------*/
sT[0].sTI[210].nType = TYP_TMOK;

	sT[0].sMOT[210].nIEC_SP				= 3835;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[210].nIEC_DP				= 563;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[210].nIEC_NM				= 1339;		/* Mérések IEC kezdõcíme */

  sT[0].sMOT[210].nNMNum     			= 4;		/* Mérések száma */
	sT[0].sMOT[210].nIEC_NM2				= 1343;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[210].nNMNum2				  = 2;		/* Analóg mérések száma*/

/*  34-26 OK2  -----------------------------------------------------------*/
sT[0].sTI[211].nType = TYP_TMOK;

	sT[0].sMOT[211].nIEC_SP				= 3851;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[211].nIEC_DP				= 564;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[211].nIEC_NM				= 697;		/* Mérések IEC kezdõcíme */
/*  37-29 OK2  -----------------------------------------------------------*/
sT[0].sTI[212].nType = TYP_TMOK;

	sT[0].sMOT[212].nIEC_SP				= 3867;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[212].nIEC_DP				= 565;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[212].nIEC_NM				= 700;		/* Mérések IEC kezdõcíme */
/*  40-50 OK2  -----------------------------------------------------------*/
sT[0].sTI[213].nType = TYP_TMOK;

	sT[0].sMOT[213].nIEC_SP				= 3883;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[213].nIEC_DP				= 566;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[213].nIEC_NM				= 703;		/* Mérések IEC kezdõcíme */
/*  41-29 OK2  -----------------------------------------------------------*/
sT[0].sTI[214].nType = TYP_TMOK;

	sT[0].sMOT[214].nIEC_SP				= 3899;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[214].nIEC_DP				= 567;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[214].nIEC_NM				= 706;		/* Mérések IEC kezdõcíme */
/*  41-49 OK2  -----------------------------------------------------------*/
sT[0].sTI[215].nType = TYP_TMOK;

	sT[0].sMOT[215].nIEC_SP				= 3915;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[215].nIEC_DP				= 568;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[215].nIEC_NM				= 709;		/* Mérések IEC kezdõcíme */
/*  41-53 OK2  -----------------------------------------------------------*/
sT[0].sTI[216].nType = TYP_TMOK;

	sT[0].sMOT[216].nIEC_SP				= 3931;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[216].nIEC_DP				= 569;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[216].nIEC_NM				= 1419;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[216].nNMNum				= 4;		/* Analóg mérések száma*/
	sT[0].sMOT[216].nIEC_NM2				  = 1423;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[216].nNMNum2				  = 2;		/* Analóg mérések száma*/
/*  44-11 OK2  -----------------------------------------------------------*/
sT[0].sTI[217].nType = TYP_TMOK;

	sT[0].sMOT[217].nIEC_SP				= 3947;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[217].nIEC_DP				= 570;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[217].nIEC_NM				= 715;		/* Mérések IEC kezdõcíme */
/*  70-18 OK2  -----------------------------------------------------------*/
sT[0].sTI[218].nType = TYP_TMOK;

	sT[0].sMOT[218].nIEC_SP				= 3963;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[218].nIEC_DP				= 571;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[218].nIEC_NM				= 720;		/* Mérések IEC kezdõcíme */
/*  70-41 OK2  -----------------------------------------------------------*/
sT[0].sTI[219].nType = TYP_TMOK;

	sT[0].sMOT[219].nIEC_SP				= 3979;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[219].nIEC_DP				= 572;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[219].nIEC_NM				= 723;		/* Mérések IEC kezdõcíme */
/*  91-34 OK2  -----------------------------------------------------------*/
sT[0].sTI[220].nType = TYP_TMOK;

	sT[0].sMOT[220].nIEC_SP				= 3995;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[220].nIEC_DP				= 573;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[220].nIEC_NM				= 726;		/* Mérések IEC kezdõcíme */
/*  91-85 OK2  -----------------------------------------------------------*/
sT[0].sTI[221].nType = TYP_TMOK;

	sT[0].sMOT[221].nIEC_SP				= 4011;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[221].nIEC_DP				= 574;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[221].nIEC_NM				= 729;		/* Mérések IEC kezdõcíme */
/*  92-03 OK2  -----------------------------------------------------------*/
sT[0].sTI[222].nType = TYP_TMOK;

	sT[0].sMOT[222].nIEC_SP				= 4027;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[222].nIEC_DP				= 575;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[222].nIEC_NM				= 732;		/* Mérések IEC kezdõcíme */
/*  92-48 OK2  -----------------------------------------------------------*/
sT[0].sTI[223].nType = TYP_TMOK;

	sT[0].sMOT[223].nIEC_SP				= 4043;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[223].nIEC_DP				= 576;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[223].nIEC_NM				= 735;		/* Mérések IEC kezdõcíme */
/*  92-52 OK2  -----------------------------------------------------------*/
sT[0].sTI[224].nType = TYP_TMOK;

	sT[0].sMOT[224].nIEC_SP				= 4059;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[224].nIEC_DP				= 577;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[224].nIEC_NM				= 738;		/* Mérések IEC kezdõcíme */
/*  20-17 OK2  -----------------------------------------------------------*/
sT[0].sTI[225].nType = TYP_TMOK;

	sT[0].sMOT[225].nIEC_SP				= 4075;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[225].nIEC_DP				= 578;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[225].nIEC_NM				= 1207;		/* Mérések IEC kezdõcíme */

  sT[0].sMOT[225].nNMNum     			= 4;		/* Mérések száma */
	sT[0].sMOT[225].nIEC_NM2				= 1211;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[225].nNMNum2				  = 2;		/* Analóg mérések száma*/

/*  81-23 OK2  -----------------------------------------------------------*/
sT[0].sTI[226].nType = TYP_TMOK;

	sT[0].sMOT[226].nIEC_SP				= 4091;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[226].nIEC_DP				= 579;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[226].nIEC_NM				= 744;		/* Mérések IEC kezdõcíme */
/*  81-98 OK2  -----------------------------------------------------------*/
sT[0].sTI[227].nType = TYP_TMOK;

	sT[0].sMOT[227].nIEC_SP				= 4107;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[227].nIEC_DP				= 580;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[227].nIEC_NM				= 747;		/* Mérések IEC kezdõcíme */
/*  82-61 OK2  -----------------------------------------------------------*/
sT[0].sTI[228].nType = TYP_TMOK;

	sT[0].sMOT[228].nIEC_SP				= 4123;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[228].nIEC_DP				= 581;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[228].nIEC_NM				= 750;		/* Mérések IEC kezdõcíme */
/*  88-801 OK2  -----------------------------------------------------------*/
sT[0].sTI[229].nType = TYP_TMOK;

	sT[0].sMOT[229].nIEC_SP				= 4139;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[229].nIEC_DP				= 582;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[229].nIEC_NM				= 753;		/* Mérések IEC kezdõcíme */
/* Kõszeg, Szot ---------------------------------------------------------------*/
sT[0].sTI[230].nType = TYP_MOT;	
	
	sT[0].sMOT[230].nIEC_SP				= 4155;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[230].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[230].nIEC_DP				= 583;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[230].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[230].nIEC_NM				= 756;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[230].nNMNum				= 4;		/* Analóg mérések száma*/
/*  41-67 PM6  -----------------------------------------------------------*/
sT[0].sTI[231].nType = TYP_TMOK;

	sT[0].sMOT[231].nIEC_SP				= 4171;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[231].nIEC_DP				= 591;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[231].nIEC_NM				= 760;		/* Mérések IEC kezdõcíme */

/* Szombathely, Vörösmarty ---------------------------------------------------------------*/
sT[0].sTI[232].nType = TYP_MOT;	
	
	sT[0].sMOT[232].nIEC_SP				= 4187;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[232].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[232].nIEC_DP				= 592;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[232].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[232].nIEC_NM				= 763;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[232].nNMNum				= 4;		/* Analóg mérések száma*/

/* Székesfehérvár, Harmann ---------------------------------------------------------------*/
sT[0].sTI[233].nType = TYP_MOT;	
	
	sT[0].sMOT[233].nIEC_SP				= 4541;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[233].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[233].nIEC_DP				= 621;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[233].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[233].nIEC_NM				= 830;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[233].nNMNum				= 4;		/* Analóg mérések száma*/

/* Székesfehérvár, Megyei hivatal ---------------------------------------------------------------*/
sT[0].sTI[234].nType = TYP_MOT;	
	
	sT[0].sMOT[234].nIEC_SP				= 4557;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[234].nIEC_SP_NUM			= 16;		/* Egybites értékek száma*/
	sT[0].sMOT[234].nIEC_DP				= 629;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[234].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[234].nIEC_NM				= 834;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[234].nNMNum				= 4;		/* Analóg mérések száma*/

/* Tata, Csapó hivatal ---------------------------------------------------------------*/
sT[0].sTI[235].nType = TYP_MOT;	
	
	sT[0].sMOT[235].nIEC_SP				= 4573;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[235].nIEC_SP_NUM			= 18;		/* Egybites értékek száma*/
	sT[0].sMOT[235].nIEC_DP				= 637;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[235].nIEC_DP_NUM			= 8;   		/* Két bites értékek száma*/
	sT[0].sMOT[235].nIEC_NM				= 838;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[235].nNMNum				= 4;		/* Analóg mérések száma*/

/*  14-15   -----------------------------------------------------------*/
sT[0].sTI[236].nType = TYP_TMOK;

	sT[0].sMOT[236].nIEC_SP				= 4205;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[236].nIEC_DP				= 600;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[236].nIEC_NM				= 767;		/* Mérések IEC kezdõcíme */
/*  12-08   -----------------------------------------------------------*/
sT[0].sTI[237].nType = TYP_TMOK;

	sT[0].sMOT[237].nIEC_SP				= 4221;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[237].nIEC_DP				= 601;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[237].nIEC_NM				= 770;		/* Mérések IEC kezdõcíme */
/*  12-04   -----------------------------------------------------------*/
sT[0].sTI[238].nType = TYP_TMOK;

	sT[0].sMOT[238].nIEC_SP				= 4237;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[238].nIEC_DP				= 602;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[238].nIEC_NM				= 773;		/* Mérések IEC kezdõcíme */
/*  12-85   -----------------------------------------------------------*/
sT[0].sTI[239].nType = TYP_TMOK;

	sT[0].sMOT[239].nIEC_SP				= 4253;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[239].nIEC_DP				= 603;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[239].nIEC_NM				= 776;		/* Mérések IEC kezdõcíme */
/*  12-13   -----------------------------------------------------------*/
sT[0].sTI[240].nType = TYP_TMOK;

	sT[0].sMOT[240].nIEC_SP				= 4269;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[240].nIEC_DP				= 604;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[240].nIEC_NM				= 779;		/* Mérések IEC kezdõcíme */
/*  12-96   -----------------------------------------------------------*/
sT[0].sTI[241].nType = TYP_TMOK;

	sT[0].sMOT[241].nIEC_SP				= 4285;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[241].nIEC_DP				= 605;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[241].nIEC_NM				= 782;		/* Mérések IEC kezdõcíme */
/*  12-39   -----------------------------------------------------------*/
sT[0].sTI[242].nType = TYP_TMOK;

	sT[0].sMOT[242].nIEC_SP				= 4301;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[242].nIEC_DP				= 606;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[242].nIEC_NM				= 785;		/* Mérések IEC kezdõcíme */
/*  92-09   -----------------------------------------------------------*/
sT[0].sTI[243].nType = TYP_TMOK;

	sT[0].sMOT[243].nIEC_SP				= 4317;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[243].nIEC_DP				= 607;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[243].nIEC_NM				= 788;		/* Mérések IEC kezdõcíme */
/*  40-72   -----------------------------------------------------------*/
sT[0].sTI[244].nType = TYP_TMOK;

	sT[0].sMOT[244].nIEC_SP				= 4333;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[244].nIEC_DP				= 608;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[244].nIEC_NM				= 791;		/* Mérések IEC kezdõcíme */
/*  42-55   -----------------------------------------------------------*/
sT[0].sTI[245].nType = TYP_TMOK;

	sT[0].sMOT[245].nIEC_SP				= 4349;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[245].nIEC_DP				= 609;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[245].nIEC_NM				= 794;		/* Mérések IEC kezdõcíme */
/*  91-37   -----------------------------------------------------------*/
sT[0].sTI[246].nType = TYP_TMOK;

	sT[0].sMOT[246].nIEC_SP				= 4365;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[246].nIEC_DP				= 610;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[246].nIEC_NM				= 797;		/* Mérések IEC kezdõcíme */
/*  91-51   -----------------------------------------------------------*/
sT[0].sTI[247].nType = TYP_TMOK;

	sT[0].sMOT[247].nIEC_SP				= 4381;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[247].nIEC_DP				= 611;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[247].nIEC_NM				= 800;		/* Mérések IEC kezdõcíme */
/*  91-59   -----------------------------------------------------------*/
sT[0].sTI[248].nType = TYP_TMOK;

	sT[0].sMOT[248].nIEC_SP				= 4397;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[248].nIEC_DP				= 612;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[248].nIEC_NM				= 803;		/* Mérések IEC kezdõcíme */
/*  41-14   -----------------------------------------------------------*/
sT[0].sTI[250].nType = TYP_TMOK;

	sT[0].sMOT[250].nIEC_SP				= 4413;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[250].nIEC_DP				= 613;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[250].nIEC_NM				= 806;		/* Mérések IEC kezdõcíme */
/*  20-01   -----------------------------------------------------------*/
sT[0].sTI[251].nType = TYP_TMOK;

	sT[0].sMOT[251].nIEC_SP				= 4429;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[251].nIEC_DP				= 614;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[251].nIEC_NM				= 809;		/* Mérések IEC kezdõcíme */
/*  20-04   -----------------------------------------------------------*/
sT[0].sTI[252].nType = TYP_TMOK;

	sT[0].sMOT[252].nIEC_SP				= 4445;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[252].nIEC_DP				= 615;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[252].nIEC_NM				= 812;		/* Mérések IEC kezdõcíme */
/*  80-74   -----------------------------------------------------------*/
sT[0].sTI[253].nType = TYP_TMOK;

	sT[0].sMOT[253].nIEC_SP				= 4461;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[253].nIEC_DP				= 616;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[253].nIEC_NM				= 815;		/* Mérések IEC kezdõcíme */
/*  85-22   -----------------------------------------------------------*/
sT[0].sTI[254].nType = TYP_TMOK;

	sT[0].sMOT[254].nIEC_SP				= 4477;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[254].nIEC_DP				= 617;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[254].nIEC_NM				= 818;		/* Mérések IEC kezdõcíme */
/*  86-24   -----------------------------------------------------------*/
sT[0].sTI[255].nType = TYP_TMOK;

	sT[0].sMOT[255].nIEC_SP				= 4493;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[255].nIEC_DP				= 618;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[255].nIEC_NM				= 821;		/* Mérések IEC kezdõcíme */
/*  86-51   -----------------------------------------------------------*/
sT[0].sTI[256].nType = TYP_TMOK;

	sT[0].sMOT[256].nIEC_SP				= 4509;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[256].nIEC_DP				= 619;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[256].nIEC_NM				= 824;		/* Mérések IEC kezdõcíme */
/*  89-168   -----------------------------------------------------------*/
sT[0].sTI[257].nType = TYP_TMOK;

	sT[0].sMOT[257].nIEC_SP				= 4525;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[257].nIEC_DP				= 620;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[257].nIEC_NM				= 827;		/* Mérések IEC kezdõcíme */

/* Szombathely, Wesselényi 8 csatornás!!! -----------------------------------------------------------------------------------*/
sT[0].sTI[258].nType = TYP_TAL;	

	sT[0].sTAL[258].nIEC_SP       		= 4591;
	sT[0].sTAL[258].nIEC_OsszevontHiba	= 4655;
	sT[0].sTAL[258].nIEC_MT_KommHiba	= 4656;
	sT[0].sTAL[258].nKommStatusNum		= 2;
	sT[0].sTAL[258].nLeagNum			= 8;
	

	sT[0].sTAL[258].nIEC_DP       		= 645;
	sT[0].sTAL[258].nIEC_DP_FSZ1  		= 653;
	sT[0].sTAL[258].nIEC_NM				= 842;
	sT[0].sTAL[258].nNMNum		  		= 8;
	
	
/*  18-799   -----------------------------------------------------------*/
sT[0].sTI[259].nType = TYP_TMOK;

	sT[0].sMOT[259].nIEC_SP				= 4660;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[259].nIEC_DP				= 661;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[259].nIEC_NM				= 850;		/* Mérések IEC kezdõcíme */
/*  18-849   -----------------------------------------------------------*/
sT[0].sTI[260].nType = TYP_TMOK;

	sT[0].sMOT[260].nIEC_SP				= 4676;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[260].nIEC_DP				= 662;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[260].nIEC_NM				= 853;		/* Mérések IEC kezdõcíme */
/*  21-59   -----------------------------------------------------------*/
sT[0].sTI[261].nType = TYP_TMOK;

	sT[0].sMOT[261].nIEC_SP				= 4692;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[261].nIEC_DP				= 663;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[261].nIEC_NM				= 856;		/* Mérések IEC kezdõcíme */
	
/*  30-27   -----------------------------------------------------------*/
sT[0].sTI[262].nType = TYP_TMOK;

	sT[0].sMOT[262].nIEC_SP				= 4708;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[262].nIEC_DP				= 664;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[262].nIEC_NM				= 859;		/* Mérések IEC kezdõcíme */
/*  30-46   -----------------------------------------------------------*/
sT[0].sTI[263].nType = TYP_TMOK;

	sT[0].sMOT[263].nIEC_SP				= 4724;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[263].nIEC_DP				= 665;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[263].nIEC_NM				= 862;		/* Mérések IEC kezdõcíme */
/*  30-63   -----------------------------------------------------------*/
sT[0].sTI[264].nType = TYP_TMOK;

	sT[0].sMOT[264].nIEC_SP				= 4740;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[264].nIEC_DP				= 666;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[264].nIEC_NM				= 1261;		/* Mérések IEC kezdõcíme */
	sT[0].sMOT[264].nNMNum     			= 4;		/* Mérések száma */
	sT[0].sMOT[264].nIEC_NM2			= 1265;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[264].nNMNum2				= 2;		/* Analóg mérések száma*/
/*  30-77 (30-76)   -----------------------------------------------------------*/
sT[0].sTI[265].nType = TYP_TMOK;

	sT[0].sMOT[265].nIEC_SP				= 4756;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[265].nIEC_DP				= 667;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[265].nIEC_NM				= 1162;		/* Mérések IEC kezdõcíme */

  sT[0].sMOT[265].nNMNum     			= 4;		/* Mérések száma */
	sT[0].sMOT[265].nIEC_NM2				= 1166;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[265].nNMNum2				  = 2;		/* Analóg mérések száma*/

/*  31-17   -----------------------------------------------------------*/
sT[0].sTI[266].nType = TYP_TMOK;

	sT[0].sMOT[266].nIEC_SP				= 4772;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[266].nIEC_DP				= 668;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[266].nIEC_NM				= 871;		/* Mérések IEC kezdõcíme */
/*  31-57   -----------------------------------------------------------*/
sT[0].sTI[267].nType = TYP_TMOK;

	sT[0].sMOT[267].nIEC_SP				= 4788;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[267].nIEC_DP				= 669;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[267].nIEC_NM				= 1249;		/* Mérések IEC kezdõcíme */

  sT[0].sMOT[267].nNMNum     			= 4;		/* Mérések száma */
	sT[0].sMOT[267].nIEC_NM2				= 1253;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[267].nNMNum2				  = 2;		/* Analóg mérések száma*/

/*  31-83   -----------------------------------------------------------*/
sT[0].sTI[268].nType = TYP_TMOK;

	sT[0].sMOT[268].nIEC_SP				= 4804;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[268].nIEC_DP				= 670;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[268].nIEC_NM				= 1315;		/* Mérések IEC kezdõcíme */
  
  sT[0].sMOT[268].nNMNum     			= 4;		/* Mérések száma */
	sT[0].sMOT[268].nIEC_NM2				= 1319;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[268].nNMNum2				  = 2;		/* Analóg mérések száma*/

/*  32-40   -----------------------------------------------------------*/
sT[0].sTI[269].nType = TYP_TMOK;

	sT[0].sMOT[269].nIEC_SP				= 4820;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[269].nIEC_DP				= 671;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[269].nIEC_NM				= 880;		/* Mérések IEC kezdõcíme */
/*  32-55   -----------------------------------------------------------*/
sT[0].sTI[270].nType = TYP_TMOK;

	sT[0].sMOT[270].nIEC_SP				= 4836;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[270].nIEC_DP				= 672;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[270].nIEC_NM				= 883;		/* Mérések IEC kezdõcíme */
/*  32-68   -----------------------------------------------------------*/
sT[0].sTI[271].nType = TYP_TMOK;

	sT[0].sMOT[271].nIEC_SP				= 4852;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[271].nIEC_DP				= 673;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[271].nIEC_NM				= 1391;		/* Mérések IEC kezdõcíme */
  
  sT[0].sMOT[271].nNMNum     			= 4;		/* Mérések száma */
	sT[0].sMOT[271].nIEC_NM2				= 1395;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[271].nNMNum2				  = 2;		/* Analóg mérések száma*/
  
/*  35-22   -----------------------------------------------------------*/
sT[0].sTI[272].nType = TYP_TMOK;

	sT[0].sMOT[272].nIEC_SP				= 4868;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[272].nIEC_DP				= 674;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[272].nIEC_NM				= 1243;		/* Mérések IEC kezdõcíme */

  sT[0].sMOT[272].nNMNum     			= 4;		/* Mérések száma */
	sT[0].sMOT[272].nIEC_NM2				= 1247;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[272].nNMNum2				  = 2;		/* Analóg mérések száma*/
  
/*  32-71 (37-198)   -----------------------------------------------------------*/
sT[0].sTI[273].nType = TYP_TMOK;

	sT[0].sMOT[273].nIEC_SP				= 4884;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[273].nIEC_DP				= 675;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[273].nIEC_NM				= 1399;		/* Mérések IEC kezdõcíme */
  
  sT[0].sMOT[273].nNMNum     			= 4;		/* Mérések száma */
	sT[0].sMOT[273].nIEC_NM2				= 1403;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[273].nNMNum2				  = 2;		/* Analóg mérések száma*/

/*  71-78   -----------------------------------------------------------*/
sT[0].sTI[274].nType = TYP_TMOK;

	sT[0].sMOT[274].nIEC_SP				= 4900;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[274].nIEC_DP				= 676;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[274].nIEC_NM				= 895;		/* Mérések IEC kezdõcíme */
/*  81-99   -----------------------------------------------------------*/
sT[0].sTI[275].nType = TYP_TMOK;

	sT[0].sMOT[275].nIEC_SP				= 4916;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[275].nIEC_DP				= 677;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[275].nIEC_NM				= 898;		/* Mérések IEC kezdõcíme */
/*  86-18   -----------------------------------------------------------*/
sT[0].sTI[276].nType = TYP_TMOK;

	sT[0].sMOT[276].nIEC_SP				= 4932;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[276].nIEC_DP				= 678;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[276].nIEC_NM				= 901;		/* Mérések IEC kezdõcíme */
/*  86-18   -----------------------------------------------------------*/
sT[0].sTI[277].nType = TYP_TMOK;

	sT[0].sMOT[277].nIEC_SP				= 4948;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[277].nIEC_DP				= 679;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[277].nIEC_NM				= 904;		/* Mérések IEC kezdõcíme */
/*  89-180   -----------------------------------------------------------*/
sT[0].sTI[278].nType = TYP_TMOK;

	sT[0].sMOT[278].nIEC_SP				= 4964;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[278].nIEC_DP				= 680;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[278].nIEC_NM				= 907;		/* Mérések IEC kezdõcíme */
/*  41-46   -----------------------------------------------------------*/
sT[0].sTI[279].nType = TYP_TMOK;

	sT[0].sMOT[279].nIEC_SP				= 4980;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[279].nIEC_DP				= 681;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[279].nIEC_NM				= 910;		/* Mérések IEC kezdõcíme */
/*  42-14   -----------------------------------------------------------*/
sT[0].sTI[280].nType = TYP_TMOK;

	sT[0].sMOT[280].nIEC_SP				= 4996;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[280].nIEC_DP				= 682;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[280].nIEC_NM				= 913;		/* Mérések IEC kezdõcíme */
/*  43-17   -----------------------------------------------------------*/
sT[0].sTI[281].nType = TYP_TMOK;

	sT[0].sMOT[281].nIEC_SP				= 5012;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[281].nIEC_DP				= 683;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[281].nIEC_NM				= 916;		/* Mérések IEC kezdõcíme */
/*  70-34   -----------------------------------------------------------*/
sT[0].sTI[282].nType = TYP_TMOK;

	sT[0].sMOT[282].nIEC_SP				= 5028;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[282].nIEC_DP				= 684;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[282].nIEC_NM				= 919;		/* Mérések IEC kezdõcíme */
/*  70-35   -----------------------------------------------------------*/
sT[0].sTI[283].nType = TYP_TMOK;

	sT[0].sMOT[283].nIEC_SP				= 5044;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[283].nIEC_DP				= 685;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[283].nIEC_NM				= 922;		/* Mérések IEC kezdõcíme */
/*  70-36   -----------------------------------------------------------*/
sT[0].sTI[284].nType = TYP_TMOK;

	sT[0].sMOT[284].nIEC_SP				= 5060;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[284].nIEC_DP				= 686;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[284].nIEC_NM				= 925;		/* Mérések IEC kezdõcíme */
/*  74-28   -----------------------------------------------------------*/
sT[0].sTI[285].nType = TYP_TMOK;

	sT[0].sMOT[285].nIEC_SP				= 5076;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[285].nIEC_DP				= 687;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[285].nIEC_NM				= 928;		/* Mérések IEC kezdõcíme */
/*  91-24   -----------------------------------------------------------*/
sT[0].sTI[286].nType = TYP_TMOK;

	sT[0].sMOT[286].nIEC_SP				= 5092;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[286].nIEC_DP				= 688;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[286].nIEC_NM				= 931;		/* Mérések IEC kezdõcíme */
/*  30-12   -----------------------------------------------------------*/
sT[0].sTI[287].nType = TYP_TMOK;

	sT[0].sMOT[287].nIEC_SP				= 5108;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[287].nIEC_DP				= 689;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[287].nIEC_NM				= 934;		/* Mérések IEC kezdõcíme */
/*  30-25  -----------------------------------------------------------*/
sT[0].sTI[288].nType = TYP_TMOK;

	sT[0].sMOT[288].nIEC_SP				= 5124;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[288].nIEC_DP				= 690;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[288].nIEC_NM				= 937;		/* Mérések IEC kezdõcíme */
/*  30-30  -----------------------------------------------------------*/
sT[0].sTI[289].nType = TYP_TMOK;

	sT[0].sMOT[289].nIEC_SP				= 5140;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[289].nIEC_DP				= 691;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[289].nIEC_NM				= 940;		/* Mérések IEC kezdõcíme */
/*  31-04  -----------------------------------------------------------*/
sT[0].sTI[290].nType = TYP_TMOK;

	sT[0].sMOT[290].nIEC_SP				= 5156;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[290].nIEC_DP				= 692;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[290].nIEC_NM				= 943;		/* Mérések IEC kezdõcíme */
/*  31-32  -----------------------------------------------------------*/
sT[0].sTI[291].nType = TYP_TMOK;

	sT[0].sMOT[291].nIEC_SP				= 5172;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[291].nIEC_DP				= 693;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[291].nIEC_NM				= 946;		/* Mérések IEC kezdõcíme */
/*  32-43  -----------------------------------------------------------*/
sT[0].sTI[292].nType = TYP_TMOK;

	sT[0].sMOT[292].nIEC_SP				= 5188;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[292].nIEC_DP				= 694;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[292].nIEC_NM				= 949;		/* Mérések IEC kezdõcíme */
/*  32-49  -----------------------------------------------------------*/
sT[0].sTI[293].nType = TYP_TMOK;

	sT[0].sMOT[293].nIEC_SP				= 5204;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[293].nIEC_DP				= 695;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[293].nIEC_NM				= 952;		/* Mérések IEC kezdõcíme */
/*  32-57  -----------------------------------------------------------*/
sT[0].sTI[294].nType = TYP_TMOK;

	sT[0].sMOT[294].nIEC_SP				= 5220;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[294].nIEC_DP				= 696;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[294].nIEC_NM				= 955;		/* Mérések IEC kezdõcíme */

/*  32-63  -----------------------------------------------------------*/
sT[0].sTI[295].nType = TYP_TMOK;

	sT[0].sMOT[295].nIEC_SP				= 5236;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[295].nIEC_DP				= 697;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[295].nIEC_NM				= 958;		/* Mérések IEC kezdõcíme */
/*  32-65  -----------------------------------------------------------*/
sT[0].sTI[296].nType = TYP_TMOK;

	sT[0].sMOT[296].nIEC_SP				= 5252;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[296].nIEC_DP				= 698;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[296].nIEC_NM				= 961;		/* Mérések IEC kezdõcíme */
/*  32-92  -----------------------------------------------------------*/
sT[0].sTI[297].nType = TYP_TMOK;

	sT[0].sMOT[297].nIEC_SP				= 5268;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[297].nIEC_DP				= 699;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[297].nIEC_NM				= 964;		/* Mérések IEC kezdõcíme */
/*  34-01  -----------------------------------------------------------*/
sT[0].sTI[298].nType = TYP_TMOK;

	sT[0].sMOT[298].nIEC_SP				= 5284;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[298].nIEC_DP				= 700;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[298].nIEC_NM				= 967;		/* Mérések IEC kezdõcíme */
/*  34-06  -----------------------------------------------------------*/
sT[0].sTI[299].nType = TYP_TMOK;

	sT[0].sMOT[299].nIEC_SP				= 5300;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[299].nIEC_DP				= 701;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[299].nIEC_NM				= 970;		/* Mérések IEC kezdõcíme */
/*  35-07  -----------------------------------------------------------*/
sT[0].sTI[300].nType = TYP_TMOK;

	sT[0].sMOT[300].nIEC_SP				= 5316;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[300].nIEC_DP				= 702;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[300].nIEC_NM				= 973;		/* Mérések IEC kezdõcíme */
/*  35-21  -----------------------------------------------------------*/
sT[0].sTI[301].nType = TYP_TMOK;

	sT[0].sMOT[301].nIEC_SP				= 5332;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[301].nIEC_DP				= 703;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[301].nIEC_NM				= 976;		/* Mérések IEC kezdõcíme */
/*  41-42  -----------------------------------------------------------*/
sT[0].sTI[302].nType = TYP_TMOK;

	sT[0].sMOT[302].nIEC_SP				= 5348;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[302].nIEC_DP				= 704;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[302].nIEC_NM				= 979;		/* Mérések IEC kezdõcíme */
/*  41-90  -----------------------------------------------------------*/
sT[0].sTI[303].nType = TYP_TMOK;

	sT[0].sMOT[303].nIEC_SP				= 5364;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[303].nIEC_DP				= 705;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[303].nIEC_NM				= 982;		/* Mérések IEC kezdõcíme */


/*  30-68  -----------------------------------------------------------*/
sT[0].sTI[304].nType = TYP_TMOK;

	sT[0].sMOT[304].nIEC_SP				= 5380;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[304].nIEC_DP				= 706;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[304].nIEC_NM				= 1333;		/* Mérések IEC kezdõcíme */

	sT[0].sMOT[304].nNMNum     		= 4;		/* Mérések száma */
	sT[0].sMOT[304].nIEC_NM2			= 1337;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[304].nNMNum2				= 2;		/* Analóg mérések száma*/
  
/*  31-68  -----------------------------------------------------------*/
sT[0].sTI[305].nType = TYP_TMOK;

	sT[0].sMOT[305].nIEC_SP				= 5396;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[305].nIEC_DP				= 707;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[305].nIEC_NM				= 1327;		/* Mérések IEC kezdõcíme */

	sT[0].sMOT[305].nNMNum     		= 4;		/* Mérések száma */
	sT[0].sMOT[305].nIEC_NM2			= 1331;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[305].nNMNum2				= 2;		/* Analóg mérések száma*/
  
/*  40-76  -----------------------------------------------------------*/
sT[0].sTI[306].nType = TYP_TMOK;

	sT[0].sMOT[306].nIEC_SP				= 5412;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[306].nIEC_DP				= 708;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[306].nIEC_NM				= 991;		/* Mérések IEC kezdõcíme */
/*  42-82  -----------------------------------------------------------*/
sT[0].sTI[307].nType = TYP_TMOK;

	sT[0].sMOT[307].nIEC_SP				= 5428;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[307].nIEC_DP				= 709;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[307].nIEC_NM				= 994;		/* Mérések IEC kezdõcíme */
/*  60-53  -----------------------------------------------------------*/
sT[0].sTI[308].nType = TYP_TMOK;

	sT[0].sMOT[308].nIEC_SP				= 5444;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[308].nIEC_DP				= 710;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[308].nIEC_NM				= 997;		/* Mérések IEC kezdõcíme */
/*  80-23  -----------------------------------------------------------*/
sT[0].sTI[309].nType = TYP_TMOK;

	sT[0].sMOT[309].nIEC_SP				= 5460;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[309].nIEC_DP				= 711;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[309].nIEC_NM				= 1000;		/* Mérések IEC kezdõcíme */
/*  80-64  -----------------------------------------------------------*/
sT[0].sTI[310].nType = TYP_TMOK;

	sT[0].sMOT[310].nIEC_SP				= 5476;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[310].nIEC_DP				= 712;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[310].nIEC_NM				= 1003;		/* Mérések IEC kezdõcíme */
/*  80-65  -----------------------------------------------------------*/
sT[0].sTI[311].nType = TYP_TMOK;

	sT[0].sMOT[311].nIEC_SP				= 5492;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[311].nIEC_DP				= 713;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[311].nIEC_NM				= 1279;		/* Mérések IEC kezdõcíme */

  sT[0].sMOT[311].nNMNum     			= 4;		/* Mérések száma */
	sT[0].sMOT[311].nIEC_NM2				= 1283;		/* Mérések IEC kezdõcíme */	
	sT[0].sMOT[311].nNMNum2				  = 2;		/* Analóg mérések száma*/
  
/*  80-75  -----------------------------------------------------------*/
sT[0].sTI[312].nType = TYP_TMOK;

	sT[0].sMOT[312].nIEC_SP				= 5508;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[312].nIEC_DP				= 714;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[312].nIEC_NM				= 1009;		/* Mérések IEC kezdõcíme */
/*  80-98  -----------------------------------------------------------*/
sT[0].sTI[313].nType = TYP_TMOK;

	sT[0].sMOT[313].nIEC_SP				= 5524;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[313].nIEC_DP				= 715;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[313].nIEC_NM				= 1012;		/* Mérések IEC kezdõcíme */
/*  81-18  -----------------------------------------------------------*/
sT[0].sTI[314].nType = TYP_TMOK;

	sT[0].sMOT[314].nIEC_SP				= 5540;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[314].nIEC_DP				= 716;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[314].nIEC_NM				= 1015;		/* Mérések IEC kezdõcíme */
/*  85-31  -----------------------------------------------------------*/
sT[0].sTI[315].nType = TYP_TMOK;

	sT[0].sMOT[315].nIEC_SP				= 5556;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[315].nIEC_DP				= 717;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[315].nIEC_NM				= 1018;		/* Mérések IEC kezdõcíme */
/*  90-19  ----------------------------------------------------------*/
sT[0].sTI[316].nType = TYP_TMOK;

	sT[0].sMOT[316].nIEC_SP				= 5572;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[316].nIEC_DP				= 718;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[316].nIEC_NM				= 1021;		/* Mérések IEC kezdõcíme */
/*  91-33  -----------------------------------------------------------*/
sT[0].sTI[317].nType = TYP_TMOK;

	sT[0].sMOT[317].nIEC_SP				= 5588;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[317].nIEC_DP				= 719;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[317].nIEC_NM				= 1024;		/* Mérések IEC kezdõcíme */
/*  92-98  -----------------------------------------------------------*/
sT[0].sTI[318].nType = TYP_TMOK;

	sT[0].sMOT[318].nIEC_SP				= 5604;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[318].nIEC_DP				= 720;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[318].nIEC_NM				= 1027;		/* Mérések IEC kezdõcíme */
/*  92-88  -----------------------------------------------------------*/
sT[0].sTI[319].nType = TYP_TMOK;

	sT[0].sMOT[319].nIEC_SP				= 5620;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[319].nIEC_DP				= 721;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[319].nIEC_NM				= 1030;		/* Mérések IEC kezdõcíme */

/*  91-62  -----------------------------------------------------------*/
sT[0].sTI[320].nType = TYP_TMOK;

	sT[0].sMOT[320].nIEC_SP				= 5636;		/* Egybites értékek IEC kezdõcíme*/
	sT[0].sMOT[320].nIEC_DP				= 722;		/* Kétbites értékek IEC kezdõcíme*/
	sT[0].sMOT[320].nIEC_NM				= 1033;		/* Mérések IEC kezdõcíme */


/* Front end A -----------------------------------------------------------*/
sT[0].sTI[321].nType = TYP_FRONTEND;

/* Front end E -----------------------------------------------------------*/
sT[0].sTI[322].nType = TYP_FRONTEND;

/* Front end G -----------------------------------------------------------*/
sT[0].sTI[323].nType = TYP_FRONTEND;

/* Redundancia A -----------------------------------------------------------*/
sT[0].sTI[324].nType = TYP_FRONTEND;


								
} /* end fnSetDataPar()*/

