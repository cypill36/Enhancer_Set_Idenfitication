#!/bin/bash
# test with subset of regions

DATA_PATH='../data/2020-03-20_inputdata'

./gkmtrain -m 96000 -T 16 $DATA_PATH/shared_5files_1k.fa $DATA_PATH/uniq_5files_1k.fa test_gkmtrain

