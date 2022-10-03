public class TwoSum {
    public static void main(String[] args) {
        int[] arr = {2,3,4,5,6,7};
        int x = 11;
        int[] res = twoSum(arr,x);
        for(int i = 0 ; i< res.length;i++){
            System.out.println(res[i]);
        }

    }
    public static int[] twoSum(int[] nums, int target) {
        int a[] = new int[2];
        for(int i = 0; i < nums.length - 1; i++){
            for(int j = i + 1; j < nums.length; j++){
                if(target == nums[i] + nums[j]){
                    a[0] = i;
                    a[1] = j;
                    break;
                }
            }
        }
        return a;
    }
}



