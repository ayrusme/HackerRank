'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();    
});

function readLine() {
    return inputString[currentLine++];
}

/*
 * Complete the vowelsAndConsonants function.
 * Print your output using 'console.log()'.
 */
function vowelsAndConsonants(s) {
    s = [...s];
    let vowels = new Set(['a', 'e', 'i', 'o', 'u']);
    // print vowels
    s.forEach((item) => { if (vowels.has(item)) console.log(item) })
    s.forEach((item) => { if (!vowels.has(item)) console.log(item) })
}


function main() {
    const s = readLine();
    
    vowelsAndConsonants(s);
}