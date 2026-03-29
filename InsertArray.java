public class InsertArray {

    public void insertASC(int[] arr, int n, int value) {
        int i = n - 1;
        
        while (i >= 0 && arr[i] > value) {
            arr[i + 1] = arr[i];
            i--;
        }
        
        arr[i + 1] = value;
    }
}
