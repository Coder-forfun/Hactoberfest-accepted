// This is a one player hungman game

// Global variables
var word = "hangman";
var wordArray = word.split("");
var wordLength = wordArray.length;
var guessArray = [];
var guessCount = 0;
var guessLimit = 6;
var guess = "";

// Create an array of underscores
for (var i = 0; i < wordLength; i++) {
    guessArray[i] = "_";
    }

// Create a function to check if the guess is correct
function checkGuess() {
    for (var i = 0; i < wordLength; i++) {
        if (wordArray[i] === guess) {
            guessArray[i] = guess;
        }
    }
}

// Create a function to check if the game is over
function gameOver() {
    if (guessCount === guessLimit) {
        console.log("Game Over");
    }
}

// Create a function to check if the game is won
function gameWon() {
    if (guessArray === wordArray) {
        console.log("You won!");
    }
}
