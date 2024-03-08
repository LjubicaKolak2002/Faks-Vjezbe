//1.zadatak
function getDayofDate(date){
    let dateAll = new Date(date)
    switch (dateAll.getDay()){
        case 0:
            console.log("Nedjelja");
            break;
        case 1:
            console.log("Ponedijeljak");
            break;
        case 2:
            console.log("Utorak");
            break;
        case 3:
            console.log("Srijeda");
            break;
        case 4:
            console.log("Cetvrtak");
            break;
        case 5:
            console.log("Petak");
            break;
        case 6:
            console.log("Subota");
            break;
        

    }

}

let date = "12/08/2011"
console.log(getDayofDate(date));

//2.zadatak
const scores = {"A": 100, "B": 14, "C": 9, "D": 28, "E": 145, "F": 12, "G": 3, "H": 10, "I": 200, "J": 100, "K": 114, "L": 100, "M": 25, 
"N": 450, "O": 80, "P": 2, "Q": 12, "R": 400, "S": 113, "T": 405, "U": 11, "V": 10, "W": 10, "X": 3, "Y": 210, "Z": 23}

function checkString(string) {
    let result = 0;
    for (let i = 0; i < string.length; i++){
        result += scores[string[i]];
    }

    if (result <= 60){
        console.log("NOT TOO GOOD");
    }

    else if (result >= 61 && result <= 300){
        comnsole.log("PRETTY GOOD");
    }

    else if (result >= 301 && result <= 599){
        console.log("VERY GOOD");
    } 

   else {
        console.log("THE BEST");
    }
}

let string = "YOU";
console.log(checkString(string));


//3.zadatak
function freeShipping(order){
    let result2 = 0;
    for (key in order){
        result2 += order[key];
    }
    console.log(result2 > 50);
    
}

freeShipping({ "Shampoo": 5.99, "Rubber Ducks": 15.99 }) 
freeShipping({ "Flatscreen TV": 399.99 }) 
freeShipping({ "Monopoly": 11.99, "Secret Hitler": 35.99, "Bananagrams": 13.99 })

//4.zadatak
function specialReverse(sentence, letter){
    function reverseString(string){
        let newString = "";
        for (let i = string.length - 1; i >= 0; i--){
            newString += string[i];
    
        }
        return newString;
    }
    
    let newString = "";
    let newSentence = sentence.split(" ");
    for (let i = 0; i < newSentence.length; i++){
        if (newSentence[i].startsWith(letter)){
            newString += reverseString(newSentence[i]);
        }

        else{
            newString += newSentence[i];

        }
        newString += " ";
        
    }
    console.log(newString);

}

let sentence = "first man to walk on the moon";
let letter ="m";
console.log(specialReverse(sentence,letter));