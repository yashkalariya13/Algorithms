function radixSort(array) {
    let maxCount = maxDigits(array);

    for(let i = 0; i < maxCount; i++) {
        let digits = Array.from({length: 10}, () => []);

        for(let j = 0; j < array.length; j++) {
            let lastDigit = getDigit(array[j], i);
            digits[lastDigit].push(array[j]);
        }

        array = [].concat(...digits);
    }

    return array;
}