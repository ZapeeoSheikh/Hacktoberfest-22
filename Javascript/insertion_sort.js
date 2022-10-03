// Time Complexity: O(n^2)
function selectionSort(inArr) { 
    let n = inArr.length; // get arr length

    // Find next smallest number
    for(let i = 0; i < n; i++) {
        let smallest = i;
        for(let j = i + 1; j < n; j++){
            if(inArr[j] < inArr[smallest]) {
                smallest=j; 
            }
         }
         // Swapping the elements
         if (smallest != i) {
             let tmp = inArr[i]; // tmp var for swap
             inArr[i] = inArr[smallest];
             inArr[smallest] = tmp;      
        }
    }
    return inArr;
}