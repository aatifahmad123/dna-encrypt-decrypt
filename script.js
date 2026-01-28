// Binary lookup table for A-Z and space
const binaryTable = [
    [0, 1, 0, 0, 0, 0, 0, 1], // A
    [0, 1, 0, 0, 0, 0, 1, 0], // B
    [0, 1, 0, 0, 0, 0, 1, 1], // C
    [0, 1, 0, 0, 0, 1, 0, 0], // D
    [0, 1, 0, 0, 0, 1, 0, 1], // E
    [0, 1, 0, 0, 0, 1, 1, 0], // F
    [0, 1, 0, 0, 0, 1, 1, 1], // G
    [0, 1, 0, 0, 1, 0, 0, 0], // H
    [0, 1, 0, 0, 1, 0, 0, 1], // I
    [0, 1, 0, 0, 1, 0, 1, 0], // J
    [0, 1, 0, 0, 1, 0, 1, 1], // K
    [0, 1, 0, 0, 1, 1, 0, 0], // L
    [0, 1, 0, 0, 1, 1, 0, 1], // M
    [0, 1, 0, 0, 1, 1, 1, 0], // N
    [0, 1, 0, 0, 1, 1, 1, 1], // O
    [0, 1, 0, 1, 0, 0, 0, 0], // P
    [0, 1, 0, 1, 0, 0, 0, 1], // Q
    [0, 1, 0, 1, 0, 0, 1, 0], // R
    [0, 1, 0, 1, 0, 0, 1, 1], // S
    [0, 1, 0, 1, 0, 1, 0, 0], // T
    [0, 1, 0, 1, 0, 1, 0, 1], // U
    [0, 1, 0, 1, 0, 1, 1, 0], // V
    [0, 1, 0, 1, 0, 1, 1, 1], // W
    [0, 1, 0, 1, 1, 0, 0, 0], // X
    [0, 1, 0, 1, 1, 0, 0, 1], // Y
    [0, 1, 0, 1, 1, 0, 1, 0], // Z
    [0, 0, 1, 0, 0, 0, 0, 0]  // Space
];

function convertToDNA() {
    const input = document.getElementById('nameInput').value;

    if (!input.trim()) {
        alert('Please enter your name!');
        return;
    }

    const upperName = input.toUpperCase();
    let binaryCode = '';

    // Generate binary code
    for (let i = 0; i < upperName.length; i++) {
        const char = upperName[i];
        let index;

        if (char >= 'A' && char <= 'Z') {
            index = char.charCodeAt(0) - 'A'.charCodeAt(0);
        } else if (char === ' ') {
            index = 26;
        } else {
            continue; // Skip non-alphabetic characters
        }

        for (let j = 0; j < 8; j++) {
            binaryCode += binaryTable[index][j];
        }
    }

    // Generate DNA sequence - FIXED VERSION
    let dnaSequence = '';
    for (let i = 0; i < upperName.length; i++) {
        const char = upperName[i];
        let index;

        if (char >= 'A' && char <= 'Z') {
            index = char.charCodeAt(0) - 'A'.charCodeAt(0);
        } else if (char === ' ') {
            index = 26;
        } else {
            continue; // Skip non-alphabetic characters
        }

        for (let k = 0; k < 8; k += 2) {
            const bit1 = binaryTable[index][k];
            const bit2 = binaryTable[index][k + 1];

            if (bit1 === 0 && bit2 === 0) {
                dnaSequence += 'T';
            } else if (bit1 === 1 && bit2 === 1) {
                dnaSequence += 'A';
            } else if (bit1 === 0 && bit2 === 1) {
                dnaSequence += 'C';
            } else if (bit1 === 1 && bit2 === 0) {
                dnaSequence += 'G';
            }
        }
    }

    // Display results
    document.getElementById('uppercaseName').textContent = upperName;
    document.getElementById('binaryCode').textContent = binaryCode;
    document.getElementById('dnaSequence').textContent = dnaSequence;
    document.getElementById('outputSection').classList.add('show');
}

// Allow Enter key to trigger conversion
document.getElementById('nameInput').addEventListener('keypress', function (event) {
    if (event.key === 'Enter') {
        convertToDNA();
    }
});