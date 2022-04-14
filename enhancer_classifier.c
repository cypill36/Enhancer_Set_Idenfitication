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
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <dirent.h>
#include <errno.h>

#define ARGNUM      2
#define PARAM_POS   1

int main(int argc, char *argv[]) {

    // Check for valid number of arguments passed in
    if (argc != ARGNUM) {
        fprintf(stderr, "Usage: %s <param_file>\n", argv[0]);
        exit(1);
    }

    ///////////////////////////////////////////////////////////////////////////
    // Check for valid argument inputs
    // Check for valid PARAM_FILE
    const char *filename = argv[PARAM_POS];
    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        perror("file cannot be opened");
        exit(2);
    }

    // Check for valid WORKING_DIR path 
    DIR* dir = opendir("working");
    if (dir) {
        closedir(dir);
    } else if (ENOENT == errno) {
        fprintf(stderr, "The working directory does not exist.\n");
        exit(1);
    } else {
        perror("Error in WORKING_DIR parameter.\n");
        exit(2);
    }      

    // Check for valid ML_PLUGIN 

    // Check for valid ANALYSIS_PLUGIN 

    // Create Output Dir for ML and Plotting if specified does not exist    
    int ret = mkdir("ML_output", );
    if (ret == -1 && EEXIST != errno) {
        perror("Error in Creating ML Output Directory\n");
        exit(3);
    }                                                                           
    
    ret = mkdir("Plotting_output", );
    if (ret == -1 && EEXIST != errno) {
        perror("Error in Creating Plotting Output Directory\n");
        exit(3);
    } 


    // Preprocess input files and parameters for machine learning tool 


    // Invoke ML plugin tool and pass in the parameters and input file 


    // Invoke analysis plugin tool and pass in ML_PLUGIN output files 

    printf("Program Done!\n");
    return 0;
}

