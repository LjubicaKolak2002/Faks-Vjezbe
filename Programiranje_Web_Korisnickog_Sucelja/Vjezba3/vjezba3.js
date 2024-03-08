//1.zadatak

function vratiZbroj(...args){
    let zbroj = 0;
    if (args.length < 2){
        console.log("Nedovoljan broj elemenata!");
    }
    else{
        return(args[0] + args[args.length-1])

    }
}
console.log(vratiZbroj(7,11,-6,12,6));

//2.zadatak
let nizBrojeva=[16,-5,3,-17,-8,9,-4,12,6,18,25,-1];

function glavna(nizBrojeva,fjaPozit,fjaDjelji, brojDj){
    for (const i of nizBrojeva){
        if (fjaPozit(i) && fjaDjelji(i,brojDj)){
            console.log(i);

        }
    }

}

function fjaPozit(x){
    return (x > 0);
}

function fjaDjelji(x,y){
    return (x % y == 0);
}

console.log(glavna(nizBrojeva, fjaPozit,fjaDjelji, 4));

//3.zadatak

function glavna2(funUnos, n, funZbroji){
    let zbroj = 0;
    for (let i = 0; i < n; i++){            
        let unos = funUnos();
        zbroj = funZbroji(unos, zbroj)
    }
    return zbroj;


}

function funUnos(){
    let unos = +prompt("Unesite broj");
    return unos;
}

function funZbroji(x,y){
    return (x + y);
}

console.log(glavna2(funUnos, 3, funZbroji));


