//1.zadatak

let unos=+prompt("Unesite broj");
if (unos == 0){
    console.log("Uneseni broj je 0");
}

else{
    if(unos % 2 == 0){
        console.log("Uneseni broj je paran");
    }
    else{
        console.log("Uneseni broj je neparan");
    }
}

//1.zadatak, ternarni operator
let unos=+prompt("Unesite broj");
(unos == 0) ? console.log("Uneseni broj je 0") :
            (unos % 2 == 0) ? console.log("Uneseni broj je paran") : console.log("Uneseni broj je neparan");


//2.zadatak
let operacija=prompt("Unesite znak");
switch(operacija){

    case "+":
        console.log("Zbrajanje");
        break;

    case "-":
        console.log("Oduzimanje");
        break;

    case "*":
        console.log("Mnozenje");
        break;

    case "/":
        console.log("Dijeljenje");
        break;

    default:
        console.log("Krivi unos!");
}


//3.zadatak
let i = 105;
while (i < 155){
    if (i % 10 == 0){
        console.log(i);
    }
    i++;
}


//4.zadatak
zbroj = 0;
for (let i = 50; i <= 100; i++){
    zbroj+=i;
}
console.log(zbroj);

