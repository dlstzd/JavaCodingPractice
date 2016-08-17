public class Q2 {

    /***
     * Return the index of toFind in sortedArray. Return -1 if the value is not found. The array has unknown size and
     * only the supports the .at(index) function.
     */
    public static int find(int toFind, ArrayWrapper sortedArray){
        // TODO

	int index = 0;
	while(true){
	    if(sortedArray.at(index) == toFind)
		return index;
	    else if(sortedArray.at(index) < toFind){
		index = 2**index;
	    }
	    else{
		break;
		//index val is greater than search val -- dont check rest of array
	    }

	}
	
	int high = index - 1;
	int low = index/2 + 1;
	while(high != low){
	    int mid = low + (high-low)/2;
	    if(sortedArray.at(mid) == toFind){
		return mid;
	    }else if(sortedArray.at(mid) < toFind){
		low = mid+1;
	    }else if(sortedArray.at(mid) > toFind){
		high = mid-1;
	    }
	}

	return -1;
    }

}
