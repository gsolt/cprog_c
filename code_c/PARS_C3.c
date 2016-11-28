/****************************************************************************
*																			*		
* REV    	DATE     	PROGRAMMER         	REVISION HISTORY                *
* V2.1		2007.01.31.	Gergely Zsolt		31-18 utvonal modositas			*
* V2.1.1	2007.04.10.	Gergely Zsolt		Kisber, USIN utvonal modositas: 5/1->5/7			*
* V2.1.2	2007.04.26.	Gergely Zsolt		11-23, 11-27
* V2.1.3	2007.04.27. Gergely Zsolt		Mecs�r, sz�lgener�tor
* V2.1.4	2007.05.11	Gergely Zsolt		S�rv�r, Spirit Hotel			*
* V2.1.5	2007.06.11	Gergely Zsolt		Mosonszolnok, sz�ler�m�park		*
* V2.1.6	2007.10.03.	Gergely Zsolt		Kom�rom, NOKIA OHUB				*
* V2.1.7	2007.11.19. Gergely Zsolt		20-37 NPS						*
* V2.1.8	2007.11.23. Gergely Zsolt		Szentgotth�rd �tj�tsz�			*
* V2.1.9	2008.03.26. Gergely Zsolt		Szombathely, Merkur			*
											Tatab�nya, Ipari park
											42-70
											42-81
*V2.1.10	2008.06.27. Gergely Zsolt		Oroszl�ny: Tak�cs B, B, 35A, 35
*V2.1.11	2008.07.11. Gergely Zsolt		TMOK 21-38,21-34, Eszterh�zy
*V2.1.12	2008.07.17. Gergely Zsolt		Tatab�nya: H�k�zpont, S�rberek A
*V2.1.14	2008.07.21. Gergely Zsolt		Oroszl�ny: Gimn�zium
*V2.1.15	2008.07.23. Gergely Zsolt		Tatab�ny, SCI
*V2.1.16	2008.08.13. Gergely Zsolt		82-44, 81-41, 81-92
*V2.1.17	2008.08.25. Gergely Zsolt		J�nossomorja, sz�ler�m�
*V2.1.18	2008.08.28. Gergely Zsolt		82-66, 82-40, 82-63, 82-79 OK2 		*	
*V2.1.23	2008.10.14. Gergely Zsolt		30-31		*	

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

void setdat_c(unsigned char *input);

/**********************************************/
/* Globals                                     */
/**********************************************/


/*--------------------------------------------------------------------------*/
/* The list of the function included in this block                          */
/*--------------------------------------------------------------------------*/
const CB_JUMPTBL user_jumptable[]=
{
   {"setdat"   , setdat_c},  	
   {0      , 0 }
};
/*--------------------------------------------------------------------------*/
/* 'C' Block Initialization and Completion                                  */
/*--------------------------------------------------------------------------*/
void user_control_function(int control)
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
}


