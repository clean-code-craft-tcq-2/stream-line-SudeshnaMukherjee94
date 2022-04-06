  #include <stdio.h>	
	#include <math.h>
	#include <stdlib.h>
	#include "Sender.h"
	 
	void print(float Temperature, float SOC){
	    printf(" Temperature : %.2f , State of Charge : %.2f \n",Temperature,SOC);
	}
	 
	void ReadParametersFromFile(float* Temperature, float* SOC)
	{
	    float Temp_reading, SOC_reading;
	    FILE* fp= fopen("./BatteryParameters.txt","r");  
	 
	    if (NULL == fp)
	    {
	        printf("file can't be opened \n");
	    }
	    else 
	    {
	        for(int i=0;fscanf(fp, "%f\t%f\t%f\n", &Temp_reading,&SOC_reading)!=EOF ;i++)
	        {
	            *(Temperature+i) = Temp_reading;
	            *(SOC+i)  = SOC_reading;
	        }
	    }
	    fclose(fp);  
	}
	
int CheckCounter == 0;

	int PrintParameterToConsole(float* Temperature, float* SOC)
	{
	    float Temp_ToPrint, SOC_ToPrint;
	    for(int i = 0; i<NO_OF_READINGS;i++)
	    {
	        Temp_ToPrint = *(Temperature+i);
	        SOC_ToPrint = *(SOC+i);
	        print(Temp_ToPrint, SOC_ToPrint);
        CheckCounter++;
	    }
    if (CheckCounter == NO_OF_READINGS)
      return 1;
    else
      return 0;
	}
	 
	void ParametersSender()
	{
	  float Temperature[NO_OF_READINGS], SOC[NO_OF_READINGS] = {0};
	  ReadParametersFromFile( Temperature,SOC);
	  PrintParameterToConsole( Temperature,SOC);
	}
