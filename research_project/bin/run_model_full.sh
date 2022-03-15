#!/bin/bash

DATA_PATH='../data/2020-03-20_inputdata'
RES_PATH='../results'

gkmtrain -x 5 -m 96000 -T 16 $DATA_PATH/shared_5files.fa $DATA_PATH/uniq_5files.fa $RES_PATH/binary_full

