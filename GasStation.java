public class Solution {
// DO NOT MODIFY THE ARGUMENTS WITH "final" PREFIX. IT IS READ ONLY
public static int canCompleteCircuit( int[] A, int[] B) {

int minStationVal = Integer.MAX_VALUE;
int minstationIndex = -1;

int size = A.length;
for(int i =0; i < size; i++){
int fuelTemp = 0;
int j = i;
int counter = 0;

while(counter < size){
if(j == size){
j=0;
}

fuelTemp = fuelTemp + A[j];
if(fuelTemp >= B[j]){
fuelTemp = fuelTemp - B[j];
j++;
counter++;
}else{
break;
}
}
if( counter == size){
minStationVal = A[i];
minstationIndex = i;
break;
}
}

return minstationIndex;
}
}

