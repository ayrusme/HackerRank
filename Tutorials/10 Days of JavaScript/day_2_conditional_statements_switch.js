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

function getLetter(s) {
    let letter;
    s = s.charAt(0);
    // Write your code here
    let set1 = new Set(['a', 'e', 'i', 'o', 'u']);
    let set2 = new Set(['b', 'c', 'd', 'f', 'g']);
    let set3 = new Set(['h', 'j', 'k', 'l', 'm']);
    let set4 = new Set(['n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'])
    letter = set1.has(s) ? 'A' : set2.has(s) ? 'B' : set3.has(s) ? 'C' : set4.has(s) ? 'D' : '';
    return letter;
}

