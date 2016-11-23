/****************************************************************************																			*		
* REV    	DATE     	PROGRAMMER         	REVISION HISTORY                *
* V2.1.1	2007.05.02	Gergely Zsolt		Mecser  						*
* V2.1.2	2007.05.11	Gergely Zsolt		Sárvár, Spirit Hotel			*
* V2.1.3	2007.05.23	Gergely Zsolt		Tatabánya, Szent Borbála II.	*
* V2.1.4	2007.06.11	Gergely Zsolt		Mosonszolnok, szélerõmûpark		*
* V2.1.5	2007.10.03.	Gergely Zsolt		Komárom, NOKIA OHUB				*
* V2.1.6	2007.11.19. Gergely Zsolt		20-37 NPS						*
* V2.1.7	2007.11.23. Gergely Zsolt		Szentgotthárd átjátszó			*
* V2.1.8	2008.03.26. Gergely Zsolt		Szombathely, Merkur			*
											Tatabánya, Ipari park
											42-70
											42-81
*V2.1.9		2008.04.18. Gergely Zsolt		42-70 : 2/5 -> 2/1			*
*V2.1.10	2008.06.27. Gergely Zsolt		Oroszlány: Takács B, B, 35A, 35
*V2.1.11	2008.06.27. Gergely Zsolt		Oroszlány: Takács 7, 8, 11, 33
*V2.1.12	2008.07.11. Gergely Zsolt		TMOK 21-38,21-34, Eszterházy
*V2.1.13	2008.07.17. Gergely Zsolt		Tatabánya: Hõközpont, Sárberek A
*V2.1.14	2008.07.21. Gergely Zsolt		Oroszlány: Gimnázium
*V2.1.15	2008.07.23. Gergely Zsolt		Tatabány, SCI
*V2.1.16	2008.08.13. Gergely Zsolt		82-44, 81-41, 81-92
*V2.1.16	2008.08.25. Gergely Zsolt		Jánossomorja, szélerõmû
*V2.1.17	2008.08.28. Gergely Zsolt		82-66, 82-40, 82-63, 82-79 OK2 		*	
*V2.1.18	2008.09.08. Gergely Zsolt		 OK2 		*	
*V2.1.19	2008.09.15. Gergely Zsolt		 OK2 		*	
*V2.1.20	2008.09.25. Gergely Zsolt		34-11 1/2 -> 1/9		*	
*V2.1.21	2008.10.08. Gergely Zsolt		Szentgotthárd, FERSINT		*	
*V2.1.22	2008.10.08. Gergely Zsolt		91-68, 91-83, 92-08		*	
*V2.1.23	2008.10.14. Gergely Zsolt		30-31		*	

****************************************************************************
* NAME           :  PARS_C.c                                                 *
* DESCRIPTION    :  
* PROCESS        :  
* [C] Copyright Zsolt Gergely,  2003.  All Rights Reserved                 *
*                                                                            *
* REV    DATE     PROGRAMMER         REVISION HISTORY                        *
*****************************************************************************/

#include "CAPPLIC.H"
#include <stdio.h>
/* Parameterek strukturaja */
#include "strPar.H"




/*--------------------------------------------------------------------------*/
/* Prototypes and defines                                                   */
/*--------------------------------------------------------------------------*/


extern void fnSCTblIndx(int nIECOffset, int *nSCTblIndx, int *nOffset, short **p_col_SCAct);

/**********************************************/
/* Globals                                     */
/**********************************************/
/*extern STATION_DESC_MOT		sMOT[];
extern STATION_DESC_TALUS	sTAL[];
extern STATION_TYPE_INDEX 	sTI[];*/

/*extern COM_PAR				sCP;*/
/*extern STATION_COMM_DATA	sCD[];*/
/*extern RTU_RAD				sRAD;*/
/*extern RTU_RAD_NEW			ST[0].sRAD_K1[0];
extern RTU_RAD_NEW			ST[0].sRAD_K2[0];
extern RTU_RAD_NEW			ST[0].sRAD_K3[0];*/

