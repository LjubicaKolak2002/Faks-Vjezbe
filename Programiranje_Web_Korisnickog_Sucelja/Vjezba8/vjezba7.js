//1.zadatak
function findMin(...args){
    if (args.length < 1){
        console.log("Nedovoljan broj elemenata!");
    }
    let minimum = Math.min(...args);
    return minimum;
}

console.log(findMin(1,4,12,-3)); 
console.log(findMin(1,-1));
console.log(findMin(3,1)); 


//2.zadatak
function mergeObjects(object1, object2){
    return({...object1, ...object2});
}
console.log(mergeObjects({a:1, b:2}, {c:3, d:4}));


//3.zadatak
function doubleAndReturnArgs(arr, ...args){
    let newArr = [...arr];
    let element = args.map(function(number){
        return (number * 2);
    })
    newArr.push(...element);
    return newArr;

}
console.log(doubleAndReturnArgs([1,2,3],4,4));
console.log(doubleAndReturnArgs([2],10,4));


//4.zadatak
class Person{
    constructor(name, age){
        this.name = name;
        this.age = age;
    }
    toString(){
        return (`${this.name}, ${this.age} godina`)
    }

}
const marko = new Person("Marko", 26);
console.log(marko.toString());


//5.zadatak
var pokemons = new XMLHttpRequest();
pokemons.open('GET', "https://pokeapi.co/api/v2/pokemon-color/yellow");

pokemons.onload = function () {
    //console.log( pokemons);
    if (pokemons.status === 200){
        let response = JSON.parse( pokemons.response);
        //console.log(response.pokemon_species);

        let pokemonNames = response.pokemon_species.map(element => element.name);
        console.log(pokemonNames);
    }
}
pokemons.send();











