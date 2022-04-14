'''
Cyril Pillai/Joseph Yu
ROC curve generator

Enhancer Identification
'''

import matplotlib.pyplot as plt
import numpy as np
import array as arr
from sklearn import metrics
import sys
from os.path import exists


'''
I had to pip install matplotlib and numpy and 
add sklearn to the python interpreter. 

The first argument passed into the program should be the prediction
output from the model containing values for each 
of the enhancers it predicted as less than 1 (unique) 
and greate than one (shared). 
This file should look like prediction_output.txt


The second argument is a file containing a key for each of these enhancers
so the program can create a confusion matrix with the predictions
and generate the curve. 
This file should look like key.txt, but can be changed
depending on what kind of key file we are parsing. 
'''



argumentList = sys.argv
if len(argumentList) < 2:
    print("invalid number of arguments, pass in 2 file paths")
    sys.exit();


if exists(argumentList[1]):
    pass
else:
    print("invalid file name")
    sys.exit();

if exists(argumentList[2]):
    pass
else:
    print("invalid file name")
    sys.exit();



with open(argumentList[1]) as file1:
    pred = []
    count = 0
    count2 = 0
    for line in file1:
        lineSplit = line.split('\t')
        columnSplit = lineSplit[1].split('\n')
        pLabel = float(columnSplit[0])


        if pLabel > 0:
            pred.append(1)
            count2 += 1
        else:
            pred.append(0)
            count += 1

with open(argumentList[2]) as file2:
    key = []
    count = 0
    count2 = 0
    for line in file2:
        pLabel = float(line)
        key.append(pLabel);

y = np.array(pred)
# print(y)
# print(count)
# print(count2)

z = np.array(key)




fpr, tpr, thresholds = metrics.roc_curve(y, z)
roc_auc = metrics.auc(fpr, tpr)
display = metrics.RocCurveDisplay(fpr=fpr, tpr=tpr, roc_auc=roc_auc,
                                  estimator_name='example estimator')
display.plot()

plt.show()

# See PyCharm help at https://www.jetbrains.com/help/pycharm/