/*extern RTU_LIN				ST[0].sLIN[0];*/
/*extern unsigned short		nNumOfSites;*/
/*extern unsigned short		ST[0].nSiteList[];
extern unsigned short		ST[0].nLinkList[];*/
/*extern unsigned char		byComStat[];
extern int					nTotalRTU;*/
void setdat2_c(unsigned char *input);
/*--------------------------------------------------------------------------*/
/* The list of the function included in this block                          */
/*--------------------------------------------------------------------------*/
const CB_JUMPTBL user_jumptable[]=
{
   {"setd2"   , setdat2_c},  	
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
/* Statikus site tabla feltoltes												*/
/****************************************************************************/
void setdat2_c(unsigned char *input)
{
int 			nSCTblIndx;
int 			nOffset;
short			*p_col_DCAct;
short			*p_col_SCAct;
int 			nI;		
	

	TOTAL_PAR			*ST;
	
	ST = (TOTAL_PAR *)input;
	
	


/*nNumOfSites=250;*/
				
ST[0].nSiteList[0]		=5027; 	    ST[0].nLinkList[0]   	=RADIO1_1;	/* RADIO1_1 TMOK, 32-89  		SZVAR*/
ST[0].nSiteList[1]		=5010; 	    ST[0].nLinkList[1]	   	=RADIO1_1;	/* RADIO1_1 TMOK, 30-13 		SZVAR*/
ST[0].nSiteList[2]		=5011; 	    ST[0].nLinkList[2]	   	=RADIO1_1;	/* RADIO1_1 TMOK, 30-35  		SZVAR*/
ST[0].nSiteList[3]		=5012; 	    ST[0].nLinkList[3]	   	=RADIO1_1;	/* RADIO1_1 TMOK, 30-57  		SZVAR*/
ST[0].nSiteList[4]		=5013; 	    ST[0].nLinkList[4]	   	=RADIO1_1;	/* RADIO1_1 TMOK, 30-98 		SZVAR*/
ST[0].nSiteList[5]		=5014; 	    ST[0].nLinkList[5]	   	=RADIO1_1;	/* RADIO1_1 TMOK, 31-30  		SZVAR*/
ST[0].nSiteList[6]		=5015; 	    ST[0].nLinkList[6]	   	=RADIO1_1;	/* RADIO1_1 TMOK, 32-91  		SZVAR*/
ST[0].nSiteList[7]		=5016; 	    ST[0].nLinkList[7]	   	=RADIO6_2;	/* RADIO6_2 TMOK, 41-89 		IK*/
ST[0].nSiteList[8]		=5017; 	    ST[0].nLinkList[8]	   	=RADIO1_1;	/* RADIO1_1 TMOK, 30-80  		SZVAR*/ 
ST[0].nSiteList[9]		=5018; 	    ST[0].nLinkList[9]	   	=RADIO5_1;	/* RADIO5_1 TMOK, 86-57,86-38   IG*/
ST[0].nSiteList[10]		=5073; 	    ST[0].nLinkList[10]   	=RADIO5_1;	/* RADIO5_1 TMOK, 85-03			IG*/
ST[0].nSiteList[11]		=5020; 	    ST[0].nLinkList[11]   	=RADIO5_2;	/* RADIO5_2 TMOK, 80-96,80-97   IG*/
ST[0].nSiteList[12]		=5038; 	    ST[0].nLinkList[12]   	=RADIO4_2;	/* RADIO4_2 TMOK, 70-19			IK*/
ST[0].nSiteList[13]		=5022; 	    ST[0].nLinkList[13]   	=RADIO3_6;	/* RADIO3_6 TMOK, 82-14 	 	ORNY*/
ST[0].nSiteList[14]		=5023; 	    ST[0].nLinkList[14]   	=RADIO3_6;	/* RADIO3_6 TMOK, 82-67   		ORNY*/
ST[0].nSiteList[15]		=5024; 	    ST[0].nLinkList[15]   	=RADIO3_6;	/* RADIO3_6 TMOK, 82-37   		ORNY*/
ST[0].nSiteList[16]		=5025; 	    ST[0].nLinkList[16]   	=RADIO1_1;	/* RADIO1_1 TMOK, 31-54 		SZVAR*/
ST[0].nSiteList[17]		=5026; 	    ST[0].nLinkList[17]   	=RADIO1_1;	/* RADIO1_1 TMOK, 31-66  		SZVAR*/
ST[0].nSiteList[18]		=5071; 	    ST[0].nLinkList[18]   	=RADIO1_1;	/* RADIO1_1 TMOK, 35-45  		SZVAR*/
ST[0].nSiteList[19]		=5084; 	    ST[0].nLinkList[19]   	=RADIO5_1;	/* RADIO5_1 TMOK, 86-81  		IG*/
ST[0].nSiteList[20]		=5036; 	    ST[0].nLinkList[20]   	=RADIO4_4;	/* RADIO4_4 TMOK, 41-38  		IK*/
ST[0].nSiteList[21]		=5033; 	    ST[0].nLinkList[21]   	=RADIO7_1;	/* RADIO7_1 TMOK, 12-48  		MOS*/
ST[0].nSiteList[22]		=5032; 	    ST[0].nLinkList[22]   	=RADIO5_1;	/* RADIO5_1 TMOK, 85-24  		IG*/
ST[0].nSiteList[23]		=5029; 	    ST[0].nLinkList[23]   	=RADIO7_1;	/* RADIO7_1 TMOK, 14-20  		MOS*/
ST[0].nSiteList[24]		=5060; 	    ST[0].nLinkList[24]   	=RADIO1_8;	/* RADIO1_8 TMOK, 32-36  ZE		SZVAR*/
ST[0].nSiteList[25]		=5034; 	    ST[0].nLinkList[25]   	=RADIO6_1;	/* RADIO6_1 TMOK, 40-85  ZE		SZOM*/
ST[0].nSiteList[26]		=5070; 	    ST[0].nLinkList[26]   	=RADIO1_1;	/* RADIO1_1 TMOK, 30-44  ZE		SZVAR*/
ST[0].nSiteList[27]		=5074; 	    ST[0].nLinkList[27]   	=RADIO5_1;	/* RADIO5_1 TMOK, 85-46  		IG*/
ST[0].nSiteList[28]		=5044; 	    ST[0].nLinkList[28]   	=RADIO2_1;	/* RADIO2_1 TMOK, 92-57  ZE		ZALA*/
ST[0].nSiteList[29]		=5061; 	    ST[0].nLinkList[29]    	=RADIO1_1;	/* RADIO1_1 TMOK, 31_03  ZE		SZVAR*/
ST[0].nSiteList[30]		=5086; 	    ST[0].nLinkList[30]   	=RADIO6_1;	/* RADIO6_1 TMOK, 40-57  		SZOM*/
ST[0].nSiteList[31]		=5057; 	    ST[0].nLinkList[31]   	=RADIO1_8;	/* RADIO1_8 TMOK, 32-17  		SZVAR*/
ST[0].nSiteList[32]		=5078; 	    ST[0].nLinkList[32]   	=RADIO2_7;	/* RADIO2_7 TMOK, 92-65  		ZALA*/
ST[0].nSiteList[33]		=5058; 	    ST[0].nLinkList[33]   	=RADIO1_8;	/* RADIO1_8 TMOK, 32-61  		SZVAR*/
ST[0].nSiteList[34]		=5079; 	    ST[0].nLinkList[34]   	=RADIO2_7;	/* RADIO2_7 TMOK, 92-68  		ZALA*/
ST[0].nSiteList[35]		=5059; 	    ST[0].nLinkList[35]   	=RADIO1_8;	/* RADIO1_8 TMOK, 32-25  		SZVAR*/
ST[0].nSiteList[36]		=5064; 	    ST[0].nLinkList[36]   	=RADIO1_4;	/* RADIO1_4 TMOK, 52-15  		SZVAR*/
ST[0].nSiteList[37]		=5030; 	    ST[0].nLinkList[37]   	=RADIO7_1;	/* RADIO7_1 TMOK, 14-99  		MOS*/
ST[0].nSiteList[38]		=5067; 	    ST[0].nLinkList[38]   	=RADIO1_8;	/* RADIO1_8 TMOK, 32-24  		SZVAR*/
ST[0].nSiteList[39]		=5072; 	    ST[0].nLinkList[39]   	=RADIO1_4;	/* RADIO1_4 TMOK, 37-199  		SZVAR*/
ST[0].nSiteList[40]		=5031; 	    ST[0].nLinkList[40]   	=RADIO7_1;	/* RADIO7_1 TMOK, 15-20  		MOS*/
ST[0].nSiteList[41]		=5041; 	    ST[0].nLinkList[41]   	=RADIO4_2;	/* RADIO4_2 TMOK, 70-46  		IK*/
ST[0].nSiteList[42]		=5049; 	    ST[0].nLinkList[42]   	=RADIO5_9;	/* RADIO5_9 TMOK, 21-39  		IG*/
ST[0].nSiteList[43]		=5039; 	    ST[0].nLinkList[43]   	=RADIO4_2;	/* RADIO4_2 TMOK, 70-27  		IK*/
ST[0].nSiteList[44]		=5042; 	    ST[0].nLinkList[44]   	=RADIO4_1;	/* RADIO4_1 TMOK, 90-82 		IK*/
ST[0].nSiteList[45]		=5081; 	    ST[0].nLinkList[45]   	=RADIO5_1;	/* RADIO5_1 TMOK, 81-19 		IG*/
ST[0].nSiteList[46]		=5069; 	    ST[0].nLinkList[46]   	=RADIO1_4;	/* RADIO1_4 TMOK, 52-23 		SZVAR*/
ST[0].nSiteList[47]		=5087; 	    ST[0].nLinkList[47]   	=RADIO5_1;	/* RADIO5_1 TMOK, 86-45 		IG*/
ST[0].nSiteList[48]		=5051; 	    ST[0].nLinkList[48]   	=RADIO3_6;	/* RADIO3_6 TMOK, 81-01 		ORNY*/
ST[0].nSiteList[49]		=5053; 	    ST[0].nLinkList[49]   	=RADIO5_3;	/* RADIO5_3 TMOK, 81-31 		IG*/
ST[0].nSiteList[50]		=5045; 	    ST[0].nLinkList[50]   	=RADIO2_7;	/* RADIO2_7 TMOK, 92-85 		ZALA*/
ST[0].nSiteList[51]		=5043; 	    ST[0].nLinkList[51]   	=RADIO2_6;	/* RADIO2_6 TMOK, 91-30 		ZALA*/
ST[0].nSiteList[52]		=5088; 	    ST[0].nLinkList[52]   	=RADIO1_1;	/* RADIO1_1 TMOK, 31-15 		SZVAR*/
ST[0].nSiteList[53]		=5052; 	    ST[0].nLinkList[53]   	=RADIO5_3;	/* RADIO5_3 TMOK, 81-10 		IG*/
ST[0].nSiteList[54]		=5089; 	    ST[0].nLinkList[54]   	=RADIO4_1;	/* RADIO4_1 TMOK, 90-90 		IK*/
ST[0].nSiteList[55]		=5090; 	    ST[0].nLinkList[55]   	=RADIO2_7;	/* RADIO2_7 TMOK, 92-96 		ZALA*/
ST[0].nSiteList[56]		=5063; 	    ST[0].nLinkList[56]   	=RADIO1_1;	/* RADIO1_1 TMOK, 34-18 		SZVAR*/
ST[0].nSiteList[57]		=5035; 	    ST[0].nLinkList[57]   	=RADIO6_1;	/* RADIO6_1 TMOK, 40-98 		SZOM*/
ST[0].nSiteList[58]		=5065; 	    ST[0].nLinkList[58]   	=RADIO1_8;	/* RADIO1_8 TMOK, 35-11 		SZVAR*/
ST[0].nSiteList[59]		=5040; 	    ST[0].nLinkList[59]   	=RADIO4_2;	/* RADIO4_2 TMOK, 70-29 		IK*/
ST[0].nSiteList[60]		=5050; 	    ST[0].nLinkList[60]   	=RADIO3_6;	/* RADIO3_6 TMOK, 80-49 		OR*/
ST[0].nSiteList[61]		=5091; 	    ST[0].nLinkList[61]   	=RADIO4_2;	/* RADIO4_2 TMOK, 72-33 		IK*/
ST[0].nSiteList[62]		=5093; 	    ST[0].nLinkList[62]   	=RADIO4_2;	/* RADIO4_2 TMOK, 71-39 		IK*/
ST[0].nSiteList[63]		=5062; 	    ST[0].nLinkList[63]   	=RADIO1_1;	/* RADIO1_1 TMOK, 32-88 		SZVAR*/
ST[0].nSiteList[64]		=5068; 	    ST[0].nLinkList[64]   	=RADIO1_1;	/* RADIO1_1 TMOK, 31-25 		SZVAR*/
ST[0].nSiteList[65]		=5054; 	    ST[0].nLinkList[65]   	=RADIO1_9;	/* RADIO1_9 TMOK, 71-70 		SZVAR*/
ST[0].nSiteList[66]		=5048; 	    ST[0].nLinkList[66]   	=RADIO5_3;	/* RADIO5_3 TMOK, 21-37 		IG*/
ST[0].nSiteList[67]		=5056; 	    ST[0].nLinkList[67]   	=RADIO1_5;	/* RADIO1_5 TMOK, 54-24 		SZVAR*/
ST[0].nSiteList[68]		=5083; 	    ST[0].nLinkList[68]   	=RADIO5_3;	/* RADIO5_3 TMOK, 20-16 		IG*/
ST[0].nSiteList[69]		=5055; 	    ST[0].nLinkList[69]   	=RADIO1_4;	/* RADIO1_4 TMOK, 54-33 		SZVAR*/
ST[0].nSiteList[70]		=5094; 	    ST[0].nLinkList[70]   	=RADIO4_1;	/* RADIO4_1 Sárvár, Vadkert2	IK*/
ST[0].nSiteList[71]		=5095; 	    ST[0].nLinkList[71]   	=RADIO4_1;	/* RADIO4_1 Sárvár, Termál Hot.	IK*/
ST[0].nSiteList[72]		=5096; 	    ST[0].nLinkList[72]   	=RADIO1_1;	/* RADIO1_1 TMOK  34-04			SZVAR*/
ST[0].nSiteList[73]		=5097; 	    ST[0].nLinkList[73]   	=RADIO6_1;	/* RADIO6_1 Szhely, 11-es Huszar uti gazmotor SZOM*/
ST[0].nSiteList[74]		=5098; 	    ST[0].nLinkList[74]   	=RADIO4_1;	/* RADIO4_1 Ostffyasszonyfa		IK*/
ST[0].nSiteList[75]		=5101; 	    ST[0].nLinkList[75]   	=RADIO1_1;	/* RADIO1_1 Kisvelence			SZVAR */
ST[0].nSiteList[76]		=5099; 	    ST[0].nLinkList[76]   	=RADIO3_6;	/* RADIO5_2 Tatabánya, Szõlõs	IG */
ST[0].nSiteList[77]		=5100; 	    ST[0].nLinkList[77]   	=RADIO3_7;	/* RADIO5_2 Tatabánya, Óváros	IG */
ST[0].nSiteList[78]		=3163; 	    ST[0].nLinkList[78]   	=RADIO1_4;	/* RADIO1_4 TMOK, 52-50			SZVAR */
ST[0].nSiteList[79]		=5102; 	    ST[0].nLinkList[79]   	=RADIO1_1;	/* RADIO1_1 Szvar, Feherpalota	SZVAR */
ST[0].nSiteList[80]		=314; 	    ST[0].nLinkList[80]   	=RADIO3_7;	/* RADIO3_7 Tatabánya, Szent Borbála gázmotor ORNY */
ST[0].nSiteList[81]		=5103; 	    ST[0].nLinkList[81]   	=RADIO3_7;	/* RADIO3_7 Tatabánya, Vértes center ORNY */
ST[0].nSiteList[82]		=5105; 	    ST[0].nLinkList[82]   	=RADIO7_1;	/* RADIO7_1 TMOK, 11-23				MOS */
ST[0].nSiteList[83]		=5106; 	    ST[0].nLinkList[83]   	=RADIO7_1;	/* RADIO7_1 TMOK, 11-27				MOS */
ST[0].nSiteList[84]		=5104; 	    ST[0].nLinkList[84]   	=RADIO7_1;	/* RADIO7_1 Mecser, TALUS 			MOS */
ST[0].nSiteList[85]		=5107; 	    ST[0].nLinkList[85]   	=RADIO4_1;	/* RADIO4_1 Sárvár Spirit Hotel		IK */
ST[0].nSiteList[86]		=5108; 	    ST[0].nLinkList[86]   	=RADIO7_1;	/* RADIO7_1 Mosonszolnok, szélerõmû	MOS */
ST[0].nSiteList[87]		=5109; 		ST[0].nLinkList[87]		=RADIO6_1; 	/*Szombathely, szennyviztelep 1. rész, 	SZOM*/
ST[0].nSiteList[88]		=5109; 		ST[0].nLinkList[88]		=RADIO6_1; 	/*Szombathely, szennyviztelep 2. rész, 	SZOM*/
ST[0].nSiteList[89]		=5110; 		ST[0].nLinkList[89]		=RADIO5_1; 	/*Komárom, OHUB, 					IG*/
ST[0].nSiteList[90]		=5111; 		ST[0].nLinkList[90]		=RADIO5_3; 	/*RADIO5_3 TMOK 20-37 				IG*/
ST[0].nSiteList[91]		=5112; 		ST[0].nLinkList[91]		=RADIO2_1;	/* RADIO2_1 Szentgotthárd átj		ZEG*/
ST[0].nSiteList[92]		=5118; 		ST[0].nLinkList[92]		=RADIO2_1;	/* RADIO2_1 TMOK 42-56				ZEG*/
ST[0].nSiteList[93]		=5119; 		ST[0].nLinkList[93]		=RADIO2_5;	/* RADIO2_5 TMOK 43-25				ZEG*/
ST[0].nSiteList[94]		=5120; 		ST[0].nLinkList[94]		=RADIO1_8;	/* RADIO1_8 TMOK 34-35				SZVAR*/
ST[0].nSiteList[95]		=5116; 		ST[0].nLinkList[95]		=RADIO1_2;	/* RADIO1_2 Mór, Hammerstein 		SZVAR*/
ST[0].nSiteList[96]		=5117; 		ST[0].nLinkList[96]		=RADIO4_2;	/* RADIO4_2 Nick, vizieromu 		IK*/
ST[0].nSiteList[97]		=5113; 		ST[0].nLinkList[97]		=RADIO2_1;	/* RADIO2_5 TMOK 42-65				ZEG*/
ST[0].nSiteList[98]		=5122; 		ST[0].nLinkList[98]		=RADIO6_1;	/* RADIO6_1 Szombathely, Merkur		SZOM*/
ST[0].nSiteList[99]		=5121; 		ST[0].nLinkList[99]		=RADIO3_7;	/* RADIO3_7 Tatabánya, Ipari Park	OR*/
ST[0].nSiteList[100]	=5115; 		ST[0].nLinkList[100]	=RADIO2_1;	/* RADIO2_5 TMOK 42-70				ZEG*/
ST[0].nSiteList[101]	=5114; 		ST[0].nLinkList[101]	=RADIO2_5;	/* RADIO2_5 TMOK 42-81				ZEG*/
ST[0].nSiteList[102]	=5123; 		ST[0].nLinkList[102]	=RADIO3_6;	/* RADIO3_6 Takács B				ORNY*/
ST[0].nSiteList[103]	=5124; 		ST[0].nLinkList[103]	=RADIO3_6;	/* RADIO3_6  B						ORNY*/
ST[0].nSiteList[104]	=5125; 		ST[0].nLinkList[104]	=RADIO3_6;	/* RADIO3_6  35A					ORNY*/
ST[0].nSiteList[105]	=5126; 		ST[0].nLinkList[105]	=RADIO3_6;	/* RADIO3_6  35						ORNY*/
ST[0].nSiteList[106]	=5127; 		ST[0].nLinkList[106]	=RADIO3_6;	/* RADIO3_6  14						ORNY*/
ST[0].nSiteList[107]	=5129; 		ST[0].nLinkList[107]	=RADIO3_6;	/* RADIO3_6  7						ORNY*/
ST[0].nSiteList[108]	=5128; 		ST[0].nLinkList[108]	=RADIO3_6;	/* RADIO3_6  8						ORNY*/
ST[0].nSiteList[109]	=5130; 		ST[0].nLinkList[109]	=RADIO3_6;	/* RADIO3_6  11						ORNY*/
ST[0].nSiteList[110]	=5131; 		ST[0].nLinkList[110]	=RADIO3_6;	/* RADIO3_6  33						ORNY*/
ST[0].nSiteList[111]	=5135; 		ST[0].nLinkList[111]	=RADIO5_3;	/* RADIO5_3  TMOK 21-34, 21-38 NPS-RTU-NPS				IG*/
ST[0].nSiteList[112]	=5132; 		ST[0].nLinkList[112]	=RADIO3_6;	/* RADIO3_6  Eszterházy				ORNY*/
ST[0].nSiteList[113]	=5142; 		ST[0].nLinkList[113]	=RADIO3_6;	/* RADIO3_6  82-44 NPS					ORNY*/
ST[0].nSiteList[114]	=5136; 		ST[0].nLinkList[114]	=RADIO3_7;	/* RADIO3_7  Tatabánya, Hõközpont		ORNY*/
ST[0].nSiteList[115]	=5137; 		ST[0].nLinkList[115]	=RADIO3_7;	/* RADIO3_7  Tatabánya, Sárberek A		ORNY*/
ST[0].nSiteList[116]	=5138; 		ST[0].nLinkList[116]	=RADIO3_6;	/* RADIO3_6  Oroszlány, Gimnázium		ORNY*/
ST[0].nSiteList[117]	=5139; 		ST[0].nLinkList[117]	=RADIO3_7;	/* RADIO3_7  Tatabánya, SCI			ORNY*/
ST[0].nSiteList[118]	=5141; 		ST[0].nLinkList[118]	=RADIO5_1;	/* RADIO5_1  81-92					IG*/
ST[0].nSiteList[119]	=5140; 		ST[0].nLinkList[119]	=RADIO5_3;	/* RADIO5_3  81-41					IG*/
ST[0].nSiteList[120]	=5143; 		ST[0].nLinkList[120]	=RADIO7_1;	/* RADIO7_1  Jánossomorja			MOS*/
ST[0].nSiteList[121]	=5146; 		ST[0].nLinkList[121]	=RADIO3_6;	/* RADIO3_6  82-66					ORNY*/
ST[0].nSiteList[122]	=5144; 		ST[0].nLinkList[122]	=RADIO3_6;	/* RADIO3_6  82-40					ORNY*/
ST[0].nSiteList[123]	=5145; 		ST[0].nLinkList[123]	=RADIO3_6;	/* RADIO3_6  82-63					ORNY*/
ST[0].nSiteList[124]	=5147; 		ST[0].nLinkList[124]	=RADIO3_6;	/* RADIO3_6  82-79					ORNY*/

ST[0].nSiteList[125]	=5168; 		ST[0].nLinkList[125]	=RADIO4_1;	/* RADIO4_1  tartalék					ORNY*/
ST[0].nSiteList[126]	=5169; 		ST[0].nLinkList[126]	=RADIO6_1;	/* RADIO6_1  40-55					SZOM*/
ST[0].nSiteList[127]	=5170; 		ST[0].nLinkList[127]	=RADIO4_1;	/* RADIO4_1  41-23					IK*/
ST[0].nSiteList[128]	=5171; 		ST[0].nLinkList[128]	=RADIO4_1;	/* RADIO4_1  41-28					IK*/
ST[0].nSiteList[129]	=5172; 		ST[0].nLinkList[129]	=RADIO6_1;	/* RADIO6_1  41-68					SZOM*/
ST[0].nSiteList[130]	=5173; 		ST[0].nLinkList[130]	=RADIO2_5;	/* RADIO2_5  42-63					ZALA*/
ST[0].nSiteList[131]	=5174; 		ST[0].nLinkList[131]	=RADIO2_1;	/* RADIO2_1  42-66					ZALA*/
ST[0].nSiteList[132]	=5175; 		ST[0].nLinkList[132]	=RADIO6_1;	/* RADIO6_1  48-500					IK*/
ST[0].nSiteList[133]	=5176; 		ST[0].nLinkList[133]	=RADIO4_2;	/* RADIO4_2  48-523					IK*/
ST[0].nSiteList[134]	=5177; 		ST[0].nLinkList[134]	=RADIO1_1;	/* RADIO1_1  31-01					SZVAR*/
ST[0].nSiteList[135]	=5178; 		ST[0].nLinkList[135]	=RADIO1_1;	/* RADIO1_1  30-26					SZVAR*/
ST[0].nSiteList[136]	=5179; 		ST[0].nLinkList[136]	=RADIO1_1;	/* RADIO1_1  30-79					SZVAR*/
ST[0].nSiteList[137]	=5180; 		ST[0].nLinkList[137]	=RADIO1_1;	/* RADIO1_1  30-93					SZVAR*/
ST[0].nSiteList[138]	=5181; 		ST[0].nLinkList[138]	=RADIO1_2;	/* RADIO1_2  31-96					SZVAR*/
ST[0].nSiteList[139]	=5182; 		ST[0].nLinkList[139]	=RADIO1_8;	/* RADIO1_8  32-19					SZVAR*/
ST[0].nSiteList[140]	=5183; 		ST[0].nLinkList[140]	=RADIO1_8;	/* RADIO1_8  32-14					SZVAR*/
ST[0].nSiteList[141]	=5184; 		ST[0].nLinkList[141]	=RADIO1_8;	/* RADIO1_8  32-27					SZVAR*/
ST[0].nSiteList[142]	=5185; 		ST[0].nLinkList[142]	=RADIO1_9;	/* RADIO1_2  34-11					SZVAR*/
ST[0].nSiteList[143]	=5186; 		ST[0].nLinkList[143]	=RADIO1_1;	/* RADIO1_1  35-19					SZVAR*/
ST[0].nSiteList[144]	=5187; 		ST[0].nLinkList[144]	=RADIO1_1;	/* RADIO1_1  35-62					SZVAR*/
ST[0].nSiteList[145]	=5151; 		ST[0].nLinkList[145]	=RADIO7_1;	/* RADIO7_1  12-16					MOS*/
ST[0].nSiteList[146]	=5152; 		ST[0].nLinkList[146]	=RADIO7_1;	/* RADIO7_1  12-37					MOS*/
ST[0].nSiteList[147]	=5153; 		ST[0].nLinkList[147]	=RADIO7_1;	/* RADIO7_1  14-45					MOS*/
ST[0].nSiteList[148]	=5154; 		ST[0].nLinkList[148]	=RADIO7_1;	/* RADIO7_1  14-48					MOS*/
ST[0].nSiteList[149]	=5155; 		ST[0].nLinkList[149]	=RADIO4_1;	/* RADIO4_1  64-76					IK*/
ST[0].nSiteList[150]	=5188; 		ST[0].nLinkList[150]	=RADIO3_7;	/* RADIO3_7  80-10					ORNY*/
ST[0].nSiteList[151]	=5189; 		ST[0].nLinkList[151]	=RADIO3_7;	/* RADIO3_7  80-15					ORNY*/
ST[0].nSiteList[152]	=5190; 		ST[0].nLinkList[152]	=RADIO3_7;	/* RADIO3_7  80-73					ORNY*/
ST[0].nSiteList[153]	=5191; 		ST[0].nLinkList[153]	=RADIO5_3;	/* RADIO5_3  21-36					IG*/
ST[0].nSiteList[154]	=5192; 		ST[0].nLinkList[154]	=RADIO5_3;	/* RADIO5_3  20-20					IG*/
ST[0].nSiteList[155]	=5193; 		ST[0].nLinkList[155]	=RADIO5_2;	/* RADIO5_3  81-62					IG*/
ST[0].nSiteList[156]	=5194; 		ST[0].nLinkList[156]	=RADIO5_2;	/* RADIO5_2  81-48					IG*/
ST[0].nSiteList[157]	=5195; 		ST[0].nLinkList[157]	=RADIO5_2;	/* RADIO5_2  81-60					IG*/
ST[0].nSiteList[158]	=5196; 		ST[0].nLinkList[158]	=RADIO5_2;	/* RADIO5_2  81-04					IG*/
ST[0].nSiteList[159]	=5197; 		ST[0].nLinkList[159]	=RADIO5_2;	/* RADIO5_2  81-46					IG*/
ST[0].nSiteList[160]	=5198; 		ST[0].nLinkList[160]	=RADIO5_1;	/* RADIO5_1  81-91					IG*/
ST[0].nSiteList[161]	=5199; 		ST[0].nLinkList[161]	=RADIO5_1;	/* RADIO5_1  81-96					IG*/
ST[0].nSiteList[162]	=5200; 		ST[0].nLinkList[162]	=RADIO5_3;	/* RADIO5_3  20-34					IG*/
ST[0].nSiteList[163]	=5201; 		ST[0].nLinkList[163]	=RADIO2_7;	/* RADIO2_7  91-03					ZALA*/
ST[0].nSiteList[164]	=5202; 		ST[0].nLinkList[164]	=RADIO2_5;	/* RADIO2_5  Szentgotthárd, FERSINT	ZALA*/
ST[0].nSiteList[165]	=5203; 		ST[0].nLinkList[165]	=RADIO2_6;	/* RADIO2_6  91-68					ZALA*/
ST[0].nSiteList[166]	=5204; 		ST[0].nLinkList[166]	=RADIO2_6;	/* RADIO2_6  91-83					ZALA*/
ST[0].nSiteList[167]	=5205; 		ST[0].nLinkList[167]	=RADIO2_6;	/* RADIO2_6  92-08					ZALA*/
ST[0].nSiteList[168]	=5158; 		ST[0].nLinkList[168]	=RADIO1_1;	/* RADIO1_1  30-31					SZVAR*/

ST[0].nSiteList[169]	=5148; 		ST[0].nLinkList[169]	=RADIO7_1;	/* RADIO7_1  Jánossom. J06			MOS*/
ST[0].nSiteList[170]	=5149; 		ST[0].nLinkList[170]	=RADIO7_1;	/* RADIO7_1  Jánossom. J02-3		MOS*/
ST[0].nSiteList[171]	=5150; 		ST[0].nLinkList[171]	=RADIO7_1;	/* RADIO7_1  Jánossom. J04-5		MOS*/

ST[0].nSiteList[172]	=5206; 		ST[0].nLinkList[172]	=RADIO2_8;	/* RADIO2_8  92-49					ZEG*/
ST[0].nSiteList[173]	=5207; 		ST[0].nLinkList[173]	=RADIO4_2;	/* RADIO4_2  70-33					IK*/
ST[0].nSiteList[174]	=5208; 		ST[0].nLinkList[174]	=RADIO4_2;	/* RADIO4_2  70-42					IK*/
ST[0].nSiteList[175]	=5209; 		ST[0].nLinkList[175]	=RADIO4_1;	/* RADIO4_1  70-44					IK*/
ST[0].nSiteList[176]	=5210; 		ST[0].nLinkList[176]	=RADIO4_2;	/* RADIO4_2  72-63					IK*/
ST[0].nSiteList[177]	=5211; 		ST[0].nLinkList[177]	=RADIO2_6;	/* RADIO2_6  91-20					ZEG*/
ST[0].nSiteList[178]	=5212; 		ST[0].nLinkList[178]	=RADIO2_1;	/* RADIO2_1  49-438					ZEG*/
ST[0].nSiteList[179]	=5213; 		ST[0].nLinkList[179]	=RADIO6_1;	/* RADIO6_1  40-68					SZOM*/
ST[0].nSiteList[180]	=5214; 		ST[0].nLinkList[180]	=RADIO4_1;	/* RADIO4_1  41-09					IK*/
ST[0].nSiteList[181]	=5215; 		ST[0].nLinkList[181]	=RADIO2_6;	/* RADIO2_6  42-29					ZEG*/
ST[0].nSiteList[182]	=5216; 		ST[0].nLinkList[182]	=RADIO2_5;	/* RADIO2_5  42-50					ZEG*/
ST[0].nSiteList[183]	=5217; 		ST[0].nLinkList[183]	=RADIO2_1;	/* RADIO2_1  42-96					ZEG*/
ST[0].nSiteList[184]	=5218; 		ST[0].nLinkList[184]	=RADIO4_1;	/* RADIO4_1  44-15					IK*/
ST[0].nSiteList[185]	=5219; 		ST[0].nLinkList[185]	=RADIO2_6;	/* RADIO2_6  91-21					ZEG*/
ST[0].nSiteList[186]	=5220; 		ST[0].nLinkList[186]	=RADIO2_8;	/* RADIO2_8  92-51					ZEG*/


ST[0].nSiteList[249]=0; 		ST[0].nLinkList[249]	=ALL_LINK;	/* RTUALL */







/*for (nI=0;nI<MAX_RTU;nI++)
{
	byComStat[nI] = 0;
}


   MOSCAD_set_sitetable(nNumOfSites,ST[0].nSiteList,ST[0].nLinkList,byComStat);*/




/****************************************************************************/
/* Dinamikus site tabla feltoltese											*/
/****************************************************************************/

	
/*-------------------------------*/
/* Clear the dynamic site table. */
/*-------------------------------*/
MOSCAD_init_sitetable(); 
/* 250--------------------------------------------------------------------------259*/
/* 250 Komarom, Hansaprint			IG			*/ MOSCAD_add_new_site(301,RADIO5_8);		
/* 251 85-00,85-83					IG			*/ MOSCAD_add_new_site(302,RADIO5_1);
/* 252 12-14						MOS			*/ MOSCAD_add_new_site(303,RADIO7_1);
/* 253 30-23						SZVAR		*/ MOSCAD_add_new_site(304,RADIO1_1);
/* 254 11-10						MOS			*/ MOSCAD_add_new_site(305,RADIO7_1);
/* 255 */ MOSCAD_add_new_site(315,RADIO6_1);
/* 256 */ MOSCAD_add_new_site(316,RADIO6_1);
/* 257 */ MOSCAD_add_new_site(317,RADIO6_1);
/* 258 */ MOSCAD_add_new_site(318,RADIO6_1);
/* 259 */ MOSCAD_add_new_site(319,RADIO6_1);
/* 260--------------------------------------269*/
/* 260 */ MOSCAD_add_new_site(320,RADIO6_1);
/* 261 */ MOSCAD_add_new_site(321,RADIO6_1);
/* 262 */ MOSCAD_add_new_site(322,RADIO6_1);
/* 263 */ MOSCAD_add_new_site(323,RADIO6_1);
/* 264 */ MOSCAD_add_new_site(324,RADIO6_1);
/* 265 */ MOSCAD_add_new_site(325,RADIO6_1);
/* 266 */ MOSCAD_add_new_site(326,RADIO6_1);
/* 267 */ MOSCAD_add_new_site(327,RADIO6_1);
/* 268 */ MOSCAD_add_new_site(328,RADIO6_1);
/* 269 */ MOSCAD_add_new_site(329,RADIO6_1);
/* 270--------------------------------------279*/
/* 270 */ MOSCAD_add_new_site(330,RADIO6_1);
/* 271 */ MOSCAD_add_new_site(331,RADIO6_1);
/* 272 */ MOSCAD_add_new_site(332,RADIO6_1);
/* 273 */ MOSCAD_add_new_site(333,RADIO6_1);
/* 274 */ MOSCAD_add_new_site(334,RADIO6_1);
/* 275 */ MOSCAD_add_new_site(335,RADIO6_1);
/* 276 */ MOSCAD_add_new_site(336,RADIO6_1);
/* 277 */ MOSCAD_add_new_site(337,RADIO6_1);
/* 278 */ MOSCAD_add_new_site(338,RADIO6_1);
/* 279 */ MOSCAD_add_new_site(339,RADIO6_1);
/* 280--------------------------------------289*/
/* 280 */ MOSCAD_add_new_site(340,RADIO6_1);
/* 281 */ MOSCAD_add_new_site(341,RADIO6_1);
/* 282 */ MOSCAD_add_new_site(342,RADIO6_1);
/* 283 */ MOSCAD_add_new_site(343,RADIO6_1);
/* 284 */ MOSCAD_add_new_site(344,RADIO6_1);
/* 285 */ MOSCAD_add_new_site(345,RADIO6_1);
/* 286 */ MOSCAD_add_new_site(346,RADIO6_1);
/* 287 */ MOSCAD_add_new_site(347,RADIO6_1);
/* 288 */ MOSCAD_add_new_site(348,RADIO6_1);
/* 289 */ MOSCAD_add_new_site(349,RADIO6_1);
/* 290--------------------------------------299*/
/* 290 */ MOSCAD_add_new_site(350,RADIO6_1);
/* 291 */ MOSCAD_add_new_site(351,RADIO6_1);
/* 292 */ MOSCAD_add_new_site(352,RADIO6_1);
/* 293 */ MOSCAD_add_new_site(353,RADIO6_1);
/* 294 */ MOSCAD_add_new_site(354,RADIO6_1);
/* 295 */ MOSCAD_add_new_site(355,RADIO6_1);
/* 296 */ MOSCAD_add_new_site(356,RADIO6_1);
/* 297 */ MOSCAD_add_new_site(357,RADIO6_1);
/* 298 */ MOSCAD_add_new_site(358,RADIO6_1);
/* 299 */ MOSCAD_add_new_site(359,RADIO6_1);
/* 300--------------------------------------309*/
/* 300 */ MOSCAD_add_new_site(360,RADIO6_1);
/* 301 */ MOSCAD_add_new_site(361,RADIO6_1);
/* 302 */ MOSCAD_add_new_site(362,RADIO6_1);
/* 303 */ MOSCAD_add_new_site(363,RADIO6_1);
/* 304 */ MOSCAD_add_new_site(364,RADIO6_1);
/* 305 */ MOSCAD_add_new_site(365,RADIO6_1);
/* 306 */ MOSCAD_add_new_site(406,RADIO6_1);
/* 307 */ MOSCAD_add_new_site(407,RADIO6_1);
/* 308 */ MOSCAD_add_new_site(408,RADIO6_1);
/* 309 */ MOSCAD_add_new_site(409,RADIO6_1);
/* 310--------------------------------------319*/
/* 310 */ MOSCAD_add_new_site(410,RADIO6_1);
/* 311 */ MOSCAD_add_new_site(411,RADIO6_1);
/* 312 */ MOSCAD_add_new_site(412,RADIO6_1);
/* 313 */ MOSCAD_add_new_site(413,RADIO6_1);
/* 314 */ MOSCAD_add_new_site(414,RADIO6_1);
/* 315 */ MOSCAD_add_new_site(415,RADIO6_1);
/* 316 */ MOSCAD_add_new_site(416,RADIO6_1);
/* 317 */ MOSCAD_add_new_site(417,RADIO6_1);
/* 318 */ MOSCAD_add_new_site(418,RADIO6_1);
/* 319 */ MOSCAD_add_new_site(419,RADIO6_1);
	



/****************************************************************************/
/* Parancskuldes parameterei      											*/
/****************************************************************************/

/*int		nI;
int 			nSCTblIndx;
int 			nOffset;
short			*p_col_DCAct;
short			*p_col_SCAct;*/
	
	

/* IEC cimnek megfelelo RTU cimek -----------------------------------------------------------------------*/
/* Ha valamelyik darabszam = 0, akkor olyan tipusu parancs nem tartozik az RTU-hoz */
        	
         	





/*Nyugta inicializalas*/

/*for (nI=0;nI<sCP.nRtuNum && nI<MAX_RTU;nI++)
{
	if (sCP.sCPR[nI].nAckNum>0)
		{
 		fnSCTblIndx(sCP.sCPR[nI].nAckStart, &nSCTblIndx, &nOffset, &p_col_SCAct);

		p_col_SCAct[sCP.sCPR[nI].nAckStart-nOffset] = 1;
		}
}*/


/* Radios RTU-k indexei, periodikus lekerdezes miatt*/
/* K1 : ZEG, IK */
ST[0].sRAD_K1[0].nRtuNumRad = 50;
ST[0].sRAD_K1[0].nIndx[0]=7; 
ST[0].sRAD_K1[0].nIndx[1]=12; 
ST[0].sRAD_K1[0].nIndx[2]=20; 
ST[0].sRAD_K1[0].nIndx[3]=28; 
ST[0].sRAD_K1[0].nIndx[4]=32; 
ST[0].sRAD_K1[0].nIndx[5]=34; 
ST[0].sRAD_K1[0].nIndx[6]=41; 
ST[0].sRAD_K1[0].nIndx[7]=43; 
ST[0].sRAD_K1[0].nIndx[8]=43; 
ST[0].sRAD_K1[0].nIndx[9]=50; 
ST[0].sRAD_K1[0].nIndx[10]=51; 
ST[0].sRAD_K1[0].nIndx[11]=53; 
ST[0].sRAD_K1[0].nIndx[12]=53; 
ST[0].sRAD_K1[0].nIndx[13]=55; 
ST[0].sRAD_K1[0].nIndx[14]=59; 
ST[0].sRAD_K1[0].nIndx[15]=61; 
ST[0].sRAD_K1[0].nIndx[16]=62; 
ST[0].sRAD_K1[0].nIndx[17]=70; 
ST[0].sRAD_K1[0].nIndx[18]=71; 
ST[0].sRAD_K1[0].nIndx[19]=74; 
ST[0].sRAD_K1[0].nIndx[20]=85; 
ST[0].sRAD_K1[0].nIndx[21]=91; 
ST[0].sRAD_K1[0].nIndx[22]=92; 
ST[0].sRAD_K1[0].nIndx[23]=93; 
ST[0].sRAD_K1[0].nIndx[24]=96; 
ST[0].sRAD_K1[0].nIndx[25]=97; 
ST[0].sRAD_K1[0].nIndx[26]=100; 
ST[0].sRAD_K1[0].nIndx[27]=101; 
ST[0].sRAD_K1[0].nIndx[28]=127; 
ST[0].sRAD_K1[0].nIndx[29]=128; 
ST[0].sRAD_K1[0].nIndx[30]=130; 
ST[0].sRAD_K1[0].nIndx[31]=131; 
ST[0].sRAD_K1[0].nIndx[32]=132; 
ST[0].sRAD_K1[0].nIndx[33]=133; 
ST[0].sRAD_K1[0].nIndx[34]=134; 
ST[0].sRAD_K1[0].nIndx[35]=163; 
ST[0].sRAD_K1[0].nIndx[36]=164; 
ST[0].sRAD_K1[0].nIndx[37]=165; 
ST[0].sRAD_K1[0].nIndx[38]=166; 
ST[0].sRAD_K1[0].nIndx[39]=167; 
ST[0].sRAD_K1[0].nIndx[40]=172; 
ST[0].sRAD_K1[0].nIndx[41]=177; 
ST[0].sRAD_K1[0].nIndx[42]=178; 
ST[0].sRAD_K1[0].nIndx[43]=180; 
ST[0].sRAD_K1[0].nIndx[44]=181; 
ST[0].sRAD_K1[0].nIndx[45]=182; 
ST[0].sRAD_K1[0].nIndx[46]=183; 
ST[0].sRAD_K1[0].nIndx[47]=184; 
ST[0].sRAD_K1[0].nIndx[48]=185; 
ST[0].sRAD_K1[0].nIndx[49]=186; 


/* K2 : SZOM, MOS */
ST[0].sRAD_K2[0].nRtuNumRad = 25; /*77*/

ST[0].sRAD_K2[0].nIndx[0]=21;
ST[0].sRAD_K2[0].nIndx[1]=23;
ST[0].sRAD_K2[0].nIndx[2]=25;
ST[0].sRAD_K2[0].nIndx[3]=30;
ST[0].sRAD_K2[0].nIndx[4]=37;
ST[0].sRAD_K2[0].nIndx[5]=40;
ST[0].sRAD_K2[0].nIndx[6]=57;
ST[0].sRAD_K2[0].nIndx[7]=73;
ST[0].sRAD_K2[0].nIndx[8]=82;
ST[0].sRAD_K2[0].nIndx[9]=83;
ST[0].sRAD_K2[0].nIndx[10]=84;
ST[0].sRAD_K2[0].nIndx[11]=86;
ST[0].sRAD_K2[0].nIndx[12]=87;
ST[0].sRAD_K2[0].nIndx[13]=98;
ST[0].sRAD_K2[0].nIndx[14]=120;
ST[0].sRAD_K2[0].nIndx[15]=126;
ST[0].sRAD_K2[0].nIndx[16]=129;
ST[0].sRAD_K2[0].nIndx[17]=145;
ST[0].sRAD_K2[0].nIndx[18]=146;
ST[0].sRAD_K2[0].nIndx[19]=147;
ST[0].sRAD_K2[0].nIndx[20]=148;
ST[0].sRAD_K2[0].nIndx[21]=169;
ST[0].sRAD_K2[0].nIndx[22]=170;
ST[0].sRAD_K2[0].nIndx[23]=171;
ST[0].sRAD_K2[0].nIndx[24]=179;


/* K3 : SZVAR, ORNY, IG */
ST[0].sRAD_K3[0].nRtuNumRad = 110;

ST[0].sRAD_K3[0].nIndx[0]=0;
ST[0].sRAD_K3[0].nIndx[1]=1;
ST[0].sRAD_K3[0].nIndx[2]=2;
ST[0].sRAD_K3[0].nIndx[3]=3;
ST[0].sRAD_K3[0].nIndx[4]=4;
ST[0].sRAD_K3[0].nIndx[5]=5;
ST[0].sRAD_K3[0].nIndx[6]=6;
ST[0].sRAD_K3[0].nIndx[7]=18;
ST[0].sRAD_K3[0].nIndx[8]=8;
ST[0].sRAD_K3[0].nIndx[9]=9;
ST[0].sRAD_K3[0].nIndx[10]=10;
ST[0].sRAD_K3[0].nIndx[11]=11;
ST[0].sRAD_K3[0].nIndx[12]=17;
ST[0].sRAD_K3[0].nIndx[13]=13;
ST[0].sRAD_K3[0].nIndx[14]=14;
ST[0].sRAD_K3[0].nIndx[15]=15;
ST[0].sRAD_K3[0].nIndx[16]=16;
ST[0].sRAD_K3[0].nIndx[17]=19;
ST[0].sRAD_K3[0].nIndx[18]=22;
ST[0].sRAD_K3[0].nIndx[19]=24;
ST[0].sRAD_K3[0].nIndx[20]=26;
ST[0].sRAD_K3[0].nIndx[21]=27;
ST[0].sRAD_K3[0].nIndx[22]=29;
ST[0].sRAD_K3[0].nIndx[23]=31;
ST[0].sRAD_K3[0].nIndx[24]=33;
ST[0].sRAD_K3[0].nIndx[25]=35;
ST[0].sRAD_K3[0].nIndx[26]=36;
ST[0].sRAD_K3[0].nIndx[27]=38;
ST[0].sRAD_K3[0].nIndx[28]=39;
ST[0].sRAD_K3[0].nIndx[29]=42;
ST[0].sRAD_K3[0].nIndx[30]=45;
ST[0].sRAD_K3[0].nIndx[31]=46;
ST[0].sRAD_K3[0].nIndx[32]=47;
ST[0].sRAD_K3[0].nIndx[33]=48;
ST[0].sRAD_K3[0].nIndx[34]=49;
ST[0].sRAD_K3[0].nIndx[35]=52;
ST[0].sRAD_K3[0].nIndx[36]=56;
ST[0].sRAD_K3[0].nIndx[37]=58;
ST[0].sRAD_K3[0].nIndx[38]=60;
ST[0].sRAD_K3[0].nIndx[39]=63;
ST[0].sRAD_K3[0].nIndx[40]=64;
ST[0].sRAD_K3[0].nIndx[41]=65;
ST[0].sRAD_K3[0].nIndx[42]=66;
ST[0].sRAD_K3[0].nIndx[43]=67;
ST[0].sRAD_K3[0].nIndx[44]=68;
ST[0].sRAD_K3[0].nIndx[45]=69;
ST[0].sRAD_K3[0].nIndx[46]=72;
ST[0].sRAD_K3[0].nIndx[47]=75;
ST[0].sRAD_K3[0].nIndx[48]=76;
ST[0].sRAD_K3[0].nIndx[49]=77;
ST[0].sRAD_K3[0].nIndx[50]=78;
ST[0].sRAD_K3[0].nIndx[51]=79;
ST[0].sRAD_K3[0].nIndx[52]=80;
ST[0].sRAD_K3[0].nIndx[53]=81;
ST[0].sRAD_K3[0].nIndx[54]=89;
ST[0].sRAD_K3[0].nIndx[55]=90;
ST[0].sRAD_K3[0].nIndx[56]=95;
ST[0].sRAD_K3[0].nIndx[57]=94;
ST[0].sRAD_K3[0].nIndx[58]=99;
ST[0].sRAD_K3[0].nIndx[59]=102;
ST[0].sRAD_K3[0].nIndx[60]=103;
ST[0].sRAD_K3[0].nIndx[61]=104;
ST[0].sRAD_K3[0].nIndx[62]=105;
ST[0].sRAD_K3[0].nIndx[63]=106;
ST[0].sRAD_K3[0].nIndx[64]=107;
ST[0].sRAD_K3[0].nIndx[65]=108;
ST[0].sRAD_K3[0].nIndx[66]=109;
ST[0].sRAD_K3[0].nIndx[67]=110;
ST[0].sRAD_K3[0].nIndx[68]=111;
ST[0].sRAD_K3[0].nIndx[69]=112;
ST[0].sRAD_K3[0].nIndx[70]=113;
ST[0].sRAD_K3[0].nIndx[71]=114;
ST[0].sRAD_K3[0].nIndx[72]=115;
ST[0].sRAD_K3[0].nIndx[73]=116;
ST[0].sRAD_K3[0].nIndx[74]=117;
ST[0].sRAD_K3[0].nIndx[75]=118;
ST[0].sRAD_K3[0].nIndx[76]=119;
ST[0].sRAD_K3[0].nIndx[77]=121;
ST[0].sRAD_K3[0].nIndx[78]=122;
ST[0].sRAD_K3[0].nIndx[79]=123;
ST[0].sRAD_K3[0].nIndx[80]=124;
ST[0].sRAD_K3[0].nIndx[81]=134;
ST[0].sRAD_K3[0].nIndx[82]=135;
ST[0].sRAD_K3[0].nIndx[83]=136;
ST[0].sRAD_K3[0].nIndx[84]=137;
ST[0].sRAD_K3[0].nIndx[85]=138;
ST[0].sRAD_K3[0].nIndx[86]=139;
ST[0].sRAD_K3[0].nIndx[87]=140;
ST[0].sRAD_K3[0].nIndx[88]=141;
ST[0].sRAD_K3[0].nIndx[89]=142;
ST[0].sRAD_K3[0].nIndx[90]=143;
ST[0].sRAD_K3[0].nIndx[91]=144;
ST[0].sRAD_K3[0].nIndx[92]=150;
ST[0].sRAD_K3[0].nIndx[93]=151;
ST[0].sRAD_K3[0].nIndx[94]=152;
ST[0].sRAD_K3[0].nIndx[95]=153;
ST[0].sRAD_K3[0].nIndx[96]=154;
ST[0].sRAD_K3[0].nIndx[97]=155;
ST[0].sRAD_K3[0].nIndx[98]=156;
ST[0].sRAD_K3[0].nIndx[99]=157;
ST[0].sRAD_K3[0].nIndx[100]=158;
ST[0].sRAD_K3[0].nIndx[101]=159;
ST[0].sRAD_K3[0].nIndx[102]=160;
ST[0].sRAD_K3[0].nIndx[103]=161;
ST[0].sRAD_K3[0].nIndx[104]=162;
ST[0].sRAD_K3[0].nIndx[104]=162;
ST[0].sRAD_K3[0].nIndx[105]=168;
ST[0].sRAD_K3[0].nIndx[106]=173;
ST[0].sRAD_K3[0].nIndx[107]=174;
ST[0].sRAD_K3[0].nIndx[108]=175;
ST[0].sRAD_K3[0].nIndx[109]=176;






/*RST[0].sLIN[0]K RTUk indexei*/
ST[0].sLIN[0].nRtuNumLin = 0;


} /* end fnSetComPar()*/

