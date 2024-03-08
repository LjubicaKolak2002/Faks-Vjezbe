//1.zadatak
 function ispisiStotice(min, max) {
    let temp = min;
    setTimeout(function ispisi() {
        console.log(temp);
        if (temp < 1000) {
            setTimeout(ispisi,1000);
        }

        else if (temp < max){
            setTimeout(ispisi, 2000)
        }

        temp+=100;
    }, 2000);
}
ispisiStotice(500, 1500);


//2.zadatak
function currying(pomnozi){
    let rez = 1;
    return function mul(broj){
        if (!broj){
            return rez;
        }

        if (broj < 20 && broj > 0){
            rez = pomnozi(rez, broj);
        }
        return mul;
    }
}
const pomnozi = currying((a, b) => a* b);
console.log(pomnozi(9)(-2)(2)(26)(-2)(3)()); 


//3.zadatak
 let niz = [];
 for (let i = 0; i < 10; i++){
     let element = Math.round(((150-50)*Math.random())+50);
     niz.push(element);
 }
 console.log(niz);

 let min = Math.min(...niz);
 console.log("Najmanji element niza je:", min, ", a njegov indeks je:", niz.indexOf(min));

 let max = Math.max(...niz);
 console.log("Najveci element niza je:", max, ", a njegov indeks je:", niz.indexOf(max));