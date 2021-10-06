function partition(items, left, right) {
    //rem that left and right are pointers.

    let pivot = items[Math.floor((right + left) / 2)],
        i = left, //left pointer
        j = right; //right pointer

    while (i <= j) {
        //increment left pointer if the value is less than the pivot
        while (items[i] < pivot) {
            i++;
        }

        //decrement right pointer if the value is more than the pivot
        while (items[j] > pivot) {
            j--;
        }

        //else we swap.
        if (i <= j) {
            [items[i], items[j]] = [items[j], items[i]];
            i++;
            j--;
        }
    }

    //return the left pointer
    return i;
}

function quickSort(items, left, right) {

    if (items.length > 1) {
        let index = partition(items, left, right); //get the left pointer returned

        if (left < index - 1) {
            //more elements on the left side
            quickSort(items, left, index - 1);
        }

        if (index < right) {
            //more elements on the right side
            quickSort(items, index, right);
        }
    }

    return items; //return the sorted array
}

let items = [18, 8, 24, 9, 15, 98, 7, 2, 54, 25, 66, 24, 19, 20];

let output = quickSort(items, 0, items.length - 1);
console.log(output);