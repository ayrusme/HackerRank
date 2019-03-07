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
 * Complete the reverseString function
 * Use console.log() to print to stdout.
 */
function reverseString(s) {
    let output = undefined;
    try {
        output = s.split("").reverse().join("")
    } catch (exp) {
        console.log(exp.message)
        output = s;
    } finally {
        console.log(output)
    }
}


function main() {
    const s = eval(readLine());
    
    reverseString(s);
}