/****************************************************************************/
/* Parameter strukturak feltoltese     											*/
/***************************************************************************/
void setdat_c(unsigned char *input)
{
	int					nI;
	TOTAL_PAR			*sT;
	
	sT = (TOTAL_PAR *)input;

/* Single command inicializ�l�sa ciklusban */	
for (nI = 0;nI<	MAX_RTU;nI++)
{
sT[0].sCP[0].sCPR[nI].nSCNum  = 1;
}	
	
sT[0].sCP[0].sCPR[0].nDCStart = 50;     	sT[0].sCP[0].sCPR[0].nDCNum = 1;      	sT[0].sCP[0].sCPR[0].nSCStart= 51;          sT[0].sCP[0].sCPR[0].nAckStart=52;  	sT[0].sCP[0].sCPR[0].nAckNum=1;       sT[0].sCP[0].sCPR[0].nSPOffsetCS = 306;         sT[0].sCP[0].sCPR[0].nSPOffsetLek = 307;
sT[0].sCP[0].sCPR[1].nDCStart = 10;   		sT[0].sCP[0].sCPR[1].nDCNum = 1; 	    sT[0].sCP[0].sCPR[1].nSCStart= 11;   	    sT[0].sCP[0].sCPR[1].nAckStart=0;   	sT[0].sCP[0].sCPR[1].nAckNum=0;       sT[0].sCP[0].sCPR[1].nSPOffsetCS = 34;      	  sT[0].sCP[0].sCPR[1].nSPOffsetLek = 35;
sT[0].sCP[0].sCPR[2].nDCStart = 12;  	 	sT[0].sCP[0].sCPR[2].nDCNum = 1;  	    sT[0].sCP[0].sCPR[2].nSCStart= 13;   	    sT[0].sCP[0].sCPR[2].nAckStart=0;   	sT[0].sCP[0].sCPR[2].nAckNum=0;       sT[0].sCP[0].sCPR[2].nSPOffsetCS = 50;          sT[0].sCP[0].sCPR[2].nSPOffsetLek = 51;
sT[0].sCP[0].sCPR[3].nDCStart = 14;  	 	sT[0].sCP[0].sCPR[3].nDCNum = 1; 	    sT[0].sCP[0].sCPR[3].nSCStart= 15;  	    sT[0].sCP[0].sCPR[3].nAckStart=0;   	sT[0].sCP[0].sCPR[3].nAckNum=0;       sT[0].sCP[0].sCPR[3].nSPOffsetCS = 66;          sT[0].sCP[0].sCPR[3].nSPOffsetLek = 67;
sT[0].sCP[0].sCPR[4].nDCStart = 16;   		sT[0].sCP[0].sCPR[4].nDCNum = 1;  	    sT[0].sCP[0].sCPR[4].nSCStart= 17;  	    sT[0].sCP[0].sCPR[4].nAckStart=0;   	sT[0].sCP[0].sCPR[4].nAckNum=0;       sT[0].sCP[0].sCPR[4].nSPOffsetCS = 82;          sT[0].sCP[0].sCPR[4].nSPOffsetLek = 83;
sT[0].sCP[0].sCPR[5].nDCStart = 18;  	 	sT[0].sCP[0].sCPR[5].nDCNum = 1; 	    sT[0].sCP[0].sCPR[5].nSCStart= 19;  	    sT[0].sCP[0].sCPR[5].nAckStart=0;   	sT[0].sCP[0].sCPR[5].nAckNum=0;       sT[0].sCP[0].sCPR[5].nSPOffsetCS = 98;      	  sT[0].sCP[0].sCPR[5].nSPOffsetLek = 99;
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
sT[0].sCP[0].sCPR[22].nDCStart = 84;   		sT[0].sCP[0].sCPR[22].nDCNum = 1;       sT[0].sCP[0].sCPR[22].nSCStart= 85;         sT[0].sCP[0].sCPR[22].nAckStart=0;	 	sT[0].sCP[0].sCPR[22].nAckNum=0;      sT[0].sCP[0].sCPR[22].nSPOffsetCS = 438;        sT[0].sCP[0].sCPR[22].nSPOffsetLek = 439;
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
sT[0].sCP[0].sCPR[41].nDCStart = 131;  		sT[0].sCP[0].sCPR[41].nDCNum = 1;       sT[0].sCP[0].sCPR[41].nSCStart= 132;        sT[0].sCP[0].sCPR[41].nAckStart=0;  	sT[0].sCP[0].sCPR[41].nAckNum=0;      sT[0].sCP[0].sCPR[41].nSPOffsetCS = 726;        sT[0].sCP[0].sCPR[41].nSPOffsetLek = 727;
sT[0].sCP[0].sCPR[42].nDCStart = 133;  		sT[0].sCP[0].sCPR[42].nDCNum = 1;       sT[0].sCP[0].sCPR[42].nSCStart= 134;        sT[0].sCP[0].sCPR[42].nAckStart=0;  	sT[0].sCP[0].sCPR[42].nAckNum=0;      sT[0].sCP[0].sCPR[42].nSPOffsetCS = 742;        sT[0].sCP[0].sCPR[42].nSPOffsetLek = 743;
sT[0].sCP[0].sCPR[43].nDCStart = 135;  		sT[0].sCP[0].sCPR[43].nDCNum = 1;       sT[0].sCP[0].sCPR[43].nSCStart= 136;        sT[0].sCP[0].sCPR[43].nAckStart=137;  	sT[0].sCP[0].sCPR[43].nAckNum=1;      sT[0].sCP[0].sCPR[43].nSPOffsetCS = 758;        sT[0].sCP[0].sCPR[43].nSPOffsetLek = 759;
sT[0].sCP[0].sCPR[44].nDCStart = 138;  		sT[0].sCP[0].sCPR[44].nDCNum = 1;       sT[0].sCP[0].sCPR[44].nSCStart= 139;        sT[0].sCP[0].sCPR[44].nAckStart=140;  	sT[0].sCP[0].sCPR[44].nAckNum=1;      sT[0].sCP[0].sCPR[44].nSPOffsetCS = 774;        sT[0].sCP[0].sCPR[44].nSPOffsetLek = 775;
sT[0].sCP[0].sCPR[45].nDCStart = 141;  		sT[0].sCP[0].sCPR[45].nDCNum = 1;       sT[0].sCP[0].sCPR[45].nSCStart= 142;        sT[0].sCP[0].sCPR[45].nAckStart=0;  	sT[0].sCP[0].sCPR[45].nAckNum=0;      sT[0].sCP[0].sCPR[45].nSPOffsetCS = 790;        sT[0].sCP[0].sCPR[45].nSPOffsetLek = 791;
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
sT[0].sCP[0].sCPR[81].nDCStart = 281;  		sT[0].sCP[0].sCPR[81].nDCNum = 4;       sT[0].sCP[0].sCPR[81].nSCStart= 286;        sT[0].sCP[0].sCPR[81].nAckStart=285;  	sT[0].sCP[0].sCPR[81].nAckNum=1;      sT[0].sCP[0].sCPR[81].nSPOffsetCS = 1487;       sT[0].sCP[0].sCPR[81].nSPOffsetLek = 1488;
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
sT[0].sCP[0].sCPR[98].nDCStart = 354;    	sT[0].sCP[0].sCPR[98].nDCNum = 4;    	sT[0].sCP[0].sCPR[98].nSCStart= 358;    	sT[0].sCP[0].sCPR[98].nAckStart=0;  	sT[0].sCP[0].sCPR[98].nAckNum=0;   	  sT[0].sCP[0].sCPR[98].nSPOffsetCS = 1950;   	  sT[0].sCP[0].sCPR[98].nSPOffsetLek = 1951;
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




/* TMOK jelsz�mok inicializ�l�sa ciklusban */	
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

	sT[0].sMOT[0].nIEC_SP				= 292;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[0].nIEC_DP				= 27;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[0].nIEC_NM				= 61;		/* M�r�sek IEC kezd�c�me */


/* 30-13 TMOK -----------------------------------------------------------*/
sT[0].sTI[1].nType = TYP_TMOK;

	sT[0].sMOT[1].nIEC_SP				= 20;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[1].nIEC_DP				= 10;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[1].nIEC_NM				= 10;		/* M�r�sek IEC kezd�c�me */

/* 30-35 TMOK -----------------------------------------------------------*/
sT[0].sTI[2].nType = TYP_TMOK;

	sT[0].sMOT[2].nIEC_SP				= 36;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[2].nIEC_DP				= 11;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[2].nIEC_NM				= 13;		/* M�r�sek IEC kezd�c�me */

/* 30-57 TMOK -----------------------------------------------------------*/
sT[0].sTI[3].nType = TYP_TMOK;

	sT[0].sMOT[3].nIEC_SP				= 52;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[3].nIEC_DP				= 12;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[3].nIEC_NM				= 16;		/* M�r�sek IEC kezd�c�me */

/* 30-98 TMOK -----------------------------------------------------------*/
sT[0].sTI[4].nType = TYP_TMOK;

	sT[0].sMOT[4].nIEC_SP				= 68;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[4].nIEC_DP				= 13;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[4].nIEC_NM				= 19;		/* M�r�sek IEC kezd�c�me */

/* 31-30 TMOK -----------------------------------------------------------*/
sT[0].sTI[5].nType = TYP_TMOK;

	sT[0].sMOT[5].nIEC_SP				= 84;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[5].nIEC_DP				= 14;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[5].nIEC_NM				= 22;		/* M�r�sek IEC kezd�c�me */

/* 32-91 TMOK -----------------------------------------------------------*/
sT[0].sTI[6].nType = TYP_TMOK;

	sT[0].sMOT[6].nIEC_SP				= 100;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[6].nIEC_DP				= 15;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[6].nIEC_NM				= 25;		/* M�r�sek IEC kezd�c�me */

/* 41-89 TMOK -----------------------------------------------------------*/
sT[0].sTI[7].nType = TYP_TMOK;

	sT[0].sMOT[7].nIEC_SP				= 116;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[7].nIEC_DP				= 16;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[7].nIEC_NM				= 28;		/* M�r�sek IEC kezd�c�me */

/* 30-80 TMOK -----------------------------------------------------------*/
sT[0].sTI[8].nType = TYP_TMOK;

	sT[0].sMOT[8].nIEC_SP				= 132;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[8].nIEC_DP				= 17;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[8].nIEC_NM				= 31;		/* M�r�sek IEC kezd�c�me */

/* 86-57, 86-38 TMOK -----------------------------------------------------------*/
sT[0].sTI[9].nType = TYP_TMOK;

	sT[0].sMOT[9].nIEC_SP				= 308;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[9].nIEC_SP_NUM			= 30;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[9].nIEC_DP				= 18;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[9].nIEC_DP_NUM			= 2;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[9].nIEC_NM				= 64;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[9].nNMNum				= 4;		/* Anal�g m�r�sek sz�ma*/

/*  85-03 TMOK -----------------------------------------------------------*/
sT[0].sTI[10].nType = TYP_TMOK;

	sT[0].sMOT[10].nIEC_SP				= 148;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[10].nIEC_DP				= 28;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[10].nIEC_NM				= 34;		/* M�r�sek IEC kezd�c�me */



/* 80-96,80-97 TMOK -----------------------------------------------------------*/
sT[0].sTI[11].nType = TYP_TMOK;

	sT[0].sMOT[11].nIEC_SP				= 342;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[11].nIEC_SP_NUM			= 30;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[11].nIEC_DP				= 20;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[11].nIEC_DP_NUM			= 2;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[11].nIEC_NM				= 68;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[11].nNMNum				= 4;		/* Anal�g m�r�sek sz�ma*/

/*  70-19 TMOK -----------------------------------------------------------*/
sT[0].sTI[12].nType = TYP_TMOK;

	sT[0].sMOT[12].nIEC_SP				= 164;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[12].nIEC_DP				= 29;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[12].nIEC_NM				= 37;		/* M�r�sek IEC kezd�c�me */

/* 82-14 TMOK -----------------------------------------------------------*/
sT[0].sTI[13].nType = TYP_TMOK;

	sT[0].sMOT[13].nIEC_SP				= 212;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[13].nIEC_DP				= 22;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[13].nIEC_NM				= 46;		/* M�r�sek IEC kezd�c�me */

/* 82-67 TMOK -----------------------------------------------------------*/
sT[0].sTI[14].nType = TYP_TMOK;

	sT[0].sMOT[14].nIEC_SP				= 228;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[14].nIEC_DP				= 23;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[14].nIEC_NM				= 49;		/* M�r�sek IEC kezd�c�me */

/* 82-37 TMOK -----------------------------------------------------------*/
sT[0].sTI[15].nType = TYP_TMOK;

	sT[0].sMOT[15].nIEC_SP				= 244;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[15].nIEC_DP				= 24;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[15].nIEC_NM				= 52;		/* M�r�sek IEC kezd�c�me */

/* 31-54 TMOK -----------------------------------------------------------*/
sT[0].sTI[16].nType = TYP_TMOK;

	sT[0].sMOT[16].nIEC_SP				= 260;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[16].nIEC_DP				= 25;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[16].nIEC_NM				= 55;		/* M�r�sek IEC kezd�c�me */

/* 31-66 TMOK -----------------------------------------------------------*/
sT[0].sTI[17].nType = TYP_TMOK;

	sT[0].sMOT[17].nIEC_SP				= 276;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[17].nIEC_DP				= 26;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[17].nIEC_NM				= 58;		/* M�r�sek IEC kezd�c�me */

/* 35-45 TMOK -----------------------------------------------------------*/
sT[0].sTI[18].nType = TYP_TMOK;

	sT[0].sMOT[18].nIEC_SP				= 180;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[18].nIEC_DP				= 30;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[18].nIEC_NM				= 40;		/* M�r�sek IEC kezd�c�me */

/* 86-81 TMOK -----------------------------------------------------------*/
sT[0].sTI[19].nType = TYP_TMOK;

	sT[0].sMOT[19].nIEC_SP				= 376;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[19].nIEC_DP				= 32;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[19].nIEC_NM				= 72;		/* M�r�sek IEC kezd�c�me */

/* 41-38 TMOK -----------------------------------------------------------*/
sT[0].sTI[20].nType = TYP_TMOK;

	sT[0].sMOT[20].nIEC_SP				= 196;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[20].nIEC_DP				= 31;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[20].nIEC_NM				= 43;		/* M�r�sek IEC kezd�c�me */

/* 12-48 TMOK -----------------------------------------------------------*/
sT[0].sTI[21].nType = TYP_TMOK;

	sT[0].sMOT[21].nIEC_SP				= 408;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[21].nIEC_DP				= 34;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[21].nIEC_NM				= 78;		/* M�r�sek IEC kezd�c�me */

/* 85-24 TMOK -----------------------------------------------------------*/
sT[0].sTI[22].nType = TYP_TMOK;

	sT[0].sMOT[22].nIEC_SP				= 424;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[22].nIEC_DP				= 35;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[22].nIEC_NM				= 81;		/* M�r�sek IEC kezd�c�me */

/* 14-20 TMOK -----------------------------------------------------------*/
sT[0].sTI[23].nType = TYP_TMOK;

	sT[0].sMOT[23].nIEC_SP				= 440;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[23].nIEC_DP				= 36;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[23].nIEC_NM				= 84;		/* M�r�sek IEC kezd�c�me */

/* 32-36 TMOK ZE -----------------------------------------------------------*/
sT[0].sTI[24].nType = TYP_TMOK;

	sT[0].sMOT[24].nIEC_SP				= 456;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[24].nIEC_DP				= 37;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[24].nIEC_NM				= 87;		/* M�r�sek IEC kezd�c�me */

/* 40-85 TMOK ZE -----------------------------------------------------------*/
sT[0].sTI[25].nType = TYP_TMOK;

	sT[0].sMOT[25].nIEC_SP				= 472;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[25].nIEC_DP				= 38;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[25].nIEC_NM				= 90;		/* M�r�sek IEC kezd�c�me */

/* 30-44 TMOK ZE -----------------------------------------------------------*/
sT[0].sTI[26].nType = TYP_TMOK;

	sT[0].sMOT[26].nIEC_SP				= 488;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[26].nIEC_DP				= 39;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[26].nIEC_NM				= 93;		/* M�r�sek IEC kezd�c�me */

/* 85-46 TMOK  -----------------------------------------------------------*/
sT[0].sTI[27].nType = TYP_TMOK;

	sT[0].sMOT[27].nIEC_SP				= 504;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[27].nIEC_DP				= 40;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[27].nIEC_NM				= 96;		/* M�r�sek IEC kezd�c�me */

/* 92-57 TMOK ZE -----------------------------------------------------------*/
sT[0].sTI[28].nType = TYP_TMOK;

	sT[0].sMOT[28].nIEC_SP				= 520;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[28].nIEC_DP				= 41;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[28].nIEC_NM				= 99;		/* M�r�sek IEC kezd�c�me */

/* 31-03 TMOK ZE -----------------------------------------------------------*/
sT[0].sTI[29].nType = TYP_TMOK;

	sT[0].sMOT[29].nIEC_SP				= 536;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[29].nIEC_DP				= 42;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[29].nIEC_NM				= 102;		/* M�r�sek IEC kezd�c�me */

/* 40-57 TMOK ZE -----------------------------------------------------------*/
sT[0].sTI[30].nType = TYP_TMOK;

	sT[0].sMOT[30].nIEC_SP				= 392;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[30].nIEC_DP				= 33;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[30].nIEC_NM				= 75;		/* M�r�sek IEC kezd�c�me */

/* 32-17 TMOK ZE -----------------------------------------------------------*/
sT[0].sTI[31].nType = TYP_TMOK;

	sT[0].sMOT[31].nIEC_SP				= 568;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[31].nIEC_DP				= 44;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[31].nIEC_NM				= 108;		/* M�r�sek IEC kezd�c�me */

/* 92-65 TMOK ZE -----------------------------------------------------------*/
sT[0].sTI[32].nType = TYP_TMOK;

	sT[0].sMOT[32].nIEC_SP				= 584;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[32].nIEC_DP				= 45;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[32].nIEC_NM				= 111;		/* M�r�sek IEC kezd�c�me */

/* 32-61 TMOK ZE -----------------------------------------------------------*/
sT[0].sTI[33].nType = TYP_TMOK;

	sT[0].sMOT[33].nIEC_SP				= 616;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[33].nIEC_DP				= 47;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[33].nIEC_NM				= 117;		/* M�r�sek IEC kezd�c�me */

/* 92-68 TMOK ZE -----------------------------------------------------------*/
sT[0].sTI[34].nType = TYP_TMOK;

	sT[0].sMOT[34].nIEC_SP				= 632;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[34].nIEC_DP				= 48;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[34].nIEC_NM				= 120;		/* M�r�sek IEC kezd�c�me */

/* 32-25 TMOK ZE -----------------------------------------------------------*/
sT[0].sTI[35].nType = TYP_TMOK;

	sT[0].sMOT[35].nIEC_SP				= 664;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[35].nIEC_DP				= 50;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[35].nIEC_NM				= 126;		/* M�r�sek IEC kezd�c�me */

/* 52-15 TMOK ZE -----------------------------------------------------------*/
sT[0].sTI[36].nType = TYP_TMOK;

	sT[0].sMOT[36].nIEC_SP				= 648;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[36].nIEC_DP				= 49;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[36].nIEC_NM				= 123;		/* M�r�sek IEC kezd�c�me */

/* 14-99 TMOK ZE -----------------------------------------------------------*/
sT[0].sTI[37].nType = TYP_TMOK;

	sT[0].sMOT[37].nIEC_SP				= 552;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[37].nIEC_DP				= 43;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[37].nIEC_NM				= 105;		/* M�r�sek IEC kezd�c�me */

/* 32-24 TMOK ZE -----------------------------------------------------------*/
sT[0].sTI[38].nType = TYP_TMOK;

	sT[0].sMOT[38].nIEC_SP				= 696;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[38].nIEC_DP				= 52;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[38].nIEC_NM				= 132;		/* M�r�sek IEC kezd�c�me */

/* 37-199 TMOK  -----------------------------------------------------------*/
sT[0].sTI[39].nType = TYP_TMOK;

	sT[0].sMOT[39].nIEC_SP				= 680;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[39].nIEC_DP				= 51;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[39].nIEC_NM				= 129;		/* M�r�sek IEC kezd�c�me */

/* 15-20 TMOK  -----------------------------------------------------------*/
sT[0].sTI[40].nType = TYP_TMOK;

	sT[0].sMOT[40].nIEC_SP				= 600;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[40].nIEC_DP				= 46;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[40].nIEC_NM				= 114;		/* M�r�sek IEC kezd�c�me */

/* 70-46 TMOK  -----------------------------------------------------------*/
sT[0].sTI[41].nType = TYP_TMOK;

	sT[0].sMOT[41].nIEC_SP				= 712;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[41].nIEC_DP				= 53;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[41].nIEC_NM				= 135;		/* M�r�sek IEC kezd�c�me */

/* 21-39 TMOK  -----------------------------------------------------------*/
sT[0].sTI[42].nType = TYP_TMOK;

	sT[0].sMOT[42].nIEC_SP				= 728;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[42].nIEC_DP				= 54;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[42].nIEC_NM				= 138;		/* M�r�sek IEC kezd�c�me */


/* 70-27 TMOK  -----------------------------------------------------------*/
sT[0].sTI[43].nType = TYP_TMOK;

	sT[0].sMOT[43].nIEC_SP				= 744;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[43].nIEC_DP				= 55;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[43].nIEC_NM				= 141;		/* M�r�sek IEC kezd�c�me */

/* 90-82 TMOK  -----------------------------------------------------------*/
sT[0].sTI[44].nType = TYP_TMOK;

	sT[0].sMOT[44].nIEC_SP				= 760;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[44].nIEC_DP				= 56;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[44].nIEC_NM				= 144;		/* M�r�sek IEC kezd�c�me */

/* 81-19 TMOK  -----------------------------------------------------------*/
sT[0].sTI[45].nType = TYP_TMOK;

	sT[0].sMOT[45].nIEC_SP				= 776;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[45].nIEC_DP				= 57;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[45].nIEC_NM				= 147;		/* M�r�sek IEC kezd�c�me */

/* 52-23 TMOK  -----------------------------------------------------------*/
sT[0].sTI[46].nType = TYP_TMOK;

	sT[0].sMOT[46].nIEC_SP				= 792;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[46].nIEC_DP				= 58;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[46].nIEC_NM				= 150;		/* M�r�sek IEC kezd�c�me */

/* 86-45 TMOK  -----------------------------------------------------------*/
sT[0].sTI[47].nType = TYP_TMOK;

	sT[0].sMOT[47].nIEC_SP				= 808;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[47].nIEC_DP				= 59;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[47].nIEC_NM				= 153;		/* M�r�sek IEC kezd�c�me */

/* 81-01 TMOK  -----------------------------------------------------------*/
sT[0].sTI[48].nType = TYP_TMOK;

	sT[0].sMOT[48].nIEC_SP				= 824;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[48].nIEC_DP				= 60;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[48].nIEC_NM				= 156;		/* M�r�sek IEC kezd�c�me */

/* 81-31 TMOK  -----------------------------------------------------------*/
sT[0].sTI[49].nType = TYP_TMOK;

	sT[0].sMOT[49].nIEC_SP				= 840;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[49].nIEC_DP				= 61;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[49].nIEC_NM				= 159;		/* M�r�sek IEC kezd�c�me */

/* 92-85 TMOK  -----------------------------------------------------------*/
sT[0].sTI[50].nType = TYP_TMOK;

	sT[0].sMOT[50].nIEC_SP				= 856;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[50].nIEC_DP				= 62;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[50].nIEC_NM				= 162;		/* M�r�sek IEC kezd�c�me */

/* 91-30 TMOK  -----------------------------------------------------------*/
sT[0].sTI[51].nType = TYP_TMOK;

	sT[0].sMOT[51].nIEC_SP				= 872;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[51].nIEC_DP				= 63;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[51].nIEC_NM				= 165;		/* M�r�sek IEC kezd�c�me */

/* 31-15 TMOK  -----------------------------------------------------------*/
sT[0].sTI[52].nType = TYP_TMOK;

	sT[0].sMOT[52].nIEC_SP				= 888;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[52].nIEC_DP				= 64;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[52].nIEC_NM				= 168;		/* M�r�sek IEC kezd�c�me */

/* 81-10 TMOK  -----------------------------------------------------------*/
sT[0].sTI[53].nType = TYP_TMOK;

	sT[0].sMOT[53].nIEC_SP				= 904;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[53].nIEC_DP				= 65;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[53].nIEC_NM				= 171;		/* M�r�sek IEC kezd�c�me */

/* 90-90 TMOK  -----------------------------------------------------------*/
sT[0].sTI[54].nType = TYP_TMOK;

	sT[0].sMOT[54].nIEC_SP				= 920;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[54].nIEC_DP				= 66;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[54].nIEC_NM				= 174;		/* M�r�sek IEC kezd�c�me */

/* 92-96 TMOK  -----------------------------------------------------------*/
sT[0].sTI[55].nType = TYP_TMOK;

	sT[0].sMOT[55].nIEC_SP				= 936;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[55].nIEC_DP				= 67;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[55].nIEC_NM				= 177;		/* M�r�sek IEC kezd�c�me */

/* 34-18 TMOK  -----------------------------------------------------------*/
sT[0].sTI[56].nType = TYP_TMOK;

	sT[0].sMOT[56].nIEC_SP				= 952;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[56].nIEC_DP				= 68;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[56].nIEC_NM				= 180;		/* M�r�sek IEC kezd�c�me */

/* 40-98 TMOK  -----------------------------------------------------------*/
sT[0].sTI[57].nType = TYP_TMOK;

	sT[0].sMOT[57].nIEC_SP				= 968;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[57].nIEC_DP				= 69;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[57].nIEC_NM				= 183;		/* M�r�sek IEC kezd�c�me */

/* 35-11 TMOK  -----------------------------------------------------------*/
sT[0].sTI[58].nType = TYP_TMOK;

	sT[0].sMOT[58].nIEC_SP				= 984;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[58].nIEC_DP				= 70;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[58].nIEC_NM				= 186;		/* M�r�sek IEC kezd�c�me */

/* 70-29 TMOK  -----------------------------------------------------------*/
sT[0].sTI[59].nType = TYP_TMOK;

	sT[0].sMOT[59].nIEC_SP				= 1000;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[59].nIEC_DP				= 71;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[59].nIEC_NM				= 189;		/* M�r�sek IEC kezd�c�me */

/* 80-49 TMOK  -----------------------------------------------------------*/
sT[0].sTI[60].nType = TYP_TMOK;

	sT[0].sMOT[60].nIEC_SP				= 1016;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[60].nIEC_DP				= 72;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[60].nIEC_NM				= 192;		/* M�r�sek IEC kezd�c�me */

/* 72-33 TMOK  -----------------------------------------------------------*/
sT[0].sTI[61].nType = TYP_TMOK;

	sT[0].sMOT[61].nIEC_SP				= 1032;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[61].nIEC_DP				= 73;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[61].nIEC_NM				= 195;		/* M�r�sek IEC kezd�c�me */

/* 71-39 TMOK  -----------------------------------------------------------*/
sT[0].sTI[62].nType = TYP_TMOK;

	sT[0].sMOT[62].nIEC_SP				= 1048;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[62].nIEC_DP				= 74;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[62].nIEC_NM				= 198;		/* M�r�sek IEC kezd�c�me */

/* 32-88 TMOK  -----------------------------------------------------------*/
sT[0].sTI[63].nType = TYP_TMOK;

	sT[0].sMOT[63].nIEC_SP				= 1064;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[63].nIEC_DP				= 75;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[63].nIEC_NM				= 201;		/* M�r�sek IEC kezd�c�me */

/* 31-25 TMOK  -----------------------------------------------------------*/
sT[0].sTI[64].nType = TYP_TMOK;

	sT[0].sMOT[64].nIEC_SP				= 1080;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[64].nIEC_DP				= 76;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[64].nIEC_NM				= 204;		/* M�r�sek IEC kezd�c�me */

/* 71-70 TMOK  -----------------------------------------------------------*/
sT[0].sTI[65].nType = TYP_TMOK;

	sT[0].sMOT[65].nIEC_SP				= 1096;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[65].nIEC_DP				= 77;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[65].nIEC_NM				= 207;		/* M�r�sek IEC kezd�c�me */

/* 21-37 TMOK  -----------------------------------------------------------*/
sT[0].sTI[66].nType = TYP_TMOK;

	sT[0].sMOT[66].nIEC_SP				= 1112;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[66].nIEC_DP				= 78;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[66].nIEC_NM				= 210;		/* M�r�sek IEC kezd�c�me */

/* 54-24 TMOK  -----------------------------------------------------------*/
sT[0].sTI[67].nType = TYP_TMOK;

	sT[0].sMOT[67].nIEC_SP				= 1128;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[67].nIEC_DP				= 79;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[67].nIEC_NM				= 213;		/* M�r�sek IEC kezd�c�me */

/* 20-16 TMOK  -----------------------------------------------------------*/
sT[0].sTI[68].nType = TYP_TMOK;

	sT[0].sMOT[68].nIEC_SP				= 1144;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[68].nIEC_DP				= 80;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[68].nIEC_NM				= 216;		/* M�r�sek IEC kezd�c�me */

/* 54-33 TMOK  -----------------------------------------------------------*/
sT[0].sTI[69].nType = TYP_TMOK;

	sT[0].sMOT[69].nIEC_SP				= 1160;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[69].nIEC_DP				= 81;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[69].nIEC_NM				= 219;		/* M�r�sek IEC kezd�c�me */

/* S�rv�r, Vadkert2 TALUS -------------------------------------------------------------*/
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

/* S�rv�r, Term�l Hotel TALUS -------------------------------------------------------------*/
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

	sT[0].sMOT[72].nIEC_SP				= 1250;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[72].nIEC_DP				= 99;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[72].nIEC_NM				= 235;		/* M�r�sek IEC kezd�c�me */

/* Szombathely, 11-es Huszar uti gazmotor -------------------------------------------------------------*/
sT[0].sTI[73].nType = TYP_MOT;	
	
	sT[0].sMOT[73].nIEC_SP				= 1266;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[73].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[73].nIEC_DP				= 100;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[73].nIEC_DP_NUM			= 4;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[73].nIEC_NM				= 0;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[73].nNMNum				= 0;		/* Anal�g m�r�sek sz�ma*/

/* Ostffyasszonyfa, sz�lgener�tor -----------------------------------------------------------------------------------*/
sT[0].sTI[74].nType = TYP_TAL;	

		sT[0].sTAL[74].nIEC_SP       		= 1284;
		sT[0].sTAL[74].nIEC_OsszevontHiba	= 1316;
		sT[0].sTAL[74].nIEC_MT_KommHiba		= 1317;
		sT[0].sTAL[74].nIEC_DP       		= 104;
		sT[0].sTAL[74].nIEC_DP_FSZ1  		= 108;
		sT[0].sTAL[74].nIEC_NM				= 238;
		sT[0].sTAL[74].nNMNum		  		= 9;

/* Ag�rd, Kisvelence -------------------------------------------------------------*/
sT[0].sTI[75].nType = TYP_MOT;	
	
	sT[0].sMOT[75].nIEC_SP				= 1321;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[75].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[75].nIEC_DP				= 112;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[75].nIEC_DP_NUM			= 5;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[75].nIEC_NM				= 0;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[75].nNMNum				= 0;		/* Anal�g m�r�sek sz�ma*/

/* Tatab�nya, Sz�l�s ---------------------------------------------------------------*/
sT[0].sTI[76].nType = TYP_MOT;	
	
	sT[0].sMOT[76].nIEC_SP				= 1339;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[76].nIEC_SP_NUM			= 16;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[76].nIEC_DP				= 117;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[76].nIEC_DP_NUM			= 12;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[76].nIEC_NM				= 0;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[76].nNMNum				= 0;		/* Anal�g m�r�sek sz�ma*/
	
/* Tatab�nya, �v�ros ---------------------------------------------------------------*/
sT[0].sTI[77].nType = TYP_MOT;	
	
	sT[0].sMOT[77].nIEC_SP				= 1357;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[77].nIEC_SP_NUM			= 26;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[77].nIEC_DP				= 129;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[77].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[77].nIEC_NM				= 0;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[77].nNMNum				= 0;		/* Anal�g m�r�sek sz�ma*/
     
/* 52-50 TMOK  -----------------------------------------------------------*/
sT[0].sTI[78].nType = TYP_TMOK;

	sT[0].sMOT[78].nIEC_SP				= 1383;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[78].nIEC_DP				= 137;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[78].nIEC_NM				= 247;		/* M�r�sek IEC kezd�c�me */

/* Sz�kesfeh�rv�r, Feherpalota ---------------------------------------------------------------*/
sT[0].sTI[79].nType = TYP_MOT;	
	
	sT[0].sMOT[79].nIEC_SP				= 1399;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[79].nIEC_SP_NUM			= 14;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[79].nIEC_DP				= 138;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[79].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[79].nIEC_NM				= 0;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[79].nNMNum				= 0;		/* Anal�g m�r�sek sz�ma*/
     
/* Tatab�nya, Szent Borb�la g�zmotor TALUS -------------------------------------------------------------*/
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

/* Tatab�nya, Vertes center TALUS -------------------------------------------------------------*/
sT[0].sTI[81].nType = TYP_TAL;	

		sT[0].sTAL[81].nIEC_SP       		= 1452;
		sT[0].sTAL[81].nIEC_OsszevontHiba	= 1484;
		sT[0].sTAL[81].nIEC_MT_KommHiba		= 1485;
		sT[0].sTAL[81].nIEC_DP       		= 156;
		sT[0].sTAL[81].nIEC_DP_FSZ1  		= 160;
		sT[0].sTAL[81].nIEC_NM				= 259;
		sT[0].sTAL[81].nNMNum		  		= 4;
		
/* 11-23 TMOK  -----------------------------------------------------------*/
sT[0].sTI[82].nType = TYP_TMOK;

	sT[0].sMOT[82].nIEC_SP				= 1489;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[82].nIEC_DP				= 164;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[82].nIEC_NM				= 263;		/* M�r�sek IEC kezd�c�me */

/* 11-27 TMOK  -----------------------------------------------------------*/
sT[0].sTI[83].nType = TYP_TMOK;

	sT[0].sMOT[83].nIEC_SP				= 1505;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[83].nIEC_DP				= 165;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[83].nIEC_NM				= 266;		/* M�r�sek IEC kezd�c�me */

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

/* S�rv�r, Spirit Hotel, TALUS -------------------------------------------------------------*/
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

/* Kom�rom, NOKIA OHUB -----------------------------------------------------------*/
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

	sT[0].sMOT[90].nIEC_SP				= 1743;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[90].nIEC_DP				= 222;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[90].nIEC_NM				= 312;		/* M�r�sek IEC kezd�c�me */

/*  Szentgotthard �tj�tsz� -----------------------------------------------------------*/	
sT[0].sTI[91].nType = TYP_MOT;	

	sT[0].sMOT[91].nIEC_SP			= 1759;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[91].nIEC_SP_NUM		= 5;		/* Egybites �rt�kek sz�ma*/	
	sT[0].sMOT[91].nIEC_DP_NUM		= 0;
	sT[0].sMOT[91].nNMNum      		= 0;

/*  42-56 vTMOK  -----------------------------------------------------------*/
sT[0].sTI[92].nType = TYP_TMOK;

	sT[0].sMOT[92].nIEC_SP				= 1766;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[92].nIEC_DP				= 223;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[92].nIEC_NM				= 315;		/* M�r�sek IEC kezd�c�me */

/*  43-25 TMOK  -----------------------------------------------------------*/
sT[0].sTI[93].nType = TYP_TMOK;

	sT[0].sMOT[93].nIEC_SP				= 1782;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[93].nIEC_DP				= 224;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[93].nIEC_NM				= 318;		/* M�r�sek IEC kezd�c�me */

/*  TMOK  -----------------------------------------------------------*/
sT[0].sTI[94].nType = TYP_TMOK;

	sT[0].sMOT[94].nIEC_SP				= 1798;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[94].nIEC_DP				= 225;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[94].nIEC_NM				= 321;		/* M�r�sek IEC kezd�c�me */

/* M�r, Hammerstein -----------------------------------------------------------*/
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

	sT[0].sMOT[97].nIEC_SP				= 1888;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[97].nIEC_DP				= 244;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[97].nIEC_NM				= 339;		/* M�r�sek IEC kezd�c�me */
	
/* Szombathely, Merkur ---------------------------------------------------------------*/
sT[0].sTI[98].nType = TYP_MOT;	
	
	sT[0].sMOT[98].nIEC_SP				= 1936;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[98].nIEC_SP_NUM			= 14;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[98].nIEC_DP				= 263;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[98].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[98].nIEC_NM				= 0;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[98].nNMNum				= 0;		/* Anal�g m�r�sek sz�ma*/
	
/* Tatabanya, Ipari park ---------------------------------------------------------------*/
sT[0].sTI[99].nType = TYP_MOT;	
	
	sT[0].sMOT[99].nIEC_SP				= 1952;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[99].nIEC_SP_NUM			= 14;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[99].nIEC_DP				= 255;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[99].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[99].nIEC_NM				= 348;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[99].nNMNum				= 2;		/* Anal�g m�r�sek sz�ma*/

/*  42-70 TMOK  -----------------------------------------------------------*/
sT[0].sTI[100].nType = TYP_TMOK;

	sT[0].sMOT[100].nIEC_SP				= 1904;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[100].nIEC_DP				= 245;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[100].nIEC_NM				= 342;		/* M�r�sek IEC kezd�c�me */
	
/*  42-81 TMOK  -----------------------------------------------------------*/
sT[0].sTI[101].nType = TYP_TMOK;

	sT[0].sMOT[101].nIEC_SP				= 1920;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[101].nIEC_DP				= 246;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[101].nIEC_NM				= 345;		/* M�r�sek IEC kezd�c�me */

/* Oroszl�ny, Tak�cs B ---------------------------------------------------------------*/
sT[0].sTI[102].nType = TYP_MOT;	
	
	sT[0].sMOT[102].nIEC_SP				= 1968;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[102].nIEC_SP_NUM			= 14;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[102].nIEC_DP				= 271;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[102].nIEC_DP_NUM			= 4;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[102].nIEC_NM				= 0;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[102].nNMNum				= 0;		/* Anal�g m�r�sek sz�ma*/

/* Oroszl�ny, B ---------------------------------------------------------------*/
sT[0].sTI[103].nType = TYP_MOT;	
	
	sT[0].sMOT[103].nIEC_SP				= 1984;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[103].nIEC_SP_NUM			= 14;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[103].nIEC_DP				= 275;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[103].nIEC_DP_NUM			= 4;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[103].nIEC_NM				= 0;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[103].nNMNum				= 0;		/* Anal�g m�r�sek sz�ma*/

/* Oroszl�ny, 35A ---------------------------------------------------------------*/
sT[0].sTI[104].nType = TYP_MOT;	
	
	sT[0].sMOT[104].nIEC_SP				= 2000;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[104].nIEC_SP_NUM			= 14;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[104].nIEC_DP				= 279;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[104].nIEC_DP_NUM			= 4;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[104].nIEC_NM				= 0;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[104].nNMNum				= 0;		/* Anal�g m�r�sek sz�ma*/

/* Oroszl�ny, 35 ---------------------------------------------------------------*/
sT[0].sTI[105].nType = TYP_MOT;	
	
	sT[0].sMOT[105].nIEC_SP				= 2016;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[105].nIEC_SP_NUM			= 14;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[105].nIEC_DP				= 283;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[105].nIEC_DP_NUM			= 4;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[105].nIEC_NM				= 0;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[105].nNMNum				= 0;		/* Anal�g m�r�sek sz�ma*/

/* Oroszl�ny, 14 ---------------------------------------------------------------*/
sT[0].sTI[106].nType = TYP_MOT;	
	
	sT[0].sMOT[106].nIEC_SP				= 2032;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[106].nIEC_SP_NUM			= 14;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[106].nIEC_DP				= 287;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[106].nIEC_DP_NUM			= 4;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[106].nIEC_NM				= 0;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[106].nNMNum				= 0;		/* Anal�g m�r�sek sz�ma*/






/* Oroszl�ny, 8 ---------------------------------------------------------------*/
sT[0].sTI[107].nType = TYP_MOT;	
	
	sT[0].sMOT[107].nIEC_SP				= 2048;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[107].nIEC_SP_NUM			= 14;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[107].nIEC_DP				= 291;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[107].nIEC_DP_NUM			= 4;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[107].nIEC_NM				= 0;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[107].nNMNum				= 0;		/* Anal�g m�r�sek sz�ma*/


/* Oroszl�ny, 7 ---------------------------------------------------------------*/
sT[0].sTI[108].nType = TYP_MOT;	
	
	sT[0].sMOT[108].nIEC_SP				= 2064;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[108].nIEC_SP_NUM			= 14;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[108].nIEC_DP				= 295;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[108].nIEC_DP_NUM			= 4;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[108].nIEC_NM				= 0;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[108].nNMNum				= 0;		/* Anal�g m�r�sek sz�ma*/

/* Oroszl�ny, 11 ---------------------------------------------------------------*/
sT[0].sTI[109].nType = TYP_MOT;	
	
	sT[0].sMOT[109].nIEC_SP				= 2080;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[109].nIEC_SP_NUM			= 14;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[109].nIEC_DP				= 299;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[109].nIEC_DP_NUM			= 4;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[109].nIEC_NM				= 0;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[109].nNMNum				= 0;		/* Anal�g m�r�sek sz�ma*/


/* Oroszl�ny, 33 ---------------------------------------------------------------*/
sT[0].sTI[110].nType = TYP_MOT;	
	
	sT[0].sMOT[110].nIEC_SP				= 2096;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[110].nIEC_SP_NUM			= 14;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[110].nIEC_DP				= 303;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[110].nIEC_DP_NUM			= 4;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[110].nIEC_NM				= 0;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[110].nNMNum				= 0;		/* Anal�g m�r�sek sz�ma*/


/* 21-34, 21-38 NPS-RTU-NPS TMOK ----------------------------------------------------*/
sT[0].sTI[111].nType = TYP_TMOK;

	sT[0].sMOT[111].nIEC_SP				= 2112;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[111].nIEC_SP_NUM			= 30;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[111].nIEC_DP				= 307;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[111].nIEC_DP_NUM			= 2;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[111].nIEC_NM				= 350;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[111].nNMNum				= 4;		/* Anal�g m�r�sek sz�ma*/


/* Oroszl�ny, Eszterh�zy ---------------------------------------------------------------*/
sT[0].sTI[112].nType = TYP_MOT;	
	
	sT[0].sMOT[112].nIEC_SP				= 2146;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[112].nIEC_SP_NUM			= 14;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[112].nIEC_DP				= 309;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[112].nIEC_DP_NUM			= 4;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[112].nIEC_NM				= 0;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[112].nNMNum				= 0;		/* Anal�g m�r�sek sz�ma*/

/*  82-44 NPS  -----------------------------------------------------------*/
sT[0].sTI[113].nType = TYP_TMOK;

	sT[0].sMOT[113].nIEC_SP				= 2162;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[113].nIEC_DP				= 313;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[113].nIEC_NM				= 354;		/* M�r�sek IEC kezd�c�me */


/* Tatab�nya, H�k�zpont ---------------------------------------------------------------*/
sT[0].sTI[114].nType = TYP_MOT;	
	
	sT[0].sMOT[114].nIEC_SP				= 2178;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[114].nIEC_SP_NUM			= 14;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[114].nIEC_DP				= 314;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[114].nIEC_DP_NUM			= 4;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[114].nIEC_NM				= 0;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[114].nNMNum				= 0;		/* Anal�g m�r�sek sz�ma*/

/* Tatab�nya, S�rberek A ---------------------------------------------------------------*/
sT[0].sTI[115].nType = TYP_MOT;	
	
	sT[0].sMOT[115].nIEC_SP				= 2194;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[115].nIEC_SP_NUM			= 14;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[115].nIEC_DP				= 318;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[115].nIEC_DP_NUM			= 4;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[115].nIEC_NM				= 0;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[115].nNMNum				= 0;		/* Anal�g m�r�sek sz�ma*/

/* Oroszl�ny, Gimn�zium ---------------------------------------------------------------*/
sT[0].sTI[116].nType = TYP_MOT;	
	
	sT[0].sMOT[116].nIEC_SP				= 2210;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[116].nIEC_SP_NUM			= 14;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[116].nIEC_DP				= 322;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[116].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[116].nIEC_NM				= 357;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[116].nNMNum				= 2;		/* Anal�g m�r�sek sz�ma*/

/* Tatab�nya, SCI ---------------------------------------------------------------*/
sT[0].sTI[117].nType = TYP_MOT;	
	
	sT[0].sMOT[117].nIEC_SP				= 2226;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[117].nIEC_SP_NUM			= 14;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[117].nIEC_DP				= 330;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[117].nIEC_DP_NUM			= 4;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[117].nIEC_NM				= 0;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[117].nNMNum				= 0;		/* Anal�g m�r�sek sz�ma*/

/*  81-92 NPS  -----------------------------------------------------------*/
sT[0].sTI[118].nType = TYP_TMOK;

	sT[0].sMOT[118].nIEC_SP				= 2258;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[118].nIEC_DP				= 335;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[118].nIEC_NM				= 362;		/* M�r�sek IEC kezd�c�me */

/*  81-41 NPS  -----------------------------------------------------------*/
sT[0].sTI[119].nType = TYP_TMOK;

	sT[0].sMOT[119].nIEC_SP				= 2242;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[119].nIEC_DP				= 334;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[119].nIEC_NM				= 359;		/* M�r�sek IEC kezd�c�me */

/* J�nossomorja J01, sz�leromu -----------------------------------------------------------*/
sT[0].sTI[120].nType = TYP_TAL;

		sT[0].sTAL[120].nIEC_SP       		= 2274;
		sT[0].sTAL[120].nIEC_OsszevontHiba	= 2306;
		sT[0].sTAL[120].nIEC_MT_KommHiba	= 2307;
		sT[0].sTAL[120].nIEC_DP       		= 336;
		sT[0].sTAL[120].nIEC_DP_FSZ1  		= 340;
		sT[0].sTAL[120].nIEC_NM				= 365;
		sT[0].sTAL[120].nNMNum		  		= 11;
		sT[0].sTAL[120].nKommStatusNum		= 2;

/*  82-66 OK2  -----------------------------------------------------------*/
sT[0].sTI[121].nType = TYP_TMOK;

	sT[0].sMOT[121].nIEC_SP				= 2311;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[121].nIEC_DP				= 344;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[121].nIEC_NM				= 376;		/* M�r�sek IEC kezd�c�me */
/*  82-40 OK2  -----------------------------------------------------------*/
sT[0].sTI[122].nType = TYP_TMOK;

	sT[0].sMOT[122].nIEC_SP				= 2327;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[122].nIEC_DP				= 345;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[122].nIEC_NM				= 379;		/* M�r�sek IEC kezd�c�me */
/*  82-63 OK2  -----------------------------------------------------------*/
sT[0].sTI[123].nType = TYP_TMOK;

	sT[0].sMOT[123].nIEC_SP				= 2343;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[123].nIEC_DP				= 346;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[123].nIEC_NM				= 382;		/* M�r�sek IEC kezd�c�me */
/*  82-79 OK2  -----------------------------------------------------------*/
sT[0].sTI[124].nType = TYP_TMOK;

	sT[0].sMOT[124].nIEC_SP				= 2359;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[124].nIEC_DP				= 347;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[124].nIEC_NM				= 385;		/* M�r�sek IEC kezd�c�me */
	
	
	
/*  41-08 OK2  -----------------------------------------------------------*/
sT[0].sTI[125].nType = TYP_TMOK;

	sT[0].sMOT[125].nIEC_SP				= 2375;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[125].nIEC_DP				= 348;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[125].nIEC_NM				= 388;		/* M�r�sek IEC kezd�c�me */
/*  40-55 OK2  -----------------------------------------------------------*/
sT[0].sTI[126].nType = TYP_TMOK;

	sT[0].sMOT[126].nIEC_SP				= 2391;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[126].nIEC_DP				= 349;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[126].nIEC_NM				= 391;		/* M�r�sek IEC kezd�c�me */
/*  41-23 OK2  -----------------------------------------------------------*/
sT[0].sTI[127].nType = TYP_TMOK;

	sT[0].sMOT[127].nIEC_SP				= 2407;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[127].nIEC_DP				= 350;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[127].nIEC_NM				= 394;		/* M�r�sek IEC kezd�c�me */
/*  41-28 OK2  -----------------------------------------------------------*/
sT[0].sTI[128].nType = TYP_TMOK;

	sT[0].sMOT[128].nIEC_SP				= 2423;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[128].nIEC_DP				= 351;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[128].nIEC_NM				= 397;		/* M�r�sek IEC kezd�c�me */
/*  41-68 OK2  -----------------------------------------------------------*/
sT[0].sTI[129].nType = TYP_TMOK;

	sT[0].sMOT[129].nIEC_SP				= 2439;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[129].nIEC_DP				= 352;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[129].nIEC_NM				= 400;		/* M�r�sek IEC kezd�c�me */
/*  42-63 OK2  -----------------------------------------------------------*/
sT[0].sTI[130].nType = TYP_TMOK;

	sT[0].sMOT[130].nIEC_SP				= 2455;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[130].nIEC_DP				= 353;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[130].nIEC_NM				= 403;		/* M�r�sek IEC kezd�c�me */
/*  42-66 OK2  -----------------------------------------------------------*/
sT[0].sTI[131].nType = TYP_TMOK;

	sT[0].sMOT[131].nIEC_SP				= 2471;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[131].nIEC_DP				= 354;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[131].nIEC_NM				= 406;		/* M�r�sek IEC kezd�c�me */
/*  48-500 OK2  -----------------------------------------------------------*/
sT[0].sTI[132].nType = TYP_TMOK;

	sT[0].sMOT[132].nIEC_SP				= 2487;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[132].nIEC_DP				= 355;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[132].nIEC_NM				= 409;		/* M�r�sek IEC kezd�c�me */
/*  48-523 OK2  -----------------------------------------------------------*/
sT[0].sTI[133].nType = TYP_TMOK;

	sT[0].sMOT[133].nIEC_SP				= 2503;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[133].nIEC_DP				= 356;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[133].nIEC_NM				= 412;		/* M�r�sek IEC kezd�c�me */
/*  31-01 OK2  -----------------------------------------------------------*/
sT[0].sTI[134].nType = TYP_TMOK;

	sT[0].sMOT[134].nIEC_SP				= 2519;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[134].nIEC_DP				= 357;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[134].nIEC_NM				= 415;		/* M�r�sek IEC kezd�c�me */
/*  30-26 OK2  -----------------------------------------------------------*/
sT[0].sTI[135].nType = TYP_TMOK;

	sT[0].sMOT[135].nIEC_SP				= 2535;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[135].nIEC_DP				= 358;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[135].nIEC_NM				= 418;		/* M�r�sek IEC kezd�c�me */
/*  30-79 OK2  -----------------------------------------------------------*/
sT[0].sTI[136].nType = TYP_TMOK;

	sT[0].sMOT[136].nIEC_SP				= 2551;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[136].nIEC_DP				= 359;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[136].nIEC_NM				= 421;		/* M�r�sek IEC kezd�c�me */
/*  30-93 OK2  -----------------------------------------------------------*/
sT[0].sTI[137].nType = TYP_TMOK;

	sT[0].sMOT[137].nIEC_SP				= 2567;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[137].nIEC_DP				= 360;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[137].nIEC_NM				= 424;		/* M�r�sek IEC kezd�c�me */
/*  31-96 OK2  -----------------------------------------------------------*/
sT[0].sTI[138].nType = TYP_TMOK;

	sT[0].sMOT[138].nIEC_SP				= 2583;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[138].nIEC_DP				= 361;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[138].nIEC_NM				= 427;		/* M�r�sek IEC kezd�c�me */
/*  32-19 OK2  -----------------------------------------------------------*/
sT[0].sTI[139].nType = TYP_TMOK;

	sT[0].sMOT[139].nIEC_SP				= 2599;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[139].nIEC_DP				= 362;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[139].nIEC_NM				= 430;		/* M�r�sek IEC kezd�c�me */
/*  32-14 OK2  -----------------------------------------------------------*/
sT[0].sTI[140].nType = TYP_TMOK;

	sT[0].sMOT[140].nIEC_SP				= 2615;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[140].nIEC_DP				= 363;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[140].nIEC_NM				= 433;		/* M�r�sek IEC kezd�c�me */
/*  32-27 OK2  -----------------------------------------------------------*/
sT[0].sTI[141].nType = TYP_TMOK;

	sT[0].sMOT[141].nIEC_SP				= 2631;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[141].nIEC_DP				= 364;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[141].nIEC_NM				= 436;		/* M�r�sek IEC kezd�c�me */
/*  34-11 OK2  -----------------------------------------------------------*/
sT[0].sTI[142].nType = TYP_TMOK;

	sT[0].sMOT[142].nIEC_SP				= 2647;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[142].nIEC_DP				= 365;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[142].nIEC_NM				= 439;		/* M�r�sek IEC kezd�c�me */

/*  35-19 OK2  -----------------------------------------------------------*/
sT[0].sTI[143].nType = TYP_TMOK;

	sT[0].sMOT[143].nIEC_SP				= 2663;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[143].nIEC_DP				= 366;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[143].nIEC_NM				= 442;		/* M�r�sek IEC kezd�c�me */
/*  35-62 OK2  -----------------------------------------------------------*/
sT[0].sTI[144].nType = TYP_TMOK;

	sT[0].sMOT[144].nIEC_SP				= 2679;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[144].nIEC_DP				= 367;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[144].nIEC_NM				= 445;		/* M�r�sek IEC kezd�c�me */
	
	
/*  12-16 OK2  -----------------------------------------------------------*/
sT[0].sTI[145].nType = TYP_TMOK;

	sT[0].sMOT[145].nIEC_SP				= 2695;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[145].nIEC_DP				= 368;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[145].nIEC_NM				= 448;		/* M�r�sek IEC kezd�c�me */
/*  12-37 OK2  -----------------------------------------------------------*/
sT[0].sTI[146].nType = TYP_TMOK;

	sT[0].sMOT[146].nIEC_SP				= 2711;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[146].nIEC_DP				= 369;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[146].nIEC_NM				= 451;		/* M�r�sek IEC kezd�c�me */
/*  14-45 OK2  -----------------------------------------------------------*/
sT[0].sTI[147].nType = TYP_TMOK;

	sT[0].sMOT[147].nIEC_SP				= 2727;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[147].nIEC_DP				= 370;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[147].nIEC_NM				= 454;		/* M�r�sek IEC kezd�c�me */
/*  14-48 OK2  -----------------------------------------------------------*/
sT[0].sTI[148].nType = TYP_TMOK;

	sT[0].sMOT[148].nIEC_SP				= 2743;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[148].nIEC_DP				= 371;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[148].nIEC_NM				= 457;		/* M�r�sek IEC kezd�c�me */
/*  64-76 OK2  -----------------------------------------------------------*/
sT[0].sTI[149].nType = TYP_TMOK;

	sT[0].sMOT[149].nIEC_SP				= 2759;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[149].nIEC_DP				= 372;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[149].nIEC_NM				= 460;		/* M�r�sek IEC kezd�c�me */
/*  80-10 OK2  -----------------------------------------------------------*/
sT[0].sTI[150].nType = TYP_TMOK;

	sT[0].sMOT[150].nIEC_SP				= 2775;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[150].nIEC_DP				= 373;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[150].nIEC_NM				= 463;		/* M�r�sek IEC kezd�c�me */
/*  80-15 OK2  -----------------------------------------------------------*/
sT[0].sTI[151].nType = TYP_TMOK;

	sT[0].sMOT[151].nIEC_SP				= 2791;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[151].nIEC_DP				= 374;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[151].nIEC_NM				= 466;		/* M�r�sek IEC kezd�c�me */
/*  80-73 OK2  -----------------------------------------------------------*/
sT[0].sTI[152].nType = TYP_TMOK;

	sT[0].sMOT[152].nIEC_SP				= 2807;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[152].nIEC_DP				= 375;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[152].nIEC_NM				= 469;		/* M�r�sek IEC kezd�c�me */
/*  21-36 OK2  -----------------------------------------------------------*/
sT[0].sTI[153].nType = TYP_TMOK;

	sT[0].sMOT[153].nIEC_SP				= 2823;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[153].nIEC_DP				= 376;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[153].nIEC_NM				= 472;		/* M�r�sek IEC kezd�c�me */
/*  20-20 OK2  -----------------------------------------------------------*/
sT[0].sTI[154].nType = TYP_TMOK;

	sT[0].sMOT[154].nIEC_SP				= 2839;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[154].nIEC_DP				= 377;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[154].nIEC_NM				= 475;		/* M�r�sek IEC kezd�c�me */
/*  81-62 OK2  -----------------------------------------------------------*/
sT[0].sTI[155].nType = TYP_TMOK;

	sT[0].sMOT[155].nIEC_SP				= 2855;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[155].nIEC_DP				= 378;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[155].nIEC_NM				= 481;		/* M�r�sek IEC kezd�c�me */
/*  81-48 OK2  -----------------------------------------------------------*/
sT[0].sTI[156].nType = TYP_TMOK;

	sT[0].sMOT[156].nIEC_SP				= 2871;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[156].nIEC_DP				= 379;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[156].nIEC_NM				= 484;		/* M�r�sek IEC kezd�c�me */
/*  81-60 OK2  -----------------------------------------------------------*/
sT[0].sTI[157].nType = TYP_TMOK;

	sT[0].sMOT[157].nIEC_SP				= 2887;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[157].nIEC_DP				= 380;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[157].nIEC_NM				= 487;		/* M�r�sek IEC kezd�c�me */
/*  81-04 OK2  -----------------------------------------------------------*/
sT[0].sTI[158].nType = TYP_TMOK;

	sT[0].sMOT[158].nIEC_SP				= 2903;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[158].nIEC_DP				= 381;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[158].nIEC_NM				= 490;		/* M�r�sek IEC kezd�c�me */
/*  81-46 OK2  -----------------------------------------------------------*/
sT[0].sTI[159].nType = TYP_TMOK;

	sT[0].sMOT[159].nIEC_SP				= 2919;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[159].nIEC_DP				= 382;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[159].nIEC_NM				= 493;		/* M�r�sek IEC kezd�c�me */
/*  81-91 OK2  -----------------------------------------------------------*/
sT[0].sTI[160].nType = TYP_TMOK;

	sT[0].sMOT[160].nIEC_SP				= 2935;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[160].nIEC_DP				= 383;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[160].nIEC_NM				= 496;		/* M�r�sek IEC kezd�c�me */
/*  81-96 OK2  -----------------------------------------------------------*/
sT[0].sTI[161].nType = TYP_TMOK;

	sT[0].sMOT[161].nIEC_SP				= 2951;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[161].nIEC_DP				= 384;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[161].nIEC_NM				= 499;		/* M�r�sek IEC kezd�c�me */
/*  20-34 OK2  -----------------------------------------------------------*/
sT[0].sTI[162].nType = TYP_TMOK;

	sT[0].sMOT[162].nIEC_SP				= 2967;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[162].nIEC_DP				= 385;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[162].nIEC_NM				= 502;		/* M�r�sek IEC kezd�c�me */
/*  91-03 OK2  -----------------------------------------------------------*/
sT[0].sTI[163].nType = TYP_TMOK;

	sT[0].sMOT[163].nIEC_SP				= 2983;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[163].nIEC_DP				= 386;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[163].nIEC_NM				= 505;		/* M�r�sek IEC kezd�c�me */
	
/* Szentgotth�rd, FERSINT ---------------------------------------------------------------*/
sT[0].sTI[164].nType = TYP_MOT;	
	
	sT[0].sMOT[164].nIEC_SP				= 3047;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[164].nIEC_SP_NUM			= 14;		/* Egybites �rt�kek sz�ma*/
	sT[0].sMOT[164].nIEC_DP				= 390;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[164].nIEC_DP_NUM			= 8;   		/* K�t bites �rt�kek sz�ma*/
	sT[0].sMOT[164].nIEC_NM				= 517;		/* M�r�sek IEC kezd�c�me */
	sT[0].sMOT[164].nNMNum				= 2;		/* Anal�g m�r�sek sz�ma*/
	
/*  91-68 OK2  -----------------------------------------------------------*/
sT[0].sTI[165].nType = TYP_TMOK;

	sT[0].sMOT[165].nIEC_SP				= 2999;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[165].nIEC_DP				= 387;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[165].nIEC_NM				= 508;		/* M�r�sek IEC kezd�c�me */
	
/*  91-83 OK2  -----------------------------------------------------------*/
sT[0].sTI[166].nType = TYP_TMOK;

	sT[0].sMOT[166].nIEC_SP				= 3015;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[166].nIEC_DP				= 388;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[166].nIEC_NM				= 511;		/* M�r�sek IEC kezd�c�me */
	
/*  92-08 OK2  -----------------------------------------------------------*/
sT[0].sTI[167].nType = TYP_TMOK;

	sT[0].sMOT[167].nIEC_SP				= 3031;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[167].nIEC_DP				= 389;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[167].nIEC_NM				= 514;		/* M�r�sek IEC kezd�c�me */
	
/*  30-31 OK2  -----------------------------------------------------------*/
sT[0].sTI[168].nType = TYP_TMOK;

	sT[0].sMOT[168].nIEC_SP				= 3063;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[168].nIEC_DP				= 398;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[168].nIEC_NM				= 519;		/* M�r�sek IEC kezd�c�me */

/* J�nossomorja J06, sz�leromu -----------------------------------------------------------*/
sT[0].sTI[169].nType = TYP_TAL;

		sT[0].sTAL[169].nIEC_SP       		= 3079;
		sT[0].sTAL[169].nIEC_OsszevontHiba	= 3111;
		sT[0].sTAL[169].nIEC_MT_KommHiba	= 3112;
		sT[0].sTAL[169].nIEC_DP       		= 399;
		sT[0].sTAL[169].nIEC_DP_FSZ1  		= 403;
		sT[0].sTAL[169].nIEC_NM				= 522;
		sT[0].sTAL[169].nNMNum		  		= 11;
		sT[0].sTAL[169].nKommStatusNum		= 2;

/* J�nossomorja J02-3, sz�leromu -----------------------------------------------------------*/
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
		sT[0].sTAL[170].nIEC_DP_2BIT_KINT2	= 915;
		sT[0].sTAL[170].nIEC_DP_2BIT_BENT2	= 914;
		
/* J�nossomorja J04-5, sz�leromu -----------------------------------------------------------*/
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
		sT[0].sTAL[171].nIEC_DP_2BIT_KINT2	= 915;
		sT[0].sTAL[171].nIEC_DP_2BIT_BENT2	= 914;


/*  92-49 OK2  -----------------------------------------------------------*/
sT[0].sTI[172].nType = TYP_TMOK;

	sT[0].sMOT[172].nIEC_SP				= 3190;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[172].nIEC_DP				= 427;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[172].nIEC_NM				= 555;		/* M�r�sek IEC kezd�c�me */
/*  70-33 OK2  -----------------------------------------------------------*/
sT[0].sTI[173].nType = TYP_TMOK;

	sT[0].sMOT[173].nIEC_SP				= 3206;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[173].nIEC_DP				= 428;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[173].nIEC_NM				= 558;		/* M�r�sek IEC kezd�c�me */
/*  70-42 OK2  -----------------------------------------------------------*/
sT[0].sTI[174].nType = TYP_TMOK;

	sT[0].sMOT[174].nIEC_SP				= 3222;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[174].nIEC_DP				= 429;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[174].nIEC_NM				= 561;		/* M�r�sek IEC kezd�c�me */
/*  70-44 OK2  -----------------------------------------------------------*/
sT[0].sTI[175].nType = TYP_TMOK;

	sT[0].sMOT[175].nIEC_SP				= 3238;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[175].nIEC_DP				= 430;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[175].nIEC_NM				= 564;		/* M�r�sek IEC kezd�c�me */
/*  72-63 OK2  -----------------------------------------------------------*/
sT[0].sTI[176].nType = TYP_TMOK;

	sT[0].sMOT[176].nIEC_SP				= 3254;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[176].nIEC_DP				= 431;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[176].nIEC_NM				= 567;		/* M�r�sek IEC kezd�c�me */
/*  91-20 OK2  -----------------------------------------------------------*/
sT[0].sTI[177].nType = TYP_TMOK;

	sT[0].sMOT[177].nIEC_SP				= 3270;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[177].nIEC_DP				= 432;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[177].nIEC_NM				= 570;		/* M�r�sek IEC kezd�c�me */
/*  49-438 OK2  -----------------------------------------------------------*/
sT[0].sTI[178].nType = TYP_TMOK;

	sT[0].sMOT[178].nIEC_SP				= 3286;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[178].nIEC_DP				= 433;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[178].nIEC_NM				= 573;		/* M�r�sek IEC kezd�c�me */
/*  40-68 OK2  -----------------------------------------------------------*/
sT[0].sTI[179].nType = TYP_TMOK;

	sT[0].sMOT[179].nIEC_SP				= 3302;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[179].nIEC_DP				= 434;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[179].nIEC_NM				= 576;		/* M�r�sek IEC kezd�c�me */
/*  41-09 OK2  -----------------------------------------------------------*/
sT[0].sTI[180].nType = TYP_TMOK;

	sT[0].sMOT[180].nIEC_SP				= 3318;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[180].nIEC_DP				= 435;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[180].nIEC_NM				= 579;		/* M�r�sek IEC kezd�c�me */
/*  42-29 OK2  -----------------------------------------------------------*/
sT[0].sTI[181].nType = TYP_TMOK;

	sT[0].sMOT[181].nIEC_SP				= 3334;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[181].nIEC_DP				= 436;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[181].nIEC_NM				= 582;		/* M�r�sek IEC kezd�c�me */
/*  42-50 OK2  -----------------------------------------------------------*/
sT[0].sTI[182].nType = TYP_TMOK;

	sT[0].sMOT[182].nIEC_SP				= 3350;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[182].nIEC_DP				= 437;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[182].nIEC_NM				= 585;		/* M�r�sek IEC kezd�c�me */
/*  42-96 OK2  -----------------------------------------------------------*/
sT[0].sTI[183].nType = TYP_TMOK;

	sT[0].sMOT[183].nIEC_SP				= 3366;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[183].nIEC_DP				= 438;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[183].nIEC_NM				= 588;		/* M�r�sek IEC kezd�c�me */
/*  44-15 OK2  -----------------------------------------------------------*/
sT[0].sTI[184].nType = TYP_TMOK;

	sT[0].sMOT[184].nIEC_SP				= 3382;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[184].nIEC_DP				= 439;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[184].nIEC_NM				= 591;		/* M�r�sek IEC kezd�c�me */
/*  91-21 OK2  -----------------------------------------------------------*/
sT[0].sTI[185].nType = TYP_TMOK;

	sT[0].sMOT[185].nIEC_SP				= 3398;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[185].nIEC_DP				= 440;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[185].nIEC_NM				= 594;		/* M�r�sek IEC kezd�c�me */
/*  92-51 OK2  -----------------------------------------------------------*/
sT[0].sTI[186].nType = TYP_TMOK;

	sT[0].sMOT[186].nIEC_SP				= 3414;		/* Egybites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[186].nIEC_DP				= 441;		/* K�tbites �rt�kek IEC kezd�c�me*/
	sT[0].sMOT[186].nIEC_NM				= 597;		/* M�r�sek IEC kezd�c�me */



	
} /* end fnSetDataPar()*/

