
//regularne funkcije
/*function parna(x){
     return (x % 2 == 0);
 }

 function brojiNeparne(){
     let x = 0;
     return function() {
        return ++x;
    };
 }

function zbrojiParne(){
    let sum = 0;
    return function(x){
        return sum += x;

   };
}

let unos =+prompt("Unesite broj:");

let neparni = brojiNeparne();
let parni = zbrojiParne();
let sum = 0;
let brojac = 0;
while(unos != 0){

    if (parna(unos)){
        sum = parni(unos);
    }

    else{
        brojac = neparni();
    }

    unos =+prompt("Unos:");
        
}
console.log("Zbroj parnih: ",sum, "Broj_neparnih: ", brojac);*/


//arrow funkcije
let parna = (x) => (x % 2 == 0);

let brojiNeparne = () =>{
    let x = 0;
    return () =>  ++x;
}

let zbrojiParne = () =>{
   let sum = 0;
   return (x) =>  sum += x;

}

let unos =+prompt("Unesite broj:");

let neparni = brojiNeparne();
let parni = zbrojiParne();
let sum = 0;
let brojac = 0;
while(unos != 0){

   if (parna(unos)){
       sum = parni(unos);
   }

   else{
       brojac = neparni();
   }

   unos =+prompt("Unos:");
       
}
console.log("Zbroj parnih: ",sum, "Broj_neparnih: ", brojac);


/*Definirati funkciju rezultat koja će ispisivati poruku o ostvarenom rezultatu iz ispita iz određenog kolegija. Prva vrijednost koja se šalje funkciji je naziv kolegija, 
druga ostvareni broj bodova, a treća ukupan broj bodova. Primjer poziva funkcije rezultat je rezultat("MUP/PWKS")(25)(35); , a primjer ispisa pozvane funkcije "Iz kolegija 
MUP/PWKS ostvarili ste 71.43% " . 
Koristiti metodu toFixed objekta Number za zaokruživanje rezultata na dva decimalna mjesta (broj.toFixed(2)). Zadatak riješiti i sa regularnim i sa arrow zapisom funkcija.*/


//regularna funkcija
function rezultat(kolegij){
    return function(ostvareni_bodovi){
        return function(ukupni_bodovi){
            console.log("Iz kolegija " + kolegij + " ostvarili ste " + (((ostvareni_bodovi / ukupni_bodovi)*100).toFixed(2) + '%'));
        }
    }
}
rezultat("PWKS/MUP")(25)(35);


//arrow funkcija
rezultat = (kolegij) => (ostvareni_bodovi) =>
        (ukupni_bodovi) => console.log("Iz kolegija " + kolegij + " ostvarili ste " + (((ostvareni_bodovi / ukupni_bodovi)*100).toFixed(2) + '%'));
        
rezultat("PWKS/MUP")(25)(35);




