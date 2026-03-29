public class MaxHeap {

    public void insertPriority(int[] arr, int size, int value) {
        arr[size] = value;
        int i = size;
        
        while (i > 0 && arr[i] > arr[(i - 1) / 2]) {
            int temp = arr[i];
            arr[i] = arr[(i - 1) / 2];
            arr[(i - 1) / 2] = temp;
            
            i = (i - 1) / 2;
        }
    }
}
