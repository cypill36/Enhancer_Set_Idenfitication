// Script Name:     id_bash_script.c
// Author:          Cyril Pillai, Joseph Yu
// Creation Date:   03-18-2022

// Description:     This is the pipeline c program for training machine learning 
//                  models for shared/unique cis-regulartory elements 
//                  classifier. 
//                  The script invokes the LS-GKM machine learning tool to 
//                  train the model, and the graphing tool for ROC curves are 
//                  invoked to output performance figures and prediction 
//                  results. 

#include <stdio.h>

int main() {

    // Check for valid number of arguments passed in


    // Check for valid argument inputs


    // Preprocess input files for machine learning tool


    // Invoke machine learning LS-GKM tool and pass in the parameters and input file
    // ./gkmtrain -m 96000 -T 16 $DATA_PATH/shared_5files_1k.fa $DATA_PATH/uniq_5files_1k.fa test_gkmtrain

    // Invoke python ROC curve generation script 

    printf("Program Done!\n");
    return 0;
}

