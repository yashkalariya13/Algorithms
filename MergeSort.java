package vid24oops;

//Merge Sort - Using Divide and Conquer rule
public class MergeSort {

    public static void conquer(int arr[],int si,int mid, int ei) {
        int merged[] = new int[ei-si+1];   //Creating a new array to store the merged elements in a sorted array. ei-si+1 means to fit the exact array size
        int indx1 = si;
        int indx2 = mid+1;
        int x = 0;  //index to locate in merged array

        while(indx1<=mid && indx2<=ei){
            if(arr[indx1]<arr[indx2])  //Checking first element of 1st half array & first element of second half array, then push first element of first array
            {
                merged[x++] = arr[indx1++];
            }
            else  //else push first element of second array
            {
                merged[x++] = arr[indx2++];
            }

        //But think there are few elements in 1st array but 2nd array is done
        while(indx1<=mid){
            merged[x++] = arr[indx1++];
        }

        //But think there are few elements in 1st array but 2nd array is done
        while(indx2<=ei){
            merged[x++] = arr[indx2++];
        }
        }
        for(int i =0,j=si;i<merged.length;i++,j++)  //j is the index of merged array
        {
                arr[j]=merged[i];
        }

    }
    public static void divide(int arr[],int si,int ei){

        if(si>=ei)    //if incase the starting element >= ending element,ie, only starting element no ending element,ie, only one element
        {
            return;
        }
        int mid = si + (ei-si)/2;   //Didnt use mid =(si+ei)/2 because it gives space complexity for larger array
        divide(arr,si,mid); //First part of array
        divide(arr,mid+1,ei); //Second part of array
        conquer(arr,si,mid,ei); //Call to conquer to merge all divided elements

    }
    public static void main(String[] args) {
        int arr[] ={3,6,8,7,9};
        int n = arr.length;

        divide(arr,0,n-1);

        for(int i =0;i<n;i++){
            System.out.println(arr[i]+ " ");
        }
    }
}
