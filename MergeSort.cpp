//This is the code for the Merging Sort function of two Sorted Arrays sorted in ascending oder toan array containing the elements of both the arrays in ascending order
void MergeSort(int a[100],int m,int b[100],int n){	//This is the function definition with parametes including the two arrays to be merged sort in ascending order
	int c[200];
	int k;
	for(int i=0;int j=0;i<m;j<n;k++){
		if(a[i]<b[j]){		//if the element of the 1st array is less than the element of the 2nd array then send the element to a separate array
			c[k]=a[i];
			i++; 			//increment the array by one 
		}
		else{
			c[k]=b[j];		//else the element of the 2nd array is to be send to the new array
			j++;
		}
	}
	while(i<m){
		c[k]=a[i];
		i++;
		k++;
	}
	while(j<n){
		c[k]=b[j];
		j++;
		k++;
	}
}

